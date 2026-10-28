@interface WCAdCardMultiProductsDisplayLink : MMObject
{
    CADisplayLink * _animationLink; // +0x8
    NSMutableArray * _animationObjects; // +0x10
    double _timestamp; // +0x18
    double _animationCurrentTime; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (id)animationObjects;
- (void)handleDisplayLinkEvent:(id)arg1;
- (void)appendAnimationObjects:(id)arg1;
- (void)appendAnimationObject:(id)arg1;
- (void)saveCurrentCenterWith:(id)arg1;
- (void)restorePrevioisCenterWith:(id)arg1;
- (void)startAnimations;
- (void)stopAnimations;
- (void)resetAnimations;
- (void)terminateAnimations;
- (void)persistAnimations;
- (id)animationLink;
- (void)setAnimationLink:(id)arg1;
- (void)setAnimationObjects:(id)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (double)animationCurrentTime;
- (void)setAnimationCurrentTime:(double)arg1;
- (void).cxx_destruct;
@end
