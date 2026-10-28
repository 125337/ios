@interface BTBaseBarItemView : MMUIButton
{
    UIView * _headImageView; // +0x8
    UIView * _subtitleView; // +0x10
    MMUILabel * _itemSubTitleLabel; // +0x18
    UIImageView * _arrowView; // +0x20
    UIImageView * _dotImageView; // +0x28
    UIImageView * _finderIconView; // +0x30
    UIView * _lineView; // +0x38
    id <BTBarItemViewModelProtocol> _itemViewModel; // +0x40
    unsigned long long _index; // +0x48
    UIImageView * _borderView; // +0x50
    UIView * _markWrapperView; // +0x58
    UILabel * _markView; // +0x60
}
+ (double)iconWidth;
- (id)initWithViewModel:(id)arg1;
- (void)updateViewModel:(id)arg1;
- (id)accessibilityLabel;
- (void)initSubviews;
- (void)initHeaderView;
- (void)updateHeaderView;
- (void)initSubtitleView;
- (void)initDotImageView;
- (void)initLineViewIfNeed;
- (void)setHighlighted:(BOOL)arg1;
- (void)accessibilityElementDidBecomeFocused;
- (void)layoutSubviews;
- (void)layoutHeadImageView;
- (void)layoutSubtitleView;
- (void)layoutDotImageView;
- (void)layoutLineViewIfNeed;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)subtitleView;
- (void)setSubtitleView:(id)arg1;
- (id)itemSubTitleLabel;
- (void)setItemSubTitleLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)dotImageView;
- (void)setDotImageView:(id)arg1;
- (id)finderIconView;
- (void)setFinderIconView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)itemViewModel;
- (void)setItemViewModel:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (id)borderView;
- (void)setBorderView:(id)arg1;
- (id)markWrapperView;
- (void)setMarkWrapperView:(id)arg1;
- (id)markView;
- (void)setMarkView:(id)arg1;
- (void).cxx_destruct;
@end
