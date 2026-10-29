@interface MMFinderLiveConnectMicRandomHintView : UIView <MMFinderLivePromoteDisplayLeaseTokenDelegate, MMLiveConnectMicExt>
{
    UIView * _contentView; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subtitleLabel; // +0x20
    MMUIButton * _applyButton; // +0x28
    MMFinderLivePromoteDisplayLeaseToken * _displayLeaseToken; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithGuideInfo:(id)arg1 displayLeaseToken:(id)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)onApplyButtonTapped;
- (void)onLiveCanApplyConnecteMicChanged:(BOOL)arg1;
- (void)onPromoteDisplayLeaseViewAttached:(id)arg1;
- (void)onPromoteDisplayLeaseInvalidated:(id)arg1 forReason:(unsigned long long)arg2;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)applyButton;
- (void)setApplyButton:(id)arg1;
- (id)displayLeaseToken;
- (void)setDisplayLeaseToken:(id)arg1;
- (void).cxx_destruct;
@end
