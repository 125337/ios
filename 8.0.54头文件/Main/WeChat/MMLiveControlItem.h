@interface MMLiveControlItem : NSObject
{
    BOOL _showBadge; // +0x8
    NSString * _controlName; // +0x10
    NSString * _controlIconName; // +0x18
    NSString * _controlTitle; // +0x20
    id <MMLiveControlItemDelegate> _delegate; // +0x28
    CGSize _iconImageSize; // +0x30
}
- (void)setShowBadge:(BOOL)arg1;
- (id)controlName;
- (void)setControlName:(id)arg1;
- (id)controlIconName;
- (void)setControlIconName:(id)arg1;
- (id)controlTitle;
- (void)setControlTitle:(id)arg1;
- (CGSize)iconImageSize;
- (void)setIconImageSize:(CGSize)arg1;
- (BOOL)showBadge;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

