@interface BrandProfileCeilingTableView : MMTableView
{
    BOOL _hasFeaturedMessage; // +0x39
    BOOL _hasTopVerticalPicCard; // +0x3a
    BOOL _hasUpdateReminder; // +0x3b
    UIGestureRecognizer * _otherGestureRecognizer; // +0x40
    UIGestureRecognizer * _interactivePopGestureRecognizer; // +0x48
    CAGradientLayer * _backgroundLayer; // +0x50
}
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;
- (void)initGackgroundLayer;
- (void)layoutSubviews;
- (void)reloadGradientLayer;
- (void)traitCollectionDidChange:(id)arg1;
- (id)otherGestureRecognizer;
- (void)setOtherGestureRecognizer:(id)arg1;
- (id)interactivePopGestureRecognizer;
- (void)setInteractivePopGestureRecognizer:(id)arg1;
- (BOOL)hasFeaturedMessage;
- (void)setHasFeaturedMessage:(BOOL)arg1;
- (BOOL)hasTopVerticalPicCard;
- (void)setHasTopVerticalPicCard:(BOOL)arg1;
- (BOOL)hasUpdateReminder;
- (void)setHasUpdateReminder:(BOOL)arg1;
- (id)backgroundLayer;
- (void)setBackgroundLayer:(id)arg1;
- (void).cxx_destruct;
@end
