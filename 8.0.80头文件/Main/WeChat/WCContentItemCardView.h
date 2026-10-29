@interface WCContentItemCardView : WCContentItemBaseView
{
    WCContentItemCardViewModel * _viewModel; // +0x38
    SightIconView * _playIconView; // +0x40
    MMWebImageView * _contentImageView; // +0x48
    UIImageView * _picIconView; // +0x50
    MMWebImageView * _headImageView; // +0x58
    UILabel * _nameLabel; // +0x60
    UILabel * _durationLabel; // +0x68
    UIView * _hlView; // +0x70
    UIImageView * _bottomBkgView; // +0x78
}
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
- (void)initViewsWithWCDataItem:(id)arg1;
- (id)picIconView;
- (id)playIconView;
- (id)contentImageView;
- (id)headImageView;
- (id)bottomBkgView;
- (id)nameLabel;
- (id)durationLabel;
- (id)hlView;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)layoutDefault;
- (void)layoutPureText;
- (void)layoutCardStyle;
- (void)hideMenu;
- (unsigned long long)menuItemBitFlag;
- (void)onLongTouch;
- (void)onSelectMenuFavoritesAdd;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setPlayIconView:(id)arg1;
- (void)setContentImageView:(id)arg1;
- (void)setPicIconView:(id)arg1;
- (void)setHeadImageView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setDurationLabel:(id)arg1;
- (void)setHlView:(id)arg1;
- (void)setBottomBkgView:(id)arg1;
- (void).cxx_destruct;
@end
