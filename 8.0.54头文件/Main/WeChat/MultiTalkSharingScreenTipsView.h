@interface MultiTalkSharingScreenTipsView : UIView
{
    long long _currentStyle; // +0x8
    UIView * _contentView; // +0x10
    UIImageView * _iconImageView; // +0x18
    UILabel * _tipsLabel; // +0x20
}
+ (double)preferredHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)showTips;
- (void)delayShowIconTipsAnimated;
- (void)hideTips;
- (void)layoutLongTips;
- (void)layoutIconTips;
- (long long)currentStyle;
- (id)contentView;
- (id)iconImageView;
- (id)tipsLabel;
- (void).cxx_destruct;
@end

