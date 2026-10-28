@interface FBSDKURL : NSObject
{
    NSURL * _targetURL; // +0x8
    NSDictionary * _targetQueryParameters; // +0x10
    NSDictionary * _appLinkData; // +0x18
    NSDictionary * _appLinkExtras; // +0x20
    FBSDKAppLink * _appLinkReferer; // +0x28
    NSURL * _inputURL; // +0x30
    NSDictionary * _inputQueryParameters; // +0x38
}
+ (id)URLWithURL:(id)arg1;
+ (id)URLWithInboundURL:(id)arg1 sourceApplication:(id)arg2;
+ (id)URLForRenderBackToReferrerBarURL:(id)arg1;
+ (id)decodeURLString:(id)arg1;
+ (id)queryParametersForURL:(id)arg1;
- (id)initWithURL:(id)arg1 forOpenInboundURL:(BOOL)arg2 sourceApplication:(id)arg3 forRenderBackToReferrerBar:(BOOL)arg4;
- (id)targetURL;
- (id)targetQueryParameters;
- (id)appLinkData;
- (id)appLinkExtras;
- (id)appLinkReferer;
- (id)inputURL;
- (id)inputQueryParameters;
- (void).cxx_destruct;
@end
