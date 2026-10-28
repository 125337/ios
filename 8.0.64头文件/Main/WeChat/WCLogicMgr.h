@interface WCLogicMgr : MMObject <PBMessageObserverDelegate>
{
    id <WCLogicMgrDelegate> m_delegate; // +0x8
    NSMutableSet * setWorkingItems; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)requestForSnsObjectOpRequest:(id)arg1;
- (BOOL)requestForSnsObjectOpRequest:(id)arg1 context:(id)arg2;
- (BOOL)responseForSnsObjectOpResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)onOperation:(id)arg1 Finished:(long long)arg2 withResp:(id)arg3 context:(id)arg4;
- (void)onOperationDeleteObj:(id)arg1 Finished:(long long)arg2 withResp:(id)arg3;
- (void)onOperationSetPrivacy:(id)arg1 Finished:(long long)arg2;
- (void)onOperationSetOpen:(id)arg1 Finished:(long long)arg2;
- (void)onOperationDeleteComment:(id)arg1 finished:(long long)arg2 context:(id)arg3;
- (void)onOperationCancelLike:(id)arg1 finished:(long long)arg2 context:(id)arg3;
- (void)onOperationBlockMention:(id)arg1 Finished:(long long)arg2;
- (void)onOperationModifyShareScope:(id)arg1 Finished:(long long)arg2;
- (void)setDataItemPrivate:(id)arg1;
- (void)setDataItemPublic:(id)arg1;
- (void)setDataItemHate:(id)arg1;
- (void)deleteDataItem:(id)arg1;
- (void)requestForSnsObjectDetailRequest:(id)arg1 groupDetail:(BOOL)arg2;
- (BOOL)responseForSnsObjectDetailResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)updateDataItemDetail:(id)arg1;
- (void)updateDataItemDetailWithGroupDetail:(id)arg1;
- (BOOL)deleteCommentWithItemID:(id)arg1 commentID:(id)arg2 context:(id)arg3;
- (BOOL)cancelLikeDataItem:(id)arg1 context:(id)arg2;
- (void)setDataItem:(id)arg1 ignoreNotify:(BOOL)arg2;
- (void)modifyDataItem:(id)arg1 visibilityOp:(id)arg2;
- (BOOL)setDataItemTogetherByRemovingCurrentUser:(id)arg1;
- (void)onSetDataItemTogetherWithResponse:(id)arg1 event:(unsigned int)arg2;
- (BOOL)modifyDataItem:(id)arg1 isStarred:(BOOL)arg2;
- (void)onModifyDataItemStarStatusWithResponse:(id)arg1 event:(unsigned int)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
