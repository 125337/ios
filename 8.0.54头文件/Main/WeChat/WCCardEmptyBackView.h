@interface WCCardEmptyBackView : UIView
{
    NSString * _topText; // +0x8
    NSString * _bottomText; // +0x10
    UILabel * _topLabel; // +0x18
    UILabel * _bottomLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)topLabel;
- (id)bottomLabel;
- (void)setTopText:(id)arg1;
- (void)setBottomText:(id)arg1;
- (id)topText;
- (id)bottomText;
- (void)setTopLabel:(id)arg1;
- (void)setBottomLabel:(id)arg1;
- (void).cxx_destruct;
@end

