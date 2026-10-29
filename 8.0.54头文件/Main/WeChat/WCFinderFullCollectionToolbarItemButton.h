@interface WCFinderFullCollectionToolbarItemButton : MMUIButton
{
    BOOL _itemTitleAnimating; // +0x8
    UIImageView * _itemImageView; // +0x10
    UILabel * _itemTitleLabel; // +0x18
    UILabel * _additionalInfoLabel; // +0x20
}
+ (id)toolbarItemButton;
+ (id)whiteColorWithAlphaComponent;
+ (id)generateStaticIconImage:(id)arg1 iconColor:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)imageView;
- (id)titleLabel;
- (void)setItemImageName:(id)arg1 iconColor:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)prepareAdditionalInfoLabel;
- (BOOL)updateAdditionalInfoShowState:(BOOL)arg1 animationDuration:(double)arg2 complection:(id /* block */)arg3;
- (id)itemImageView;
- (void)setItemImageView:(id)arg1;
- (id)itemTitleLabel;
- (void)setItemTitleLabel:(id)arg1;
- (id)additionalInfoLabel;
- (void)setAdditionalInfoLabel:(id)arg1;
- (BOOL)itemTitleAnimating;
- (void)setItemTitleAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end

