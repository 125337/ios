@interface KidsWatchInfoCellView : UIView
{
    BOOL _showSeparator; // +0x8
    KidsWatchInfoItem * _item; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _contentLabel; // +0x20
    UIView * _separatorView; // +0x28
    CAShapeLayer * _dotLayer; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(CGRect)arg1;
- (void)setItem:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setShowSeparator:(BOOL)arg1;
- (id)item;
- (BOOL)showSeparator;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (id)dotLayer;
- (void)setDotLayer:(id)arg1;
- (void).cxx_destruct;
@end

