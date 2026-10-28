@interface WCShareItemUtils : NSObject <SKStoreProductViewControllerDelegate>
+ (void)onPasteboardChanged;
+ (void)initialize;
+ (BOOL)isOpenMultiMsgShare;
+ (BOOL)isOpenMultiMsgForwardYuanbao;
+ (void)jumpToYuanbaoWithMsgWraps:(id)arg1 scene:(long long)arg2 params:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)jumpToYuanbaoWithContent:(id)arg1 scene:(long long)arg2 params:(id)arg3;
+ (void)jumpToYuanbaoWithFileName:(id)arg1 filePath:(id)arg2 scene:(long long)arg3 params:(id)arg4;
+ (id)serializeItems:(id)arg1;
+ (id)getSourceTypeWithScene:(long long)arg1;
+ (id)getMagicAdPosIdWithScene:(long long)arg1;
+ (void)jumpToYuanbaoWithScene:(long long)arg1 objects:(id)arg2 params:(id)arg3 completionHandler:(id /* block */)arg4;
@end
