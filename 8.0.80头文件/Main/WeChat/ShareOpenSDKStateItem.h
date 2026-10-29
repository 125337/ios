@interface ShareOpenSDKStateItem : MMObject
{
    long long m_state; // +0x8
    double m_progress; // +0x10
}
- (id)initWithState:(long long)arg1;
- (id)initWithState:(long long)arg1 progress:(double)arg2;
- (long long)m_state;
- (void)setM_state:(long long)arg1;
- (double)m_progress;
- (void)setM_progress:(double)arg1;
@end
