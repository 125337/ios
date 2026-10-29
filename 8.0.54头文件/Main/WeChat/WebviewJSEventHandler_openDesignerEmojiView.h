@interface WebviewJSEventHandler_openDesignerEmojiView : WebviewJSEventHandlerBase <IStoreEmotionDesignerInfoMgrExt>
{
    JSEvent * m_event; // +0x8
    NSString * m_designerId; // +0x10
    UINavigationController * m_navigationController; // +0x18
}
+ (id)dictionForBannerSet:(id)arg1;
- (BOOL)handleWithParams:(id)arg1 AndViewController:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (BOOL)handleWithParams:(id)arg1 AndNavigationController:(id)arg2 isHandleImmediately:(BOOL)arg3;
- (id)viewControllerWithParams:(id)arg1;
- (id)viewControllerWithParams:(id)arg1 PageType:(unsigned int)arg2;
- (long long)checkPageTypeForParams:(id)arg1;
- (void)endWithOk;
- (void)endWithFail;
- (void)openDesignerEmojiViewControllerWithDesignerId;
- (void)openDesignerEmojiViewControllerWithDesignerUin:(unsigned int)arg1;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;
- (void).cxx_destruct;
@end

