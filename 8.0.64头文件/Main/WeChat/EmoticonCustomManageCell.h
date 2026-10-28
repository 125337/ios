@interface EmoticonCustomManageCell : UICollectionViewCell
{
    BOOL _isScaled; // +0x8
    BOOL _shouldShowDvider; // +0x9
    EmoticonCustomManageWrap * _emoticonWrap; // +0x10
    EmoticonCustomManageView * _manageView; // +0x18
    UIImageView * _syncingImg; // +0x20
    double _currentWidth; // +0x28
}
- (void)updateEmoticonWrap:(id)arg1 delegate:(id)arg2 edge:(double)arg3;
- (void)updateLayoutWithEmoticonWrap:(id)arg1;
- (id)showingEmoticonMd5;
- (void)doFlashAnimation;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
- (void)updateLayoutForAttr;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
- (id)manageView;
- (void)setManageView:(id)arg1;
- (id)syncingImg;
- (void)setSyncingImg:(id)arg1;
- (double)currentWidth;
- (void)setCurrentWidth:(double)arg1;
- (BOOL)isScaled;
- (void)setIsScaled:(BOOL)arg1;
- (BOOL)shouldShowDvider;
- (void)setShouldShowDvider:(BOOL)arg1;
- (void).cxx_destruct;
@end
