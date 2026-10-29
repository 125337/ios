@interface ImageBrowseButton : MMUIButton
{
    UIView * _roundBackView; // +0x8
    UIView * _coverBackView; // +0x10
    UIView * _selectedView; // +0x18
    BOOL _isRound; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isRound;
- (void)setIsRound:(BOOL)arg1;
- (void).cxx_destruct;
@end

