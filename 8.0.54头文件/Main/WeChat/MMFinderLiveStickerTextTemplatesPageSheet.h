@interface MMFinderLiveStickerTextTemplatesPageSheet : MMPageSheetBaseView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <MMFinderLiveStickerTextTemplatesPageSheetDelegate> _delegate; // +0x8
    NSArray * _templateItems; // +0x10
    unsigned long long _result; // +0x18
    UIView * _customTitleBarView; // +0x20
    UIButton * _closeButton; // +0x28
    UILabel * _titleLabel; // +0x30
    UIButton * _confirmButton; // +0x38
    UIView * _collectionContainerView; // +0x40
    MMLiveScrollGradientMaskingView * _collectionViewMaskingView; // +0x48
    UICollectionViewFlowLayout * _templatesCollectionViewLayout; // +0x50
    UICollectionView * _templatesCollectionView; // +0x58
}
- (id)initWithTemplateItems:(id)arg1 selectedIndex:(unsigned long long)arg2;
- (double)pageSheetContentWidth;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)pageSheetDidAppear;
- (void)layoutSubviews;
- (void)onConfirmed;
- (void)onCanceled;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)initializeComponents;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)templateItems;
- (void)setTemplateItems:(id)arg1;
- (unsigned long long)result;
- (void)setResult:(unsigned long long)arg1;
- (id)customTitleBarView;
- (void)setCustomTitleBarView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)collectionContainerView;
- (void)setCollectionContainerView:(id)arg1;
- (id)collectionViewMaskingView;
- (void)setCollectionViewMaskingView:(id)arg1;
- (id)templatesCollectionViewLayout;
- (void)setTemplatesCollectionViewLayout:(id)arg1;
- (id)templatesCollectionView;
- (void)setTemplatesCollectionView:(id)arg1;
- (void).cxx_destruct;
@end

