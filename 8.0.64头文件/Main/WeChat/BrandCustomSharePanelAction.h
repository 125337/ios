@interface BrandCustomSharePanelAction : NSObject
{
    BOOL _isDisabled; // +0x8
    NSString * _actionID; // +0x10
    NSString * _iconKey; // +0x18
    UIImage * _iconImage; // +0x20
    UIColor * _iconTintColor; // +0x28
    NSString * _actionName; // +0x30
}
- (id)actionID;
- (void)setActionID:(id)arg1;
- (id)iconKey;
- (void)setIconKey:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)iconTintColor;
- (void)setIconTintColor:(id)arg1;
- (id)actionName;
- (void)setActionName:(id)arg1;
- (BOOL)isDisabled;
- (void)setIsDisabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
