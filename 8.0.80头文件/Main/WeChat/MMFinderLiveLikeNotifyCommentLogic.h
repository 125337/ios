@interface MMFinderLiveLikeNotifyCommentLogic : NSObject
{
    unsigned int _lastDisplayMsgId; // +0x8
    MMFinderLiveLikeMsgInfo * _preparingDisplayLikeMsgInfo; // +0x10
    id <MMFinderLiveLikeNotifyCommentDelegate> _notifyDelegate; // +0x18
    MMFinderLiveTaskId * _finderTaskId; // +0x20
}
- (id)initWithTaskId:(id)arg1;
- (void)onEnterLive;
- (void)onExitLive;
- (void)onLikeMsgInfoDisplay:(id)arg1;
- (void)onLikeMsgInfoOut:(id)arg1;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)updatePreparingDisplayLikeMsgInfoFromRemote:(id)arg1;
- (BOOL)updatePreparingDisplayLikeMsgInfo:(id)arg1;
- (void)delayClearPreparingDisplayLikeMsg;
- (void)invokeClearPreparingDisplayLikeMsg;
- (double)getClearDelayTime;
- (void)setPreparingDisplayLikeMsgInfo:(id)arg1;
- (void)onGetFinderLiveLikeAppMsgWithTaskId:(id)arg1 likeAppMsg:(id)arg2;
- (id)preparingDisplayLikeMsgInfo;
- (id)notifyDelegate;
- (void)setNotifyDelegate:(id)arg1;
- (id)finderTaskId;
- (void)setFinderTaskId:(id)arg1;
- (unsigned int)lastDisplayMsgId;
- (void)setLastDisplayMsgId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
