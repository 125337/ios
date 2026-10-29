@interface EventModel : NSObject
{
    NSString * _Type; // +0x8
    long long _RelativeTime; // +0x10
    long long _Index; // +0x18
    NSString * _Path; // +0x20
    long long _Duration; // +0x28
    ParametersModel * _Parameters; // +0x30
}
- (id)Type;
- (void)setType:(id)arg1;
- (long long)RelativeTime;
- (void)setRelativeTime:(long long)arg1;
- (long long)Index;
- (void)setIndex:(long long)arg1;
- (id)Path;
- (void)setPath:(id)arg1;
- (long long)Duration;
- (void)setDuration:(long long)arg1;
- (id)Parameters;
- (void)setParameters:(id)arg1;
- (void).cxx_destruct;
@end

