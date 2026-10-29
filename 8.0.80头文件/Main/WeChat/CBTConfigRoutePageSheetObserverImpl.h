@interface CBTConfigRoutePageSheetObserverImpl : NSObject <CBTHalfScreenStatusObserverBase>
- (void)onHalfScreenOpen:(id)arg1 reuseKey:(id)arg2 isAnimationBegin:(BOOL)arg3;
- (void)onHalfScreenClose:(id)arg1 reuseKey:(id)arg2 isAnimationBegin:(BOOL)arg3;
- (void)onHeightChanged:(id)arg1 reuseKey:(id)arg2 currentHeight:(double)arg3 screenHeight:(double)arg4;
- (void)onHalfScreenResume:(id)arg1 reuseKey:(id)arg2;
- (void)onHalfScreenPause:(id)arg1 reuseKey:(id)arg2;
- (void)onEnterFullScreen:(id)arg1 reuseKey:(id)arg2;
- (void)onEnterHalfScreen:(id)arg1 reuseKey:(id)arg2;
- (void)onTTSReadEnabledChanged:(id)arg1 reuseKey:(id)arg2 enabled:(BOOL)arg3;
@end
