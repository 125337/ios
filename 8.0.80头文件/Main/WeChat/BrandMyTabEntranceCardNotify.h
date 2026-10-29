@interface BrandMyTabEntranceCardNotify : UIView
{
    UIView * _topSeparator; // +0x8
    MMUILabel * _textLabel; // +0x10
    UIView * _redDot; // +0x18
    UIImageView * _arrowView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithText:(id)arg1;
- (void)setUpViews;
- (void)setUpLayout;
- (void)layoutSubviews;
- (id)topSeparator;
- (id)textLabel;
- (id)redDot;
- (id)arrowView;
- (void)setTopSeparator:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setRedDot:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end
