@interface WCFinderCommentAuthorityTipsCell : UITableViewCell
{
    id <WCFinderCommentAuthorityTipsCellDelegate> _delegate; // +0x8
    UIImageView * _iconView; // +0x10
    YYLabel * _tipsLabel; // +0x18
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)commonInit;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end
