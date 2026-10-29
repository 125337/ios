@interface MMFinderLiveCountdownWordLabel : UIView
{
    UILabel * _suffixLabel; // +0x8
    MMCountDownLabel * _countDownLabel; // +0x10
    MMWebImageView * _leftIconView; // +0x18
}
+ (double)widthWithPrefix:(id)arg1 suffix:(id)arg2 font:(id)arg3;
+ (double)widthWithPrefix:(id)arg1 suffix:(id)arg2 hasLeftIcon:(BOOL)arg3 font:(id)arg4;
- (id)initWithFrame:(CGRect)arg1;
- (void)setLeftIconURL:(id)arg1;
- (BOOL)hasLeftIcon;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (id)suffixLabel;
- (id)countDownLabel;
- (id)leftIconView;
- (void)setLeftIconView:(id)arg1;
- (void).cxx_destruct;
@end
