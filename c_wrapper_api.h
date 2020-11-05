#ifndef __C_API_H__
#define __C_API_H__

typedef void*   CExceptionHandler;

#ifdef __cplusplus
extern "C"
{
#endif
CExceptionHandler newCExceptionHandlerSimple(void);
#ifdef __cplusplus
}
#endif

#endif  /* __C_API_H__*/


