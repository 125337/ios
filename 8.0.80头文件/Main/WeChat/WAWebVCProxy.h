@interface WAWebVCProxy : NSObject <IWAWebVCService>
+ (id)getWebVCByUrl:(id)arg1 presentModal:(BOOL)arg2;
+ (id)getWAHTMLWebVCWithURL:(id)arg1 extraInfo:(id)arg2;
+ (void)tryJumpWeAppOrH5:(id)arg1 H5EntryScene:(id)arg2 animated:(BOOL)arg3;
+ (void)requestOAuthAuthorize:(id)arg1 url:(id)arg2 completion:(id /* block */)arg3;
@end
