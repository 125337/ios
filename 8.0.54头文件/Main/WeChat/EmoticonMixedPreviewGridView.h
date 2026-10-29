@interface EmoticonMixedPreviewGridView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, EmoticonPreviewWindowViewControllerDelegate, EmoticonHalfScreenSendViewDelegate>
{
    id <EmoticonMixedPreviewGridViewDelegate><MMUIViewControllerDelegate> _delegate; // +0x8
    EmoticonMixedPreviewGridViewConfig * _config; // +0x10
    UICollectionView * _collectionView; // +0x18
    NSArray * _displayCellList; // +0x20
    UILongPressGestureRecognizer * _longPressGestureRecognizer; // +0x28
    NSIndexPath * _selectedIndexPath; // +0x30
    UICollectionViewFlowLayout * _collectionLayout; // +0x38
    EmoticonPreviewWindowViewController * _emoticonPreview; // +0x40
    UIView * _colorMaskView; // +0x48
}
- (id)initWithConfig:(id)arg1;
- (void)layoutSubviews;
- (void)initSubViews;
- (void)updateConfig:(id)arg1;
- (void)configGestureRecognizer;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (id)displayCellList;
- (unsigned long long)maxEmojiCountForDesigner;
- (unsigned long long)maxPreviewCount;
- (void)onLongPressToPreview:(id)arg1;
- (void)showPreview:(id)arg1 description:(id)arg2 frame:(CGRect)arg3 index:(unsigned long long)arg4;
- (void)hideEmoticonPreview;
- (BOOL)hasItemsToShow;
- (void)onFinishPreviewAndChangeToPid:(id)arg1;
- (void)reportTouchForMD5:(id)arg1 pid:(id)arg2 selectionType:(unsigned long long)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (void)setDisplayCellList:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (id)emoticonPreview;
- (void)setEmoticonPreview:(id)arg1;
- (id)colorMaskView;
- (void)setColorMaskView:(id)arg1;
- (void).cxx_destruct;
@end

