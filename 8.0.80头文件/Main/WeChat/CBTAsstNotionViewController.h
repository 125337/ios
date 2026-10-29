@interface CBTAsstNotionViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _isFetching; // +0x70
    id <CBTAsstNotionViewControllerDelegate> _delegate; // +0x78
    MMUIButton * _closeButton; // +0x80
    UILabel * _titleLabel; // +0x88
    UICollectionViewFlowLayout * _flowLayout; // +0x90
    UICollectionView * _collectionView; // +0x98
    UIActivityIndicatorView * _loadingView; // +0xa0
    UILabel * _stateLabel; // +0xa8
    NSArray * _notionList; // +0xb0
    NSString * _chatPrefix; // +0xb8
    NSString * _chatPostfix; // +0xc0
}
- (void)viewDidLoad;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)buildSubviews;
- (void)fetchNotionsIfNeeded;
- (void)updateDisplayState;
- (void)onCloseButtonClick;
- (void)requestChatWithCurrentNotion;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (id)notionList;
- (void)setNotionList:(id)arg1;
- (id)chatPrefix;
- (void)setChatPrefix:(id)arg1;
- (id)chatPostfix;
- (void)setChatPostfix:(id)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (void).cxx_destruct;
@end
