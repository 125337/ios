@interface MMFinderLiveLikeV2NotifyCommentLogic : NSObject
{
    id <MMFinderLiveLikeV2NotifyCommentDelegate> _notifyDelegate; // +0x8
    MMFinderLiveTaskId * _finderTaskId; // +0x10
}
- (id)initWithTaskId:(id)arg1;
- (void)onEnterLive;
- (void)onExitLive;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onGetFinderLiveLikeV2AppMsgWithTaskId:(id)arg1 likeV2AppMsg:(id)arg2;
- (id)notifyDelegate;
- (void)setNotifyDelegate:(id)arg1;
- (id)finderTaskId;
- (void)setFinderTaskId:(id)arg1;
- (void).cxx_destruct;
@end
