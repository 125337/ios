@interface WCFinderFeedLiveToolBarItemButton : MMUIButton
{
    UIImageView * _itemImageView; // +0x8
    UILabel * _itemTitleLabel; // +0x10
}
+ (id)toolbarItemButton;
+ (id)whiteColorWithAlphaComponent;
+ (id)generateStaticIconImage:(id)arg1 iconColor:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setItemImageName:(id)arg1 iconColor:(id)arg2;
- (id)itemImageView;
- (void)setItemImageView:(id)arg1;
- (id)itemTitleLabel;
- (void)setItemTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
