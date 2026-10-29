@interface WCFinderCollectionActionConfigurationView : UIView <UIContentView>
{
    WCFinderCollectionActionConfiguration * _appliedConfiguration; // +0x8
    UIButton * _shareButton; // +0x10
    UIButton * _favoritesButton; // +0x18
}
- (id)initWithConfiguration:(id)arg1;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (void)_applyConfiguration:(id)arg1;
- (void)_setupUI;
- (void)_updateUI;
- (void)_updateLayout;
- (void)layoutSubviews;
- (void)_didTapShareButton;
- (void)_didTapFavoritesButton;
- (void)_setupReport;
- (void)_configButtonReport:(id)arg1 viewID:(id)arg2;
- (void)_configFavoritesButtonReport;
- (id)shareButton;
- (id)favoritesButton;
- (id)_getNewActionButtonWithTitle:(id)arg1 action:(SEL)arg2;
- (id)appliedConfiguration;
- (void)setAppliedConfiguration:(id)arg1;
- (void)setShareButton:(id)arg1;
- (void)setFavoritesButton:(id)arg1;
- (void).cxx_destruct;
@end
