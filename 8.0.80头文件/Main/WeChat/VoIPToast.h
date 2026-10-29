@interface VoIPToast : NSObject
{
    BOOL _hasShowedBefore; // +0x8
    BOOL _isDiff; // +0x9
    NSString * _string; // +0x10
    double _remainTime; // +0x18
    unsigned long long _type; // +0x20
    unsigned long long _startTime; // +0x28
}
+ (id)constructVoIPToast:(id)arg1 delta:(double)arg2 type:(unsigned long long)arg3 isDiff:(BOOL)arg4;
- (id)string;
- (void)setString:(id)arg1;
- (double)remainTime;
- (void)setRemainTime:(double)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (BOOL)hasShowedBefore;
- (void)setHasShowedBefore:(BOOL)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (BOOL)isDiff;
- (void)setIsDiff:(BOOL)arg1;
- (void).cxx_destruct;
@end
