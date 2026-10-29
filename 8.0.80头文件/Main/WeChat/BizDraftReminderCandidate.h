@interface BizDraftReminderCandidate : NSObject
{
    unsigned long long _bizType; // +0x8
    NSString * _identity; // +0x10
    unsigned long long _updateTime; // +0x18
}
- (unsigned long long)bizType;
- (void)setBizType:(unsigned long long)arg1;
- (id)identity;
- (void)setIdentity:(id)arg1;
- (unsigned long long)updateTime;
- (void)setUpdateTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
