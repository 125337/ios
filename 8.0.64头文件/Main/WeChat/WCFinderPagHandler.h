@interface WCFinderPagHandler : NSObject <PAGViewListener>
{
    id /* block */ _animationStartBlock; // +0x8
    id /* block */ _animationEndBlock; // +0x10
    id /* block */ _animationCancelBlock; // +0x18
    id /* block */ _animationRepeatBlock; // +0x20
    id /* block */ _animationUpdateBlock; // +0x28
}
- (id)initWithPagView:(id)arg1;
- (void)onAnimationStart:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (void)onAnimationRepeat:(id)arg1;
- (void)onAnimationUpdate:(id)arg1;
- (void)dealloc;
- (id /* block */)animationStartBlock;
- (void)setAnimationStartBlock:(id /* block */)arg1;
- (id /* block */)animationEndBlock;
- (void)setAnimationEndBlock:(id /* block */)arg1;
- (id /* block */)animationCancelBlock;
- (void)setAnimationCancelBlock:(id /* block */)arg1;
- (id /* block */)animationRepeatBlock;
- (void)setAnimationRepeatBlock:(id /* block */)arg1;
- (id /* block */)animationUpdateBlock;
- (void)setAnimationUpdateBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
