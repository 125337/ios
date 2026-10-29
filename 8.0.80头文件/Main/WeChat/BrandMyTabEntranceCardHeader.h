@interface BrandMyTabEntranceCardHeader : UIView
{
    MMBrandHeadImageView * _avatarView; // +0x8
    MMUILabel * _nickLabel; // +0x10
    MMUILabel * _tipsLabel; // +0x18
    UIImageView * _arrowView; // +0x20
    UIImageView * _verifiedIcon; // +0x28
    MMUILabel * _failedLabel; // +0x30
    UIView * _failedRedDot; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpViews;
- (void)setUpLayout;
- (void)updateContentWithCardInfo:(id)arg1 reportInfo:(id)arg2;
- (id)avatarView;
- (id)nickLabel;
- (id)tipsLabel;
- (id)failedLabel;
- (id)failedRedDot;
- (id)arrowView;
- (id)verifiedIcon;
- (void)setAvatarView:(id)arg1;
- (void)setNickLabel:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void)setVerifiedIcon:(id)arg1;
- (void)setFailedLabel:(id)arg1;
- (void)setFailedRedDot:(id)arg1;
- (void).cxx_destruct;
@end
