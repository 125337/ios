@interface WCTimeLineAdLookbookCardBrandNewAnimationDisplayLink : NSObject
{
    id <WCTimeLineAdLookbookCardBrandNewAnimationDisplayLinkDelegate> _delegate; // +0x8
    CADisplayLink * _animationLink; // +0x10
    NSMutableArray * _animationObjects; // +0x18
    double _timestamp; // +0x20
    double _animationCurrentTime; // +0x28
}
- (id)init;
- (void)dealloc;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (id)animationObjects;
- (void)handleDisplayLinkEvent:(id)arg1;
- (void)getReady;
- (void)addAnimationObject:(id)arg1;
- (void)startAnimations;
- (void)stopAnimations;
- (void)resetAnimations;
- (void)terminateAnimations;
- (void)persistAnimations;
- (void)setMaskToView:(id)arg1 withSize:(CGSize)arg2 cornerRadius:(double)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)animationLink;
- (void)setAnimationLink:(id)arg1;
- (void)setAnimationObjects:(id)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (double)animationCurrentTime;
- (void)setAnimationCurrentTime:(double)arg1;
- (void).cxx_destruct;
@end

