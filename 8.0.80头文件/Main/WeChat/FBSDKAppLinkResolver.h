@interface FBSDKAppLinkResolver : NSObject <FBSDKAppLinkResolving>
{
    NSMutableDictionary * _cachedFBSDKAppLinks; // +0x8
    long long _userInterfaceIdiom; // +0x10
}
+ (void)initialize;
+ (id)resolver;
- (id)initWithUserInterfaceIdiom:(long long)arg1;
- (void)appLinkFromURL:(id)arg1 handler:(id /* block */)arg2;
- (void)appLinksFromURLs:(id)arg1 handler:(id /* block */)arg2;
- (id)cachedFBSDKAppLinks;
- (void)setCachedFBSDKAppLinks:(id)arg1;
- (long long)userInterfaceIdiom;
- (void)setUserInterfaceIdiom:(long long)arg1;
- (void).cxx_destruct;
@end
