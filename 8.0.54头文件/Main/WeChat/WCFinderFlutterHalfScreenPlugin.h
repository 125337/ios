@interface WCFinderFlutterHalfScreenPlugin : NSObject <MMFlutterPlugin, FinderHalfScreenNativeAPI>
{
    BOOL _preventDrag; // +0x8
    id <WCFinderFlutterHalfScreenPluginDelegate> _delegate; // +0x10
    FinderHalfScreenFlutterAPI * _flutterAPI; // +0x18
    NSArray * _preventDragAreas; // +0x20
}
- (BOOL)dragGesShouldBeginWithTouchLocation:(CGPoint)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)cancelHalfScreenAnimated:(BOOL)arg1 error:(id *)arg2;
- (void)updateHalfScreenContentHeightHeight:(double)arg1 error:(id *)arg2;
- (void)updateDragPreventStatePrevent:(BOOL)arg1 error:(id *)arg2;
- (void)updatePreventDragAreaAreas:(id)arg1 error:(id *)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)flutterAPI;
- (void)setFlutterAPI:(id)arg1;
- (BOOL)preventDrag;
- (void)setPreventDrag:(BOOL)arg1;
- (id)preventDragAreas;
- (void)setPreventDragAreas:(id)arg1;
- (void).cxx_destruct;
@end

