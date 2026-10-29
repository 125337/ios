@interface EmoticonCustomManageViewController : MMUIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, MMLoadMoreCollectionViewDelegate, EmoticonCustomManageViewDelegate, IEmoticonMgrExt, MMImagePickerManagerDelegate, EmoticonBackupOperateMgrExt, EmoticonBackUpMgrExt, EmoticonBackUpMgrViewExt, WCActionSheetDelegate, EmoticonCustomManageAddLogicDelegate, CustomEmoticonConflictViewDelegate, UIGestureRecognizerDelegate, EmoticonCustomManagePopInteractiveTransitionDelegate, EmoticonCustomCreateLogicDelegate>
{
    BOOL _isConflictViewClosed; // +0x70
    BOOL _shouldShowConflictView; // +0x71
    BOOL _needResetBrickView; // +0x72
    unsigned int _localEmoticonLimit; // +0x74
    EmoticonCustomManageCollectionView * _collectionView; // +0x78
    EmoticonCustomManageCollectionLayout * _collectionLayout; // +0x80
    EmoticonCustomManageDataLogic * _dataLogic; // +0x88
    UIView * _bottomBar; // +0x90
    UIButton * _deleteButton; // +0x98
    UIButton * _moveButton; // +0xa0
    UIButton * _cancelMoveButton; // +0xa8
    UILabel * _bottomLabel; // +0xb0
    EmoticonCustomSortInsertBrickView * _insertBrickView; // +0xb8
    EmoticonCustomSortInsertBrickView * _insertBrickPlaceHolderView; // +0xc0
    EmoticonCustomSortBGView * _moveBGView; // +0xc8
    UIView * _bottomBarLineView; // +0xd0
    EmoticonLoadMoreFooterView * _footerView; // +0xd8
    double _gridViewWidth; // +0xe0
    unsigned long long _manageStatus; // +0xe8
    EmoticonCustomManageAddLogic * _addEmoticonLogic; // +0xf0
    unsigned long long _type; // +0xf8
    UIPanGestureRecognizer * _moveGesture; // +0x100
    EmoticonCustomManageSwipeSelectGestureRecognizer * _multiSelectGesture; // +0x108
    UIScreenEdgePanGestureRecognizer * _dismissModalGesture; // +0x110
    EmoticonCustomManagePopInteractiveTransition * _popTransition; // +0x118
    unsigned long long _insertPositionForReport; // +0x120
    EmoticonCustomCreateLogic * _customCreateLogic; // +0x128
    unsigned long long _fromScene; // +0x130
    NSArray * _operatedMd5List; // +0x138
}
- (id)init;
- (id)initWithType:(unsigned long long)arg1;
- (void)setScene:(unsigned long long)arg1;
- (id)addEmoticonLogic;
- (void)viewDidLoad;
- (UIEdgeInsets)emoticonManageSafeAreaInsets;
- (BOOL)shouldUseWideEmoticonManageLayout;
- (CGRect)emoticonManageContentBounds;
- (double)collectionContentTopInView;
- (double)collectionViewHeightForCurrentStatus;
- (void)updateBottomBarLayout;
- (void)updateLayoutFrames;
- (void)resetInsertBrickViewPosition:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidTransitionToNewSize;
- (void)updateColelctionLayout;
- (void)updateWideInsertBrickLayout;
- (BOOL)shouldInteractiveDismiss;
- (void)initView;
- (void)initBackground;
- (void)initMoveBGView;
- (void)initMoveBrickView;
- (void)initBottomBarView;
- (void)initNavigationItem;
- (void)initCollectionView;
- (void)initMultiSelectGestures;
- (void)initDismissGesture;
- (void)onDismissGesture:(id)arg1;
- (id)genCollectionLayout;
- (double)genGridViewWidth;
- (double)BottomBarHeight;
- (void)BackButtonDown:(id)arg1;
- (void)OnCancelModalView:(id)arg1;
- (void)initData;
- (void)setManageStatus:(unsigned long long)arg1;
- (void)updateLoadingStatus;
- (void)updateConflictView;
- (void)onClickEdit;
- (void)onEndEdit;
- (void)onAddCustomEmoticon;
- (id)getViewController;
- (id)customCreateLogic;
- (void)onDeleteEmoticonConfirm:(id)arg1;
- (void)updateBottomDeleteButton;
- (void)deleteEmoticonFromServer;
- (void)onMultiSelectGesture:(id)arg1;
- (void)checkMultiSelectForScroll;
- (void)updateCellSelectStatusForMultiSelect;
- (void)onMoveTouched;
- (void)onMoveCanceled;
- (void)onMoveGesture:(id)arg1;
- (void)checkCollectionInsertPlaceHolder;
- (BOOL)checkCollectionInsert;
- (BOOL)realDoInsertAtIndexPath:(id)arg1;
- (BOOL)checkCollectionAutoScrollForMove;
- (BOOL)checkCollectionAutoScrollForMultiSelect:(double)arg1;
- (void)cleanInsert;
- (void)onMoveGestureFailed;
- (void)onMoveGestureSucceed;
- (void)doTaptic:(long long)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)popTransition;
- (void)onPopBackInteractiveTransitionBegin:(id)arg1;
- (void)onPopBackInteractiveTransitionDidEnd:(id)arg1 isComplete:(BOOL)arg2;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)onStickyEmoticonFromServer:(id)arg1;
- (void)onMoveEmoticonFromServer:(id)arg1 insertPositionMd5:(id)arg2;
- (id)recoverMgr;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)setShouldShowConflictView:(BOOL)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)onEmoticonCustomManageViewTaped:(id)arg1 andView:(id)arg2;
- (void)OnUpdateEmoticonListFor:(unsigned long long)arg1;
- (void)onEmoticonBackUpMgrRecoverNotifyProgressForType:(unsigned int)arg1;
- (void)onAddEmoticonCommonFail;
- (void)onDeleteBackupEmoticonOK:(id)arg1;
- (void)onDeleteBackupEmoticonFailed:(id)arg1;
- (void)onMoveBackupEmoticonOK:(id)arg1;
- (void)onMoveBackupEmoticonOK:(id)arg1 isSticky:(BOOL)arg2;
- (void)onMoveBackupEmoticonFailed:(id)arg1;
- (void)onMoveBackupEmoticonFailed:(id)arg1 isSticky:(BOOL)arg2;
- (void)onStickyBackupEmoticonOK:(id)arg1 needDealVc:(BOOL)arg2;
- (void)onStickyBackupEmoticonFailed:(id)arg1 needDealVc:(BOOL)arg2;
- (id)makeMd5List;
- (void)onEmoticonBackUpMgrRecoverOneEmoticon;
- (void)onEmoticonBackUpMgrRecoverCompleteForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrSyncOperateForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverFailedForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverNetworkChangeToUnreachableForType:(unsigned int)arg1;
- (void)onEmoticonBackUpMgrRecoverPartSyncFinishedForType:(unsigned int)arg1;
- (void)onCustomEmoticonConflictViewClickClose;
- (void)checkIfIsOnEmoticonCustomManageViewController:(BOOL *)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onAddEmoticonFinishedWithWrap:(BOOL)arg1 md5:(id)arg2;
- (void)onAddEmoticonFinishedWithSuccessObj:(id)arg1 sucNum:(long long)arg2 failNum:(long long)arg3;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)onLoadMore;
- (void)onLoadDone;
- (BOOL)isCurrentManageStatusAllowRefresh;
- (BOOL)isCurrentManangeStatusNoneEdit;
- (BOOL)isCurrentManageStatusCommonSelect;
- (void)registerYReportSdk;
- (unsigned long long)logid;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (id)dataLogic;
- (void)setDataLogic:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)moveButton;
- (void)setMoveButton:(id)arg1;
- (id)cancelMoveButton;
- (void)setCancelMoveButton:(id)arg1;
- (id)bottomLabel;
- (void)setBottomLabel:(id)arg1;
- (id)insertBrickView;
- (void)setInsertBrickView:(id)arg1;
- (id)insertBrickPlaceHolderView;
- (void)setInsertBrickPlaceHolderView:(id)arg1;
- (id)moveBGView;
- (void)setMoveBGView:(id)arg1;
- (id)bottomBarLineView;
- (void)setBottomBarLineView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (double)gridViewWidth;
- (void)setGridViewWidth:(double)arg1;
- (unsigned long long)manageStatus;
- (BOOL)isConflictViewClosed;
- (void)setIsConflictViewClosed:(BOOL)arg1;
- (BOOL)shouldShowConflictView;
- (unsigned int)localEmoticonLimit;
- (void)setLocalEmoticonLimit:(unsigned int)arg1;
- (void)setAddEmoticonLogic:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)moveGesture;
- (void)setMoveGesture:(id)arg1;
- (id)multiSelectGesture;
- (void)setMultiSelectGesture:(id)arg1;
- (id)dismissModalGesture;
- (void)setDismissModalGesture:(id)arg1;
- (void)setPopTransition:(id)arg1;
- (BOOL)needResetBrickView;
- (void)setNeedResetBrickView:(BOOL)arg1;
- (unsigned long long)insertPositionForReport;
- (void)setInsertPositionForReport:(unsigned long long)arg1;
- (void)setCustomCreateLogic:(id)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (id)operatedMd5List;
- (void)setOperatedMd5List:(id)arg1;
- (void).cxx_destruct;
@end
