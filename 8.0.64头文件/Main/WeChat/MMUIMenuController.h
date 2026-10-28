@interface MMUIMenuController : NSObject <UIEditMenuInteractionDelegate>
{
    UIMenu * _menu; // +0x8
    CGRect _targetRect; // +0x10
}
+ (id)sharedMenuController;
- (void)showMenuFromView:(id)arg1 rect:(CGRect)arg2;
- (void)hideMenu;
- (void)setMenuItems:(id)arg1;
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;
- (CGRect)editMenuInteraction:(id)arg1 targetRectForConfiguration:(id)arg2;
- (id)menu;
- (void)setMenu:(id)arg1;
- (CGRect)targetRect;
- (void)setTargetRect:(CGRect)arg1;
- (void).cxx_destruct;
@end
