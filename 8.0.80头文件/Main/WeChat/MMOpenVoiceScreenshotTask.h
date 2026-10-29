@interface MMOpenVoiceScreenshotTask : NSObject
{
    NSString * _appid; // +0x8
    id /* block */ _callback; // +0x10
}
- (id)initWithAppID:(id)arg1 complete:(id /* block */)arg2;
- (void)cancel;
- (void)onVideoFrame:(__CVBuffer *)arg1 rotation:(int)arg2;
- (id)convert2CGImage:(__CVBuffer *)arg1 retation:(int)arg2;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
