@interface __CThreadWarp : NSObject
{
    void * * m_funp; // +0x8
    void * m_arg; // +0x10
    void * * m_fun; // +0x18
}
- (id)init;
- (void)Run;
- (void * *)m_funp;
- (void)setM_funp:(void * *)arg1;
- (void * *)m_fun;
- (void)setM_fun:(void * *)arg1;
- (void *)m_arg;
- (void)setM_arg:(void *)arg1;
@end

