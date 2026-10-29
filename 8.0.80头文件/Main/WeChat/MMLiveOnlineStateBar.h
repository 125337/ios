@interface MMLiveOnlineStateBar : MMLiveBaseOnlineStateBar
{
    UIImageView * _avatarIcon; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateOnlineCountTitle:(id)arg1;
- (void)sizeToFits;
- (void)refreshWidgetsForFontSizeChange;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onOnlineStateButtonClicked;
- (id)avatarIcon;
- (void)setAvatarIcon:(id)arg1;
- (void).cxx_destruct;
@end
