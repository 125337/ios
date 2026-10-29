@interface OpenApiVideoFileMsgParam : NSObject
{
    NSString * _appId; // +0x8
    long long _maxVideoTime; // +0x10
    NSString * _videoCompressParams; // +0x18
}
- (id)appId;
- (void)setAppId:(id)arg1;
- (long long)maxVideoTime;
- (void)setMaxVideoTime:(long long)arg1;
- (id)videoCompressParams;
- (void)setVideoCompressParams:(id)arg1;
- (void).cxx_destruct;
@end

