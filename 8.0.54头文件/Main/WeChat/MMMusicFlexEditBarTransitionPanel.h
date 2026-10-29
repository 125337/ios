@interface MMMusicFlexEditBarTransitionPanel : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <MMMusicFlexEditBarTransitionPanelDelegate> _delegate; // +0x8
    id <MMMusicFlexEditBarTransitionPanelDataSource> _dataSource; // +0x10
    unsigned long long _preIndex; // +0x18
    unsigned long long _nextIndex; // +0x20
    MMMusicVideoTransitionModel * _curTransitionModel; // +0x28
    MMMusicVideoTransitionModel * _curTransitionModelHistory; // +0x30
    MMUIView * _containerView; // +0x38
    MMUIView * _bottomContainerView; // +0x40
    MMUILabel * _titleLabel; // +0x48
    UICollectionView * _transitionCollectionView; // +0x50
    MMUIButton * _cancelBtn; // +0x58
    MMUIButton * _doneBtn; // +0x60
    MMUIButton * _replayBtn; // +0x68
}
- (id)initWithFrame:(CGRect)arg1 withPreIndex:(unsigned long long)arg2 andNextIndex:(unsigned long long)arg3;
- (void)internalInit;
- (void)layoutSubviews;
- (void)reloadDataWithPreIndex:(unsigned long long)arg1 andNextIndex:(unsigned long long)arg2;
- (void)refreshSelectedStatus:(BOOL)arg1;
- (void)setReplayBtnHidden:(BOOL)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)transitionModelArr;
- (BOOL)isTransitionSelectedWithTransitionId:(id)arg1;
- (void)onClickBlankArea;
- (void)onClickCancelBtn;
- (void)onClickDoneBtn;
- (void)onClickReplayBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (unsigned long long)preIndex;
- (void)setPreIndex:(unsigned long long)arg1;
- (unsigned long long)nextIndex;
- (void)setNextIndex:(unsigned long long)arg1;
- (id)curTransitionModel;
- (void)setCurTransitionModel:(id)arg1;
- (id)curTransitionModelHistory;
- (void)setCurTransitionModelHistory:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)bottomContainerView;
- (void)setBottomContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)transitionCollectionView;
- (void)setTransitionCollectionView:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)doneBtn;
- (void)setDoneBtn:(id)arg1;
- (id)replayBtn;
- (void)setReplayBtn:(id)arg1;
- (void).cxx_destruct;
@end

