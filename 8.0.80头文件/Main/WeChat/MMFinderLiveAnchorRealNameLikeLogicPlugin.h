@interface MMFinderLiveAnchorRealNameLikeLogicPlugin : MMLiveTaskBaseFunctionPlugin <WCFinderLiveExt>
{
    MMFinderLiveAnchorRealNameLikeNotificationMsg * _currentNotificationMsg; // +0x8
}
- (id)initWithLiveTask:(id)arg1;
- (void)dealloc;
- (void)onGetFinderLiveRealNameLikeListShowWithTaskId:(id)arg1 likeListShowInfo:(id)arg2;
- (void)didSelectNotificationMsg:(id)arg1;
- (void)notifyNotificationHalfListWillOpened;
- (void)notifyNotificationHalfListClosed;
- (id)currentNotificationMsg;
- (void)setCurrentNotificationMsg:(id)arg1;
- (void).cxx_destruct;
@end
