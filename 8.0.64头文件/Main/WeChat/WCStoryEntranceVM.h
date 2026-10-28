@interface WCStoryEntranceVM : NSObject <ContactsDataLogicDelegate, IWCMyStoryUserStateUtilExt, WCStoryFacadeExt>
{
    BOOL _shouldShowStoryEntrace; // +0x8
    ContactsDataLogic * _dataLogic; // +0x10
    NSMutableDictionary * _userContactDict; // +0x18
    MMTimer * _reloadNotifyThrottle; // +0x20
}
+ (id)entranceViewModel;
+ (BOOL)hasUnreadStory;
- (id)init;
- (void)notifyReloadEntrance;
- (void)sendReloadNotify;
- (void)reloadShouldShowStoryEntrace;
- (id)getStoryUnreadUserNameArray;
- (id)getTimestampUnreadUserNameArray;
- (void)onSetUnreadStoryMarkWithUserName:(id)arg1;
- (void)onClearUnreadStoryMarkWithUserName:(id)arg1;
- (void)userDeleteStoryWithUserName:(id)arg1;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)onSetNewLastReadMaxTid;
- (void)onContactHasChange;
- (void)onMarkStoryReadWithUserName:(id)arg1 Tid:(id)arg2;
- (void)updateUnreadStatus;
- (void)onRelatedCommentDel:(id)arg1;
- (void)onRelatedCommentAdd:(id)arg1;
- (void)onMakeAllUserRelatedCommentWithUsername:(id)arg1;
- (void)onMakeAllUserRelatedCommentRead;
- (void)onUserRelatedCommentReadWithTid:(id)arg1;
- (void)onPermissionsHasChanged;
- (id)dataLogic;
- (void)setDataLogic:(id)arg1;
- (id)userContactDict;
- (void)setUserContactDict:(id)arg1;
- (id)reloadNotifyThrottle;
- (void)setReloadNotifyThrottle:(id)arg1;
- (BOOL)shouldShowStoryEntrace;
- (void)setShouldShowStoryEntrace:(BOOL)arg1;
- (void).cxx_destruct;
@end
