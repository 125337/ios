@interface BrandMyTabEntranceCardHeader : UIView
{
    MMBrandHeadImageView * _avatarView; // +0x8
    MMUILabel * _nickLabel; // +0x10
    MMUILabel * _tipsLabel; // +0x18
    UIImageView * _arrowView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpViews;
- (void)setUpLayout;
- (void)updateWithCardInfo:(id)arg1;
- (id)avatarView;
- (id)nickLabel;
- (id)tipsLabel;
- (id)arrowView;
- (void)setAvatarView:(id)arg1;
- (void)setNickLabel:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end
