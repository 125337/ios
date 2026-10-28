@interface QuickReplyMsgFinishTips : UIView
{
    UIView * _contentView; // +0x8
    UIImageView * _iconImageView; // +0x10
    UILabel * _tipsLabel; // +0x18
}
- (id)initWithTips:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)didMoveToSuperview;
- (void)sizeToFitWidth:(double)arg1;
- (void)layoutSubviews;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
