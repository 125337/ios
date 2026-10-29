@interface WAWebVCProxy : NSObject <IWAWebVCService>
+ (id)getWebVCByUrl:(id)arg1 presentModal:(BOOL)arg2;
+ (id)getWAHTMLWebVCWithURL:(id)arg1 extraInfo:(id)arg2;
+ (void)tryJumpWeAppOrH5:(id)arg1 H5EntryScene:(id)arg2 animated:(BOOL)arg3;
@end

