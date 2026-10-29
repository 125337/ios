@interface MMFinderLiveKTVSeatAreaView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, MMLiveTaskMgrExt, MMFinderLiveKTVStateExt>
{
    MMLiveTaskId * _taskId; // +0x8
    UICollectionView * _seatCollectionView; // +0x10
    OrderedDictionary * _seatOrderDict; // +0x18
    NSMutableArray * _pendingSeatArr; // +0x20
    NSString * _singingUserId; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)initDefaultDatas;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutCollectionView;
- (id)liveTask;
- (id)liveViewVC;
- (double)collectionHeight;
- (unsigned long long)maxSeatCount;
- (id)getSeatInviteCellAtIndexPath:(id)arg1;
- (id)getSeatUserCellAtIndexPath:(id)arg1;
- (void)handleConnectMicUserViewTappedAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onLiveTask:(id)arg1 micUsersInfoChanged:(id)arg2;
- (void)onLiveTask:(id)arg1 isKTVModeChangedTo:(BOOL)arg2;
- (void)onLiveTaskEnterLive:(id)arg1;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singStateChanged:(long long)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 singerUserIdChanged:(id)arg3;
- (void)onLiveTaskId:(id)arg1 ktvState:(id)arg2 totalScoreChanged:(int)arg3;
- (void)clearDatas;
- (void)onEnterKTVMode;
- (void)onMicUsersInfoChanged;
- (id)getCurrAllSeatUserList;
- (id)getMicSeatUserWithMicUserInfo:(id)arg1;
- (id)getAnchorSeatUserWithMicUserInfo:(id)arg1;
- (void)updateAllSeatUsersSingState;
- (void)onTotalScoreChange;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)seatCollectionView;
- (void)setSeatCollectionView:(id)arg1;
- (id)seatOrderDict;
- (void)setSeatOrderDict:(id)arg1;
- (id)pendingSeatArr;
- (void)setPendingSeatArr:(id)arg1;
- (id)singingUserId;
- (void)setSingingUserId:(id)arg1;
- (void).cxx_destruct;
@end

