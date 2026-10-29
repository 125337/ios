@interface MMWebViewPlugin_GameShare : MMWebViewPluginBase <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, WCCommitViewResultDelegate>
{
    BOOL _needUploadFirst; // +0x8
    GameCenterJsEventInfo * _currentEventInfo; // +0x10
    NSMutableDictionary * _dictShareDataForSendAppMessage; // +0x18
    NSMutableDictionary * _dictShareDataForShareTimeline; // +0x20
    MMScrollActionSheet * _pluginShareActionSheet; // +0x28
}
+ (id)shareDataFromShareDataParams:(id)arg1;
+ (BOOL)needForceToPortraitWithShareType:(id)arg1;
+ (id)shareDataParamsFromShareData:(id)arg1;
- (id)init;
- (BOOL)shareCustomShareData2Friend:(id)arg1 andCustomShareData2Timeline:(id)arg2 andCustomShareButtonData:(id)arg3 needUpdateFirst:(BOOL)arg4 enableQuickSend:(BOOL)arg5 errorMsg:(id *)arg6;
- (BOOL)shareCustomShareData2Friend:(id)arg1 andCustomShareData2Timeline:(id)arg2 andCustomShareButtonData:(id)arg3 andCustomOpButtonData:(id)arg4 needUpdateFirst:(BOOL)arg5 enableQuickSend:(BOOL)arg6 errorMsg:(id *)arg7;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)doShareWithActionSheetItem:(id)arg1 andShareData:(id)arg2;
- (void)shareToFriendWithShareData:(id)arg1;
- (void)shareToTimeLineWithShareData:(id)arg1;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)reportGameCenterData:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)shareImageToFriendWithShareData:(id)arg1;
- (void)shareImageToTimeLineWithImage:(id)arg1;
- (void)endWithMessage:(id)arg1;
- (void)endWithErrormsg:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)shareImageToContact:(id)arg1 withContact:(id)arg2;
- (void)shareImageToContactWithShareData:(id)arg1 withContact:(id)arg2;
- (id)currentEventInfo;
- (void)setCurrentEventInfo:(id)arg1;
- (id)dictShareDataForSendAppMessage;
- (void)setDictShareDataForSendAppMessage:(id)arg1;
- (id)dictShareDataForShareTimeline;
- (void)setDictShareDataForShareTimeline:(id)arg1;
- (id)pluginShareActionSheet;
- (void)setPluginShareActionSheet:(id)arg1;
- (BOOL)needUploadFirst;
- (void)setNeedUploadFirst:(BOOL)arg1;
- (void).cxx_destruct;
@end
