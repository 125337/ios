@interface WCMomentsShareScopeViewController : MMPageSheetBaseViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCMomentsShareScopeSectionFooterDelegate, WCGroupTagViewControllerDelegate>
{
    BOOL _hasLoadMoreForTagClicked; // +0x70
    BOOL _hasLoadMoreForContactClicked; // +0x71
    BOOL _hasModifyShareScopeClicked; // +0x72
    id <WCMomentsShareScopeViewControllerDelegate> _delegate; // +0x78
    WCMomentsShareScopeViewModel * _shareScopeVM; // +0x80
    WCMomentsShareScopeDataSource * _cellVMData; // +0x88
    UICollectionView * _contactCollectionView; // +0x90
    WCMomentsShareScopeBottomView * _shareScopeBottomView; // +0x98
    WCTextStatusShareScopeBottomView * _statusScopeBottomTip; // +0xa0
    UILabel * _noShareScopeDataTips; // +0xa8
}
- (id)initWithViewModel:(id)arg1;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewSafeAreaInsetsDidChange;
- (void)pageSheetWillDisappear;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)onClickedAtModifyScopeButton;
- (BOOL)canSelectPrivacySetting:(long long)arg1;
- (void)privacySettingChanged:(long long)arg1 label:(id)arg2 contacts:(id)arg3;
- (void)GroupTagViewControllerWillDissappear;
- (void)_resetDataSource;
- (void)_reloadTagDataIntoDataSource;
- (void)_reloadContactDataIntoDataSource;
- (void)_onCellViewAtIndex:(id)arg1 changeSelectedTo:(BOOL)arg2;
- (void)_openContactInfo:(id)arg1;
- (void)_reloadShareScope;
- (void)_updateTitle;
- (id)_getSectionHeaderViewAtIndexPath:(id)arg1;
- (id)_getSectionFooterViewAtIndexPath:(id)arg1;
- (double)_getSectionHeaderViewHeightInSection:(long long)arg1;
- (double)_getCellWidthInsideCollectionView;
- (BOOL)_shouldShowHeaderForSection:(long long)arg1;
- (BOOL)_shouldShowModifyScopeFooterForSection:(long long)arg1;
- (double)_detailViewHeight;
- (void)_initStyle;
- (void)_initView;
- (void)_initDetailView;
- (void)_initContactCollectionView;
- (void)_initShareScopeBottomView;
- (void)_initStatusScopeBottomView;
- (void)_initNoShareScopeDataTips;
- (void)_layoutContentView;
- (void)_updateContentView;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (void)doModifyShareScopeExposureReport;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)shareScopeVM;
- (void)setShareScopeVM:(id)arg1;
- (id)cellVMData;
- (void)setCellVMData:(id)arg1;
- (BOOL)hasLoadMoreForTagClicked;
- (void)setHasLoadMoreForTagClicked:(BOOL)arg1;
- (BOOL)hasLoadMoreForContactClicked;
- (void)setHasLoadMoreForContactClicked:(BOOL)arg1;
- (BOOL)hasModifyShareScopeClicked;
- (void)setHasModifyShareScopeClicked:(BOOL)arg1;
- (id)contactCollectionView;
- (void)setContactCollectionView:(id)arg1;
- (id)shareScopeBottomView;
- (void)setShareScopeBottomView:(id)arg1;
- (id)statusScopeBottomTip;
- (void)setStatusScopeBottomTip:(id)arg1;
- (id)noShareScopeDataTips;
- (void)setNoShareScopeDataTips:(id)arg1;
- (void).cxx_destruct;
@end
