@interface MMFinderLiveInteractionNotifyCommentLogic : NSObject
{
    id <MMFinderLiveInteractionNotifyCommentDelegate> _notifyDelegate; // +0x8
    MMFinderLiveTaskId * _finderTaskId; // +0x10
}
- (id)initWithTaskId:(id)arg1;
- (void)onEnterLive;
- (void)onExitLive;
- (void)onInteractionNotifyMsgInfoDisplay:(id)arg1;
- (void)onGetFinderLiveInteractionMsg:(id)arg1;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onGetFinderLiveInteractionAppMsgWithTaskId:(id)arg1 interactionAppMsg:(id)arg2;
- (id)notifyDelegate;
- (void)setNotifyDelegate:(id)arg1;
- (id)finderTaskId;
- (void)setFinderTaskId:(id)arg1;
- (void).cxx_destruct;
@end
