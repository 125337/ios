@interface WCFinderReMinimizeHelper : NSObject
{
    UIViewController * _relativeVC; // +0x8
    id /* block */ _createTransationBlock; // +0x10
    id /* block */ _validChecker; // +0x18
    NSValue * _floatingViewFrame; // +0x20
}
- (id)relativeVC;
- (void)setRelativeVC:(id)arg1;
- (id /* block */)createTransationBlock;
- (void)setCreateTransationBlock:(id /* block */)arg1;
- (id /* block */)validChecker;
- (void)setValidChecker:(id /* block */)arg1;
- (id)floatingViewFrame;
- (void)setFloatingViewFrame:(id)arg1;
- (void).cxx_destruct;
@end
