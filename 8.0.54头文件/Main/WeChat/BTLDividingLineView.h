@interface BTLDividingLineView : UIView
{
    UILabel * _tipsLabel; // +0x8
    UIView * _leftLine; // +0x10
    UIView * _rightLine; // +0x18
}
- (id)initWithTipsWording:(id)arg1 font:(id)arg2;
- (void)internalInitWithWording:(id)arg1 font:(id)arg2;
- (void)layoutSubviews;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)leftLine;
- (void)setLeftLine:(id)arg1;
- (id)rightLine;
- (void)setRightLine:(id)arg1;
- (void).cxx_destruct;
@end

