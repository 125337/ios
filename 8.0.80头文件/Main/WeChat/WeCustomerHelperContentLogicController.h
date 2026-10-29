@interface WeCustomerHelperContentLogicController : WeixinContentLogicController
{
    BOOL _hasSentEnterTempSessionReqForNativeEntry; // +0xdc
    int _entranceScene; // +0xe0
    unsigned long long _currentScene; // +0xe8
}
+ (BOOL)isActionCodeLiteAppLink:(id)arg1;
+ (id)getLiteAppLinkNameFromUrl:(id)arg1;
- (id)GetRightBarButtonImageName;
- (void)OpenDetailInfo;
- (BOOL)shouldSendEnterTempSessionReqForCurrentScene;
- (void)sendEnterTempSessionReqForNativeEntryIfNeeded;
- (void)ViewDidAppear;
- (void)ViewDidDisappear;
- (BOOL)CanSendVideoMsg;
- (id)getMsgSendOpEntry;
- (void)openChannelsKf;
- (void)OnTagLink:(id)arg1 messageWrap:(id)arg2;
- (unsigned long long)currentScene;
- (void)setCurrentScene:(unsigned long long)arg1;
- (int)entranceScene;
- (void)setEntranceScene:(int)arg1;
- (BOOL)hasSentEnterTempSessionReqForNativeEntry;
- (void)setHasSentEnterTempSessionReqForNativeEntry:(BOOL)arg1;
@end
