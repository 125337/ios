@interface MMFinderLiveKTVSongQueueView : UIView <MMFinderLiveKTVManageExt, UICollectionViewDelegate, UICollectionViewDataSource>
{
    id /* block */ _clickActionBlock; // +0x8
    unsigned long long _state; // +0x10
    MMLiveTaskId * _taskId; // +0x18
    MMFinderLiveKtvPlayerWaitListInfo * _waitListInfo; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUIImageView * _arrowImageView; // +0x30
    MMUIImageView * _inviteImage; // +0x38
    UICollectionView * _playerCollectionView; // +0x40
    WCFinderContact * _contact; // +0x48
    MMUILabel * _actionLabel; // +0x50
}
- (id)initWithTaskId:(id)arg1;
- (void)registerExtensions;
- (void)layoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (double)preferWidth;
- (double)preferHeight;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)liveTask;
- (void)updateState;
- (void)onLiveKTVPlayerWaitListInfoUpdate:(id)arg1 source:(long long)arg2 taskId:(id)arg3;
- (void)onClickedAction;
- (id /* block */)clickActionBlock;
- (void)setClickActionBlock:(id /* block */)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)waitListInfo;
- (void)setWaitListInfo:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)inviteImage;
- (void)setInviteImage:(id)arg1;
- (id)playerCollectionView;
- (void)setPlayerCollectionView:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)actionLabel;
- (void)setActionLabel:(id)arg1;
- (void).cxx_destruct;
@end

