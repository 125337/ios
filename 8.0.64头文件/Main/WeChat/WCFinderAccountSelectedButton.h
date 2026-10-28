@interface WCFinderAccountSelectedButton : MMUIButton
{
    UIImageView * _leftImageView; // +0x8
    UILabel * _selectedLabel; // +0x10
    UIView * _redDotView; // +0x18
}
- (id)init;
- (void)setUpUI;
- (BOOL)hasShowRedDot;
- (void)showRedDotView:(BOOL)arg1;
- (void)reloadLayout;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (id)leftImageView;
- (void)setLeftImageView:(id)arg1;
- (id)selectedLabel;
- (void)setSelectedLabel:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (void).cxx_destruct;
@end
