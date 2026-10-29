@interface MMFinderLiveFollowNotifyCommentLogic : NSObject
{
    id <MMFinderLiveFollowNotifyCommentDelegate> _notifyDelegate; // +0x8
    MMFinderLiveTaskId * _finderTaskId; // +0x10
}
- (id)initWithTaskId:(id)arg1;
- (void)onEnterLive;
- (void)onExitLive;
- (void)onFollowNotifyMsgInfoDisplay:(id)arg1;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)onGetFinderLiveFollowAppMsgWithTaskId:(id)arg1 followAppMsg:(id)arg2;
- (id)notifyDelegate;
- (void)setNotifyDelegate:(id)arg1;
- (id)finderTaskId;
- (void)setFinderTaskId:(id)arg1;
- (void).cxx_destruct;
@end
