@interface WXDynamicVideoMiniProgramObject : NSObject
{
    BOOL _withShareTicket; // +0x8
    NSString * _webpageUrl; // +0x10
    NSString * _userName; // +0x18
    NSString * _path; // +0x20
    NSData * _hdImageData; // +0x28
    unsigned long long _miniProgramType; // +0x30
    NSString * _videoSource; // +0x38
    NSString * _appThumbUrl; // +0x40
}
+ (id)object;
- (id)init;
- (id)webpageUrl;
- (void)setWebpageUrl:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)hdImageData;
- (void)setHdImageData:(id)arg1;
- (BOOL)withShareTicket;
- (void)setWithShareTicket:(BOOL)arg1;
- (unsigned long long)miniProgramType;
- (void)setMiniProgramType:(unsigned long long)arg1;
- (id)videoSource;
- (void)setVideoSource:(id)arg1;
- (id)appThumbUrl;
- (void)setAppThumbUrl:(id)arg1;
- (void).cxx_destruct;
@end

