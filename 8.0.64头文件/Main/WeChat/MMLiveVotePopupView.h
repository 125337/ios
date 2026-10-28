@interface MMLiveVotePopupView : MMUIView <MMLiveVoteViewModelObserver, UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    BOOL _notUpdate; // +0x8
    BOOL _showProgress; // +0x9
    unsigned int _remainTime; // +0xc
    unsigned int _status; // +0x10
    id <MMLiveVotePopupViewDelegate> _delegate; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    MMUIView * _contentView; // +0x28
    MMUILabel * _finishedLabel; // +0x30
    RichTextView * _headerView; // +0x38
    MMUIButton * _voteTypeTips; // +0x40
    MMUILabel * _deadlineLabel; // +0x48
    MMUILabel * _headcountLabel; // +0x50
    UICollectionView * _choiceCollectionView; // +0x58
    UIView * _choiceCollectionContainerView; // +0x60
    MMLiveVoteViewModel * _viewModel; // +0x68
    MMUIButton * _exitButton; // +0x70
    MMTimer * _countdownTimer; // +0x78
    NSMutableArray * _displayChoiceList; // +0x80
    unsigned long long _totalCount; // +0x88
    unsigned long long _participateCount; // +0x90
    MMUIActivityIndicatorView * _loadingIndicator; // +0x98
    MMUILabel * _loadingLabel; // +0xa0
    NSString * _votingId; // +0xa8
}
- (id)initWithTaskId:(id)arg1 viewModel:(id)arg2;
- (void)dealloc;
- (void)showIn:(id)arg1;
- (void)close;
- (void)updateLayoutIfNeeded;
- (void)_internalShowIn:(id)arg1;
- (void)_addAnimationForContent;
- (void)_interalClose;
- (void)updateShowProgressWithInfo:(id)arg1;
- (BOOL)shouldShowProgressWithInfo:(id)arg1;
- (void)onVotingInfoUpdate:(id)arg1 fromMsg:(BOOL)arg2;
- (void)updateWithInfo:(id)arg1 animate:(BOOL)arg2;
- (void)updateDisplayPropertiesWith:(id)arg1;
- (void)updateLabelsContentWith:(id)arg1;
- (void)updateViewsHiddenStatus;
- (void)updateCollectionViewAndListWith:(id)arg1 animate:(BOOL)arg2;
- (void)startCountdown;
- (void)countdownTimerCallBack;
- (BOOL)enableChangeWithAnimate:(id)arg1;
- (void)updateCollectionViewAnimateWithInfo:(id)arg1;
- (void)layoutSubviews;
- (void)createOrUpdateContentLayout;
- (double)collectionViewheight;
- (BOOL)collectionViewHasMask;
- (BOOL)isLandscape;
- (double)getHeaderLineHeight;
- (id)liveTask;
- (id)getRemainTimeTextWith:(unsigned int)arg1;
- (void)addMaskLayerForCollectionContainer;
- (id)genParticipantString;
- (void)fillHeadCountLabel;
- (BOOL)needLayoutTypeTipsNewline;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onPopupTap:(id)arg1;
- (void)onHeadCountLabelTap:(id)arg1;
- (id)contentView;
- (id)finishedLabel;
- (id)headerView;
- (id)voteTypeTips;
- (id)deadlineLabel;
- (id)choiceCollectionContainerView;
- (id)choiceCollectionView;
- (id)headcountLabel;
- (id)exitButton;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)loadingIndicator;
- (id)loadingLabel;
- (id)currentLiveTask;
- (id)popupViewId;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setFinishedLabel:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setVoteTypeTips:(id)arg1;
- (void)setDeadlineLabel:(id)arg1;
- (void)setHeadcountLabel:(id)arg1;
- (void)setChoiceCollectionView:(id)arg1;
- (void)setChoiceCollectionContainerView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setExitButton:(id)arg1;
- (BOOL)notUpdate;
- (void)setNotUpdate:(BOOL)arg1;
- (id)countdownTimer;
- (void)setCountdownTimer:(id)arg1;
- (unsigned int)remainTime;
- (void)setRemainTime:(unsigned int)arg1;
- (id)displayChoiceList;
- (void)setDisplayChoiceList:(id)arg1;
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (unsigned long long)participateCount;
- (void)setParticipateCount:(unsigned long long)arg1;
- (BOOL)showProgress;
- (void)setShowProgress:(BOOL)arg1;
- (void)setLoadingIndicator:(id)arg1;
- (void)setLoadingLabel:(id)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (id)votingId;
- (void)setVotingId:(id)arg1;
- (void).cxx_destruct;
@end
