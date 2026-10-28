@interface WCFinderFullCollectionToolbarItemButton : MMUIButton
{
    BOOL _itemTitleAnimating; // +0x8
    UIImageView * _itemImageView; // +0x10
    UILabel * _itemTitleLabel; // +0x18
    UILabel * _additionalInfoLabel; // +0x20
    UILongPressGestureRecognizer * _longPressGes; // +0x28
    MMTimer * _longPressTimer; // +0x30
    double _longPressInterval; // +0x38
    id _longPressTarget; // +0x40
    SEL _longPressSelector; // +0x48
    id /* block */ _longPressBlock; // +0x50
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
- (void)addLongPressActionWithMinDuration:(double)arg1 interval:(double)arg2 pressBlock:(id /* block */)arg3;
- (void)buttonLongPressAction:(id)arg1;
- (void)longPressAction;
- (id)itemImageView;
- (void)setItemImageView:(id)arg1;
- (id)itemTitleLabel;
- (void)setItemTitleLabel:(id)arg1;
- (id)additionalInfoLabel;
- (void)setAdditionalInfoLabel:(id)arg1;
- (BOOL)itemTitleAnimating;
- (void)setItemTitleAnimating:(BOOL)arg1;
- (id)longPressGes;
- (void)setLongPressGes:(id)arg1;
- (id)longPressTimer;
- (void)setLongPressTimer:(id)arg1;
- (double)longPressInterval;
- (void)setLongPressInterval:(double)arg1;
- (id)longPressTarget;
- (void)setLongPressTarget:(id)arg1;
- (SEL)longPressSelector;
- (void)setLongPressSelector:(SEL)arg1;
- (id /* block */)longPressBlock;
- (void)setLongPressBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
