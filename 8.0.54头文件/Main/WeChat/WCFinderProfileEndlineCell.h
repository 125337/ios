@interface WCFinderProfileEndlineCell : UICollectionReusableView
{
    UIView * _leftLine; // +0x8
    UIView * _rightLine; // +0x10
    UILabel * _textLabel; // +0x18
}
+ (double)textLabelWidth:(double)arg1;
+ (double)displayHeightWithWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)leftLine;
- (void)setLeftLine:(id)arg1;
- (id)rightLine;
- (void)setRightLine:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end

