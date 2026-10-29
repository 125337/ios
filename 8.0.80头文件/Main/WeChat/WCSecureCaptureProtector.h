@interface WCSecureCaptureProtector : NSObject
{
    BOOL _protectionEnabled; // +0x8
    BOOL _canvasResolutionFailed; // +0x9
    id /* block */ _logHook; // +0x10
    id /* block */ _reportCanvasNotFoundHook; // +0x18
    UIView * _hostView; // +0x20
    UIViewController * _owner; // +0x28
    WCSecurePassthroughTextField * _secureField; // +0x30
    UIView * _canvasView; // +0x38
    WCWindowChangeSentinel * _sentinel; // +0x40
    NSMutableArray * _savedItems; // +0x48
    id /* block */ _shouldMoveIntoCanvas; // +0x50
}
- (id)initWithLog:(id /* block */)arg1 reportCanvasNotFound:(id /* block */)arg2;
- (BOOL)isApplied;
- (BOOL)isProtecting;
- (void)log:(id)arg1;
- (long long)enableOnHostView:(id)arg1 owner:(id)arg2 shouldMoveIntoCanvas:(id /* block */)arg3;
- (void)disable;
- (void)installSentinelIfNeededOn:(id)arg1;
- (void)scheduleRemoveAfterFullyGone;
- (void)removeProtectionIfDetached;
- (long long)applyProtectionIfNeeded;
- (BOOL)shouldFillParentBoundsWithOriginalMask:(unsigned long long)arg1 recordedFrame:(CGRect)arg2;
- (BOOL)redirectNewSubviewIntoCanvas:(id)arg1;
- (void)removeProtection;
- (CGRect)protectedContentRectInView:(id)arg1;
- (id)renderProtectedHostImage;
- (void)drawSecureCanvasContent:(id)arg1 intoContext:(CGContext *)arg2 relativeToHost:(id)arg3;
- (void)dealloc;
- (BOOL)protectionEnabled;
- (void)setProtectionEnabled:(BOOL)arg1;
- (id /* block */)logHook;
- (void)setLogHook:(id /* block */)arg1;
- (id /* block */)reportCanvasNotFoundHook;
- (void)setReportCanvasNotFoundHook:(id /* block */)arg1;
- (id)hostView;
- (void)setHostView:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (id)secureField;
- (void)setSecureField:(id)arg1;
- (id)canvasView;
- (void)setCanvasView:(id)arg1;
- (id)sentinel;
- (void)setSentinel:(id)arg1;
- (id)savedItems;
- (void)setSavedItems:(id)arg1;
- (id /* block */)shouldMoveIntoCanvas;
- (void)setShouldMoveIntoCanvas:(id /* block */)arg1;
- (BOOL)canvasResolutionFailed;
- (void)setCanvasResolutionFailed:(BOOL)arg1;
- (void).cxx_destruct;
@end
