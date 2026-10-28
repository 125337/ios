@interface MainFrameAggregationCellMenuButton : MenuButton
{
    BOOL _isInUnreadState; // +0x8
    NSString * _title; // +0x10
    NSString * _iconImageName; // +0x18
    UIImageView * _iconView; // +0x20
    UIImageView * _animatedIconView; // +0x28
    MMUILabel * _textLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setTitle:(id)arg1;
- (void)setIconImageName:(id)arg1;
- (void)setIconImageName:(id)arg1 animated:(BOOL)arg2;
- (void)setHasUnread:(BOOL)arg1;
- (void)layoutSubviews;
- (void)onSwipeToTriggerFullfill:(BOOL)arg1;
- (id)title;
- (id)iconImageName;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)animatedIconView;
- (void)setAnimatedIconView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (BOOL)isInUnreadState;
- (void)setIsInUnreadState:(BOOL)arg1;
- (void).cxx_destruct;
@end
