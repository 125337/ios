@interface MMFinderLiveFollowNotifyCommentLogic : NSObject
{
    BOOL _isAsyncSorting; // +0x8
    id <MMFinderLiveFollowNotifyCommentDelegate> _notifyDelegate; // +0x10
    MMFinderLiveTaskId * _finderTaskId; // +0x18
    NSMutableOrderedSet * _prepareDisplayFollowContactSet; // +0x20
    NSMutableArray * _pendingFollowContactList; // +0x28
    NSMutableArray * _removedFollowContactList; // +0x30
}
- (id)initWithTaskId:(id)arg1;
- (void)onEnterLive;
- (void)onExitLive;
- (void)onFollowNotifyMsgInfoDisplay:(id)arg1;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)addFollowLiveContact:(id)arg1;
- (void)innerAddFollowContactWithSort:(id)arg1;
- (void)syncSortPrepareDisplayFollowContacts;
- (void)asyncSortPrepareDisplayFollowContacts;
- (void)onPreparingDisplayFollowNotifyUpdate;
- (void)notifyPreparingDisplayFollowNotifyUpdate;
- (void)delayClearPreparingDisplayFollowNotifyMsg;
- (void)invokeClearPreparingDisplayFollowNotifyMsg;
- (double)getClearDelayTime;
- (void)cancelDelayClearFollowNotifyMsg;
- (BOOL)clearPreparingDisplayFollowNotifyMsgInList:(id)arg1;
- (BOOL)clearPreparingDisplayFollowNotifyMsgInSet:(id)arg1;
- (id)prepareDisplayFollowContactSet;
- (id)pendingFollowContactList;
- (id)removedFollowContactList;
- (void)onGetFinderLiveFollowAppMsgWithTaskId:(id)arg1 followAppMsg:(id)arg2;
- (id)notifyDelegate;
- (void)setNotifyDelegate:(id)arg1;
- (id)finderTaskId;
- (void)setFinderTaskId:(id)arg1;
- (void)setPrepareDisplayFollowContactSet:(id)arg1;
- (void)setPendingFollowContactList:(id)arg1;
- (void)setRemovedFollowContactList:(id)arg1;
- (BOOL)isAsyncSorting;
- (void)setIsAsyncSorting:(BOOL)arg1;
- (void).cxx_destruct;
@end

