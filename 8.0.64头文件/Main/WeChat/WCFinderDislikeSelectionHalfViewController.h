@interface WCFinderDislikeSelectionHalfViewController : MMUIHalfScreenViewController <UITableViewDelegate, UITableViewDataSource, WCFinderFeedContentVMExt>
{
    BOOL _selectionWithoutConfirm; // +0x70
    int _commentScene; // +0x74
    MMUIButton * _closeBtn; // +0x78
    UILabel * _titleLabel; // +0x80
    MMUIButton * _submitBtn; // +0x88
    UITableView * _tableView; // +0x90
    WCFinderAnimationLoadingView * _loadingView; // +0x98
    UIButton * _retryBtn; // +0xa0
    WCFinderFeedContentVM * _contentVM; // +0xa8
    double _heightRatio; // +0xb0
    NSMutableArray * _selectedEntries; // +0xb8
    NSMutableSet * _exposedEntries; // +0xc0
    id /* block */ _dislikeActionCompleteBlock; // +0xc8
}
- (BOOL)useTransparentNavibar;
- (BOOL)isForbidPanGesture;
- (id)initWithContentVM:(id)arg1 commentScene:(int)arg2;
- (void)baseInit;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateUI;
- (void)updateDataState;
- (void)showRetryButon;
- (void)removeRetryButton;
- (void)showLoadingView;
- (void)removeLoadingView;
- (double)getMaxHalfScreenHeight;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (id)wordingEntryAtIndex:(unsigned long long)arg1;
- (void)onCloseButtonClicked:(id)arg1;
- (void)onRetryButtonClicked:(id)arg1;
- (void)onSubmitButtonClicked:(id)arg1;
- (void)submitDislikeReason:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_handleWordingEntrySubmit:(id)arg1;
- (void)_handleWordingEntrySelect:(id)arg1;
- (void)reportCellEventWithIndexPath:(id)arg1 event:(id)arg2;
- (void)onFeedContentFeedbackReasonChanged:(id)arg1;
- (void)onFeedContentFeedbackReasonFetchFail:(id)arg1;
- (void)_onFeedbackReasonFetchStateUpdateWith:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)submitBtn;
- (void)setSubmitBtn:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)retryBtn;
- (void)setRetryBtn:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (id)selectedEntries;
- (void)setSelectedEntries:(id)arg1;
- (id)exposedEntries;
- (void)setExposedEntries:(id)arg1;
- (BOOL)selectionWithoutConfirm;
- (void)setSelectionWithoutConfirm:(BOOL)arg1;
- (id /* block */)dislikeActionCompleteBlock;
- (void)setDislikeActionCompleteBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
