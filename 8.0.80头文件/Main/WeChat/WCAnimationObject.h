@interface WCAnimationObject : NSObject
{
    double _m_duration; // +0x8
    double _m_delay; // +0x10
    unsigned long long _m_options; // +0x18
    id /* block */ _m_animations; // +0x20
    id /* block */ _m_completion; // +0x28
}
- (double)m_duration;
- (void)setM_duration:(double)arg1;
- (double)m_delay;
- (void)setM_delay:(double)arg1;
- (unsigned long long)m_options;
- (void)setM_options:(unsigned long long)arg1;
- (id /* block */)m_animations;
- (void)setM_animations:(id /* block */)arg1;
- (id /* block */)m_completion;
- (void)setM_completion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
