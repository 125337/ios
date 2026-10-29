@interface WAWebViewPlugin_WeAppMsg : WAWebViewPlugin_embedView <WAShareAppMessageThumbImagePoolDelegate>
{
    WAShareAppMessageInnerPermanentModel * _permanentModel; // +0x8
    WAShareAppMessageInnerTemporaryModel * _temporaryModel; // +0x10
    id <WeAppMsgHandleDelegate> _msgDelegate; // +0x18
    NSDictionary * _customParams; // +0x20
}
+ (int)convertStringToCardType:(id)arg1;
+ (unsigned long long)_generateShareTypeWithIsNativeMessage:(BOOL)arg1 isWeiShiMessage:(BOOL)arg2 isRecordVideoMessage:(BOOL)arg3 isURLMessage:(BOOL)arg4;
- (void)clearAll;
- (void)willStartShare;
- (void)shareToSelector:(int)arg1 paramsModel:(id)arg2;
- (void)shareToFriend:(int)arg1 paramsModel:(id)arg2;
- (id)pluginReportPageEvent;
- (void)saveScrollOffsets:(id)arg1;
- (void)restoreScrollOffsets:(id)arg1;
- (void)takeSnapShotIfNeeded;
- (void)takeSnapShotWithFromTop:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)registerSnapImage;
- (void)snapshotWebView:(id /* block */)arg1;
- (void)cancelSnapshot;
- (void)openWeAppForwardMessage:(id)arg1 type:(int)arg2 forNativeApp:(BOOL)arg3 toContacts:(id)arg4 shouldUseDynamicShare:(BOOL)arg5;
- (void)notifyToSharePage:(int)arg1 shouldUseDynamicShare:(BOOL)arg2 customParams:(id)arg3 toSpecificContacts:(id)arg4;
- (void)notifyToSharePage:(int)arg1 shouldUseDynamicShare:(BOOL)arg2 customParams:(id)arg3 toSpecificContacts:(id)arg4 shareCallType:(unsigned long long)arg5;
- (void)onCustomWeAppMessage:(id)arg1;
- (void)shareDidSuccess:(id)arg1;
- (void)shareDidConfirmCancel;
- (void)shareDidError:(id)arg1;
- (id)_currentURLToReport;
- (id)getRemoteUrlFromPathOrUrl:(id)arg1 appId:(id)arg2;
- (void)thumbImagePool:(id)arg1 shouldTakeSnapShotWithFromTop:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)thumbImagePool:(id)arg1 didDownloadWebImageDataFinished:(id)arg2;
- (id)permanentModel;
- (unsigned int)getSecFlag;
- (void)setPermanentModel:(id)arg1;
- (id)temporaryModel;
- (void)setTemporaryModel:(id)arg1;
- (id)msgDelegate;
- (void)setMsgDelegate:(id)arg1;
- (id)customParams;
- (void)setCustomParams:(id)arg1;
- (void).cxx_destruct;
@end

