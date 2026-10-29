@interface WCFinderLandScapeCollectionCell : UICollectionViewCell
{
    UIView * _bgView; // +0x8
    RichTextView * _titleTextView; // +0x10
    UILabel * _playingMaskLabel; // +0x18
    CGSize _layoutSize; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupUI;
- (void)layoutSubviews;
- (void)_layoutUI;
- (void)updateWithContentVM:(id)arg1 isWatching:(BOOL)arg2;
- (CGSize)layoutSize;
- (void)setLayoutSize:(CGSize)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)titleTextView;
- (void)setTitleTextView:(id)arg1;
- (id)playingMaskLabel;
- (void)setPlayingMaskLabel:(id)arg1;
- (void).cxx_destruct;
@end

