@interface CameraScanPayCodeContext : NSObject
{
    NSString * _jsapiName; // +0x8
    NSString * _sourceId; // +0x10
    long long _needResult; // +0x18
}
- (id)jsapiName;
- (void)setJsapiName:(id)arg1;
- (id)sourceId;
- (void)setSourceId:(id)arg1;
- (long long)needResult;
- (void)setNeedResult:(long long)arg1;
- (void).cxx_destruct;
@end
