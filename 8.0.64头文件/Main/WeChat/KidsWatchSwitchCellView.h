@interface KidsWatchSwitchCellView : UIView
{
    BOOL _selected; // +0x8
    id <KidsWatchSwitchCellViewDelegate> _delegate; // +0x10
    NSString * _title; // +0x18
    UIView * _topSeparateView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    UIImageView * _selectIconView; // +0x30
    UITapGestureRecognizer * _tapGesture; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)initGesture;
- (void)onTap:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (double)updateSizeAndCalculateHeightFromFrame:(CGRect)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (BOOL)isSelected;
- (id)topSeparateView;
- (void)setTopSeparateView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)selectIconView;
- (void)setSelectIconView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end
