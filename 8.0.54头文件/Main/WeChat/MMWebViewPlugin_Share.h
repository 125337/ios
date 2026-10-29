@interface MMWebViewPlugin_Share : MMWebViewPluginBase <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate>
{
    NSMutableDictionary * _dictShareDataForSendAppMessage; // +0x8
    NSMutableDictionary * _dictShareDataForShareTimeline; // +0x10
    MMScrollActionSheet * _pluginShareActionSheet; // +0x18
}
+ (BOOL)canShareAppMessageWithUpdateShareData:(id)arg1;
+ (id)shareDataParamsFromShareData:(id)arg1;
+ (id)shareDataFromShareDataParams:(id)arg1;
+ (BOOL)needForceToPortraitWithShareType:(id)arg1;
- (id)init;
- (void)updateSendAppMessageShareData:(id)arg1 forCurrentUrl:(id)arg2;
- (void)updateTimelineShareData:(id)arg1 forCurrentUrl:(id)arg2;
- (void)doUpdateShareData:(id)arg1 forCurrentUrl:(id)arg2 inDictionary:(id)arg3;
- (id)getWebViewControllerShareData:(id)arg1;
- (id)appMessageShareDataParamsFromCurrentUrl:(id)arg1;
- (id)timelineShareDataParamsFromCurrentUrl:(id)arg1;
- (BOOL)shareCustomShareData2Friend:(id)arg1 andCustomShareData2Timeline:(id)arg2 andCustomShareButtonData:(id)arg3 errorMsg:(id *)arg4;
- (BOOL)shareCustomShareData2Friend:(id)arg1 andCustomShareData2Timeline:(id)arg2 andCustomShareButtonData:(id)arg3 andCustomOpButtonData:(id)arg4 errorMsg:(id *)arg5;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetWillDismiss:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)reportGameCenterData:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)dictShareDataForSendAppMessage;
- (void)setDictShareDataForSendAppMessage:(id)arg1;
- (id)dictShareDataForShareTimeline;
- (void)setDictShareDataForShareTimeline:(id)arg1;
- (id)pluginShareActionSheet;
- (void)setPluginShareActionSheet:(id)arg1;
- (void).cxx_destruct;
@end

