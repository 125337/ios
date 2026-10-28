@interface WCFinderFilePickLimiter : NSObject
{
    long long _minDurationLimit; // +0x8
    NSString * _minDurationToast; // +0x10
    long long _maxDurationLimit; // +0x18
    NSString * _maxDurationToast; // +0x20
    long long _maxFileSizeLimit; // +0x28
    NSString * _maxFileSizeToast; // +0x30
    unsigned long long _forbidenMediaType; // +0x38
    NSString * _forbidenMediaTypeToast; // +0x40
}
- (BOOL)testDuration:(unsigned long long *)arg1 filesize:(unsigned long long *)arg2;
- (BOOL)showToastDuration:(unsigned long long *)arg1 filesize:(unsigned long long *)arg2;
- (id)showToastReturnWordingDuration:(unsigned long long *)arg1 filesize:(unsigned long long *)arg2;
- (id)_showToastDuration:(unsigned long long *)arg1 filesize:(unsigned long long *)arg2;
- (long long)limitTypeForDuration:(unsigned long long *)arg1 filesize:(unsigned long long *)arg2;
- (long long)minDurationLimit;
- (void)setMinDurationLimit:(long long)arg1;
- (id)minDurationToast;
- (void)setMinDurationToast:(id)arg1;
- (long long)maxDurationLimit;
- (void)setMaxDurationLimit:(long long)arg1;
- (id)maxDurationToast;
- (void)setMaxDurationToast:(id)arg1;
- (long long)maxFileSizeLimit;
- (void)setMaxFileSizeLimit:(long long)arg1;
- (id)maxFileSizeToast;
- (void)setMaxFileSizeToast:(id)arg1;
- (unsigned long long)forbidenMediaType;
- (void)setForbidenMediaType:(unsigned long long)arg1;
- (id)forbidenMediaTypeToast;
- (void)setForbidenMediaTypeToast:(id)arg1;
- (void).cxx_destruct;
@end
