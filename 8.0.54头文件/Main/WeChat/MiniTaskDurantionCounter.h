@interface MiniTaskDurantionCounter : NSObject
{
    id _userInfo; // +0x8
    unsigned long long _storedDurantion; // +0x10
    unsigned long long _baselineTime; // +0x18
}
- (id)init;
- (void)reset;
- (void)pause;
- (void)resume;
- (unsigned long long)durantion;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (unsigned long long)storedDurantion;
- (void)setStoredDurantion:(unsigned long long)arg1;
- (unsigned long long)baselineTime;
- (void)setBaselineTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

