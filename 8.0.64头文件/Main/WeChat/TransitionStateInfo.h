@interface TransitionStateInfo : NSObject
{
    BOOL _isCollapseInvoking; // +0x8
    BOOL _isWaitingRotatePortraitToCollapse; // +0x9
    BOOL _isCollapseAnimated; // +0xa
    BOOL _isExtendFromCollapseAnimated; // +0xb
    BOOL _isDisposeMinimizeWindowAnimated; // +0xc
    long long _transitionState; // +0x10
    NSMutableDictionary * _extraInfo; // +0x18
    id /* block */ _collapseCompletionCallback; // +0x20
    long long _extendPrepareActionMaximize; // +0x28
    long long _extendPrepareActionRotate; // +0x30
    id /* block */ _extendFromCollapseCompletionCallback; // +0x38
    long long _disposeMinimizeWindowPrepareActionMaximize; // +0x40
}
- (id)initWithTransitionState:(long long)arg1;
- (id)extraInfo;
- (void)setIsCollapseInvoking:(BOOL)arg1;
- (void)setIsWaitingRotatePortraitToCollapse:(BOOL)arg1;
- (void)setIsCollapseAnimated:(BOOL)arg1;
- (void)setCollapseCompletionCallback:(id /* block */)arg1;
- (BOOL)isCurrInCollapseTransition;
- (void)setIsExtendFromCollapseAnimated:(BOOL)arg1;
- (void)setExtendPrepareActionMaximize:(long long)arg1;
- (void)setExtendPrepareActionRotate:(long long)arg1;
- (void)setExtendFromCollapseCompletionCallback:(id /* block */)arg1;
- (BOOL)isCurrExtendingFromCollapse;
- (void)setIsDisposeMinimizeWindowAnimated:(BOOL)arg1;
- (void)setDisposeMinimizeWindowPrepareActionMaximize:(long long)arg1;
- (BOOL)isCurrDisposingMinimizeWindow;
- (long long)transitionState;
- (void)setTransitionState:(long long)arg1;
- (void)setExtraInfo:(id)arg1;
- (BOOL)isCollapseInvoking;
- (BOOL)isWaitingRotatePortraitToCollapse;
- (BOOL)isCollapseAnimated;
- (id /* block */)collapseCompletionCallback;
- (BOOL)isExtendFromCollapseAnimated;
- (long long)extendPrepareActionMaximize;
- (long long)extendPrepareActionRotate;
- (id /* block */)extendFromCollapseCompletionCallback;
- (BOOL)isDisposeMinimizeWindowAnimated;
- (long long)disposeMinimizeWindowPrepareActionMaximize;
- (void).cxx_destruct;
@end
