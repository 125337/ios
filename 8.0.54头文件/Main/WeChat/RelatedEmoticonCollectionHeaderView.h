@interface RelatedEmoticonCollectionHeaderView : UICollectionReusableView
{
    BOOL _showBottomTextAndSeparateLine; // +0x8
    CEmoticonWrap * _emoticonWrap; // +0x10
    UILabel * _bottomTextLabel; // +0x18
    MMEmoticonView * _emoticonView; // +0x20
    CGSize _emoticonSize; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setEmoticonSize:(CGSize)arg1;
- (void)setEmoticonWrap:(id)arg1;
- (void)setShowBottomTextAndSeparateLine:(BOOL)arg1;
- (void)layoutSubviews;
- (id)emoticonWrap;
- (BOOL)showBottomTextAndSeparateLine;
- (CGSize)emoticonSize;
- (id)bottomTextLabel;
- (void)setBottomTextLabel:(id)arg1;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (void).cxx_destruct;
@end

