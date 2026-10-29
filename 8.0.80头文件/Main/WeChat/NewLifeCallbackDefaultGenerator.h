@interface NewLifeCallbackDefaultGenerator : NewLifeCallbackGenerator <WCFinderDataItemExt, WCFinderPostDataItemExt, NewLifeManagerExt, NewLifeSyncStatusExt, WCFinderRedDotExt, NewLifeCdnUploadExt>
{
    NSMutableSet * _observerRedDotTipsPaths; // +0x8
    NSMutableSet * _updatedRedDotTipsPaths; // +0x10
    NSString * _command; // +0x18
}
- (void)registerListenerForCommand:(id)arg1 keyList:(id)arg2 userInfo:(id)arg3;
- (void)onSendFlowDataToFlutter:(id)arg1;
- (void)onSendSwitchTabEventToFlutter:(BOOL)arg1;
- (void)onMentionActionCallbackToFlutter:(id)arg1;
- (void)onSelectMusicCallbackToFlutter:(id)arg1;
- (void)onFinderDataItem:(id)arg1 updateFavStateByExtention:(BOOL)arg2;
- (void)onFinderDataItemIsLikedUpdateByExtention:(id)arg1;
- (void)onFeedStatusChangeForFeedId:(unsigned long long)arg1 source:(unsigned int)arg2 components:(unsigned int)arg3 monotonicData:(id)arg4;
- (void)onFollowStatusChangeForFinderUsername:(id)arg1 isFollow:(BOOL)arg2;
- (void)onJumpInfoStatusChangeForFeedId:(id)arg1 scene:(unsigned int)arg2 jumpInfos:(id)arg3;
- (void)onFinderDataItemPostProgressWithTid:(id)arg1 progress:(id)arg2;
- (void)generatePostStateChangeCallback:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onNewLifePostSessionStartCompress:(id)arg1;
- (void)onNewLifePostSessionStartUpload:(id)arg1;
- (void)onNewLifePostSessionUpLoadSuccessful:(id)arg1;
- (void)onNewLifePostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)onSendNewLifeStreamNotifyEventToFlutter;
- (void)onSetEnvelopeUrlCallbackToFlutter:(id)arg1;
- (void)onSelectLinkCallbackToFlutter:(id)arg1;
- (void)onNewBrandContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onHandleAddContactNotify:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onGetCreatorCenterInfoCallbackToFlutter:(id)arg1;
- (void)onCdnUploadProgressCallback:(id)arg1;
- (void)onCdnUploadEndCallback:(id)arg1;
- (void)onLiveTask:(id)arg1 liveClosed:(BOOL)arg2;
- (id)observerRedDotTipsPaths;
- (void)setObserverRedDotTipsPaths:(id)arg1;
- (id)updatedRedDotTipsPaths;
- (void)setUpdatedRedDotTipsPaths:(id)arg1;
- (id)command;
- (void)setCommand:(id)arg1;
- (void).cxx_destruct;
@end
