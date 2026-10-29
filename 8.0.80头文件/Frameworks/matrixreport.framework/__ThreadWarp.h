@interface __ThreadWarp : NSObject
{
    id m_target; // +0x8
    SEL m_sel; // +0x10
    id m_arg; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)Run;
- (id)m_target;
- (void)setM_target:(id)arg1;
- (SEL)m_sel;
- (void)setM_sel:(SEL)arg1;
- (id)m_arg;
- (void)setM_arg:(id)arg1;
@end
