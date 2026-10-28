@interface FBSDKWebViewAppLinkResolver : NSObject <FBSDKAppLinkResolving>
+ (id)sharedInstance;
- (void)followRedirects:(id)arg1 handler:(id /* block */)arg2;
- (void)appLinkFromURL:(id)arg1 handler:(id /* block */)arg2;
- (id)parseALData:(id)arg1;
- (void)getALDataFromLoadedPage:(id)arg1 handler:(id /* block */)arg2;
- (id)appLinkFromALData:(id)arg1 destination:(id)arg2;
@end
