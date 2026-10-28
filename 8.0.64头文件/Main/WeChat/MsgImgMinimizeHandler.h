@interface MsgImgMinimizeHandler : MinimizeTaskBaseLogicController
{
    UIViewController * _sourceViewController; // +0x8
}
- (id)initWithTask:(id)arg1;
- (id)initWithTask:(id)arg1 sourceViewController:(id)arg2;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (id)sourceViewController;
- (void)setSourceViewController:(id)arg1;
- (void).cxx_destruct;
@end
