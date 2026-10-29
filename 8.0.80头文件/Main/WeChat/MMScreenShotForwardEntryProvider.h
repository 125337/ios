@interface MMScreenShotForwardEntryProvider : NSObject <MMScreenShotEntryProvider>
+ (id)makeEntry;
+ (void)showPreviewWithImage:(id)arg1 context:(id)arg2;
+ (id)findViewControllerToShowInWindow:(id)arg1;
+ (BOOL)canShowFromViewController:(id)arg1;
@end
