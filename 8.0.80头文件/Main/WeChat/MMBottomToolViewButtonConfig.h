@interface MMBottomToolViewButtonConfig : NSObject
{
    BOOL _isIconLeft; // +0x8
    UIImage * _iconImg; // +0x10
    NSString * _title; // +0x18
    id _target; // +0x20
    SEL _onClickAction; // +0x28
}
- (id)initConfigWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)iconImg;
- (void)setIconImg:(id)arg1;
- (BOOL)isIconLeft;
- (void)setIsIconLeft:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (SEL)onClickAction;
- (void)setOnClickAction:(SEL)arg1;
- (void).cxx_destruct;
@end
