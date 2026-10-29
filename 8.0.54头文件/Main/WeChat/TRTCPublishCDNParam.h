@interface TRTCPublishCDNParam : NSObject
{
    int _appId; // +0x8
    int _bizId; // +0xc
    NSString * _url; // +0x10
    NSString * _streamId; // +0x18
}
- (ThirdPartyCdnConfig)convertToCppParams;
- (id)init;
- (int)appId;
- (void)setAppId:(int)arg1;
- (int)bizId;
- (void)setBizId:(int)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (void).cxx_destruct;
@end

