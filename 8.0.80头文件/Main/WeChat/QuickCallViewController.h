@interface QuickCallViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MultiSelectContactsViewControllerDelegate, QuickCallRemoveViewControllerDelegate, ElderModeExt, ILinkEventExt, QuickCallLogicDelegate>
{
    BOOL _enableJumpToElderMode; // +0x70
    BOOL _hasShowEducation; // +0x71
    long long _scene; // +0x78
    QuickCallLogic * _logic; // +0x80
    double _footerViewHeight; // +0x88
    UIView * _headerView; // +0x90
    MMUILabel * _titleLabel; // +0x98
    MMUILabel * _emptyTipsLabel; // +0xa0
    MMUILabel * _descLabel; // +0xa8
    UIButton * _addContactButton; // +0xb0
    UICollectionView * _collectionView; // +0xb8
    UICollectionViewFlowLayout * _collectionLayout; // +0xc0
    UIView * _footerView; // +0xc8
    RichTextView * _elderModeTipsView; // +0xd0
    MultiSelectContactsViewController * _selectContactVC; // +0xd8
    ElderModeViewController * _elderModeVC; // +0xe0
}
- (id)initWithEnableJumpToElderMode:(BOOL)arg1;
- (void)viewDidLoad;
- (void)registerYReportSdk;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initElderModeContent;
- (void)initQuickCallContent;
- (BOOL)shouldInteractiveDismiss;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)initUI;
- (void)initLayout;
- (void)viewDidLayoutSubviews;
- (void)updateContent;
- (void)checkShowEducation;
- (double)collectionContentHeight;
- (void)onSetElderModeOn:(BOOL)arg1 success:(BOOL)arg2;
- (void)onSetSpecialRenderModeOn:(BOOL)arg1 success:(BOOL)arg2;
- (void)handleRedirectToQuickCallViewController;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)onRemoveContactsDone:(id)arg1;
- (void)onQuickCallContactsUpdate;
- (void)showMultiSelectContacts;
- (void)onAddContactButtonClick:(id)arg1;
- (void)onEditButtonClick:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (BOOL)enableJumpToElderMode;
- (void)setEnableJumpToElderMode:(BOOL)arg1;
- (double)footerViewHeight;
- (void)setFooterViewHeight:(double)arg1;
- (BOOL)hasShowEducation;
- (void)setHasShowEducation:(BOOL)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)emptyTipsLabel;
- (void)setEmptyTipsLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)addContactButton;
- (void)setAddContactButton:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)elderModeTipsView;
- (void)setElderModeTipsView:(id)arg1;
- (id)selectContactVC;
- (void)setSelectContactVC:(id)arg1;
- (id)elderModeVC;
- (void)setElderModeVC:(id)arg1;
- (void).cxx_destruct;
@end
