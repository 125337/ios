@interface MMLiveActionSheetFlowLayoutView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MMLiveActionSheetCollectionCellDelegate>
{
    BOOL _isHeightUnconstrained; // +0x8
    BOOL _hideFirstLineTitle; // +0x9
    id <MMLiveActionSheetFlowLayoutViewDelegate> _delegate; // +0x10
    MMScrollActionSheet * _actionSheet; // +0x18
    NSArray * _actionSheetItems; // +0x20
    NSArray * _sctionTitleArray; // +0x28
    UICollectionView * _actionSheetCollectionView; // +0x30
    UICollectionViewFlowLayout * _actionSheetCollectionLayout; // +0x38
    NSIndexPath * _firstRedDotIndexPath; // +0x40
    MMGradientBottomView * _bottomGradientView; // +0x48
}
- (id)init;
- (id)getActionSheetCollectionView;
- (void)initView;
- (void)updateActionSheetCollectionView:(BOOL)arg1;
- (void)layoutSubviews;
- (void)laytoutUI;
- (void)createBottomGradientViewIfNeeded;
- (void)layoutBottomGradientView;
- (BOOL)showSectionHeader;
- (double)getCurrentCellVerticalSpacing;
- (double)getCurrentSectionVerticalSpacing;
- (double)getCurrentCellVerticalMarginBottom;
- (double)getCurrentCellHorizontalMargin;
- (void)updateCollectionLayout;
- (void)fitThatWidth:(double)arg1;
- (void)relayoutView;
- (void)updateWithActionSheetItems:(id)arg1 sctionTitleArray:(id)arg2 showInView:(id)arg3;
- (id)getCurrentActionSheetItems;
- (double)getCellHorizontalMargin;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)getTitleAtIndexPath:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)onActionSheetItemClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (BOOL)isHeightUnconstrained;
- (void)setIsHeightUnconstrained:(BOOL)arg1;
- (BOOL)hideFirstLineTitle;
- (void)setHideFirstLineTitle:(BOOL)arg1;
- (id)actionSheetItems;
- (void)setActionSheetItems:(id)arg1;
- (id)sctionTitleArray;
- (void)setSctionTitleArray:(id)arg1;
- (id)actionSheetCollectionView;
- (void)setActionSheetCollectionView:(id)arg1;
- (id)actionSheetCollectionLayout;
- (void)setActionSheetCollectionLayout:(id)arg1;
- (id)firstRedDotIndexPath;
- (void)setFirstRedDotIndexPath:(id)arg1;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg1;
- (void).cxx_destruct;
@end
