@interface WxpayLiteAppRuntimeProfileSnapshot : NSObject
{
    unsigned long long _generation; // +0x8
    unsigned long long _releaseId; // +0x10
    NSString * _profile; // +0x18
}
- (id)initWithGeneration:(unsigned long long)arg1 releaseId:(unsigned long long)arg2 profile:(id)arg3;
- (unsigned long long)generation;
- (unsigned long long)releaseId;
- (id)profile;
- (void).cxx_destruct;
@end
