@interface FBSDKAppLink : NSObject
{
    BOOL _backToReferrer; // +0x8
    NSURL * _sourceURL; // +0x10
    NSArray * _targets; // +0x18
    NSURL * _webURL; // +0x20
}
+ (id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3 isBackToReferrer:(BOOL)arg4;
+ (id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3;
- (id)initWithIsBackToReferrer:(BOOL)arg1;
- (id)sourceURL;
- (void)setSourceURL:(id)arg1;
- (id)targets;
- (void)setTargets:(id)arg1;
- (id)webURL;
- (void)setWebURL:(id)arg1;
- (BOOL)isBackToReferrer;
- (void)setBackToReferrer:(BOOL)arg1;
- (void).cxx_destruct;
@end
