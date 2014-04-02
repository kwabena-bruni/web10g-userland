#ifndef TCPE_NL_H
#define TCPE_NL_H

#define DEFAULT_PERF_MASK  0x3ffffffffUL
#define DEFAULT_PATH_MASK  0x3ffffffUL
#define DEFAULT_STACK_MASK 0x1ffffffffffUL
#define DEFAULT_APP_MASK   0xfffUL
#define DEFAULT_TUNE_MASK  0xfUL

enum nl_estats_msg_types {
        TCPE_CMD_LIST_CONNS,
        TCPE_CMD_READ_ALL,
        TCPE_CMD_READ_VARS,
        TCPE_CMD_WRITE_VAR,
        NLE_MSG_MAX
};

enum nl_estats_attr {
        NLE_ATTR_UNSPEC,
        NLE_ATTR_PERF,
        NLE_ATTR_PATH,
        NLE_ATTR_STACK,
        NLE_ATTR_APP,
        NLE_ATTR_TUNE,
        NLE_ATTR_PERF_MASK,
        NLE_ATTR_PATH_MASK,
        NLE_ATTR_STACK_MASK,
        NLE_ATTR_APP_MASK,
        NLE_ATTR_TUNE_MASK,
        NLE_ATTR_MASK,
        NLE_ATTR_4TUPLE,
	NLE_ATTR_WRITE,
        __NLE_ATTR_MAX
};
#define NLE_ATTR_MAX (__NLE_ATTR_MAX - 1)

enum neattr_4tuple {
        NEA_UNSPEC,
        NEA_REM_ADDR,
        NEA_REM_PORT,
        NEA_LOCAL_ADDR,
        NEA_LOCAL_PORT,
        NEA_CID,
        __NEA_4TUPLE_MAX
};
#define NEA_4TUPLE_MAX (__NEA_4TUPLE_MAX - 1)

enum neattr_mask {
        NEA_UNSPEC_MASK,
        NEA_PERF_MASK,
        NEA_PATH_MASK,
        NEA_STACK_MASK,
        NEA_APP_MASK,
        NEA_TUNE_MASK,
        __NEA_MASK_MAX
};
#define NEA_MASK_MAX (__NEA_MASK_MAX - 1)

enum neattr_write {
	NEA_UNSPEC_WRITE,
	NEA_WRITE_VAR,
	NEA_WRITE_VAL,
	__NEA_WRITE_MAX
};
#define NEA_WRITE_MAX (__NEA_WRITE_MAX - 1)

#endif /* TCPE_NL_H */
