@interface MMFinderLiveAnchorFlashSaleCountDownView : UIView
{
    UILabel * _secondLabel; // +0x8
    UILabel * _tipsLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)startCountDownFrom:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)updateWithSecond:(unsigned long long)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)secondLabel;
- (void)setSecondLabel:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

