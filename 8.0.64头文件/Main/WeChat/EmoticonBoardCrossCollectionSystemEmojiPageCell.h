@interface EmoticonBoardCrossCollectionSystemEmojiPageCell : EmoticonBoardCrossCollectionBasePageCell <UICollectionViewDataSource>
{
    NSMutableSet * _emojiHiddenSet; // +0x8
    UIButton * _deleteButton; // +0x10
    UIView * _buttonBackgroundView; // +0x18
    double _bottomInset; // +0x20
    UILongPressGestureRecognizer * _longPressGestureRecognizer; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configCollectionViewWithFrame:(CGRect)arg1;
- (void)configButtons;
- (void)configGestureRecognizer;
- (void)refreshView;
- (void)setSectionInfo:(id)arg1;
- (void)setBottomInset:(double)arg1;
- (void)setDarkMode:(BOOL)arg1;
- (void)updateButtonColor;
- (void)updateQQEmojiHiddenAnimated:(BOOL)arg1;
- (double)getAlphaForQQEmojiCellAtIndexPath:(id)arg1 andConvertedButtonFrame:(CGRect)arg2;
- (void)setQQEmojiAlpha:(double)arg1 forCellAtIndexPath:(id)arg2;
- (id)setForIndexPathsIntersectWithButtons;
- (CGRect)convertedButtonBackgroundViewFrameForIntersectionTest;
- (void)onTapDeleteButton;
- (void)onLongPressToPreview:(id)arg1;
- (unsigned long long)maximumNumberOfItemsInRow;
- (double)getButtonBottomPadding;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)buttonBackgroundView;
- (void)setButtonBackgroundView:(id)arg1;
- (double)bottomInset;
- (id)longPressGestureRecognizer;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end
