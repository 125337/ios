@interface EmoticonPackageStateItem : NSObject
{
    long long m_state; // +0x8
    EmoticonStoreItem * m_item; // +0x10
    float m_process; // +0x18
}
- (long long)m_state;
- (void)setM_state:(long long)arg1;
- (float)m_process;
- (void)setM_process:(float)arg1;
- (id)m_item;
- (void)setM_item:(id)arg1;
- (void).cxx_destruct;
@end

