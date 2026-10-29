@interface _MpPreloadConfig : NSObject
{
    NSArray * _customSchemes; // +0x8
    NSString * _url; // +0x10
    double _timeoutSeconds; // +0x18
    NSArray * _jsChannels; // +0x20
}
- (id)customSchemes;
- (void)setCustomSchemes:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (double)timeoutSeconds;
- (void)setTimeoutSeconds:(double)arg1;
- (id)jsChannels;
- (void)setJsChannels:(id)arg1;
- (void).cxx_destruct;
@end
