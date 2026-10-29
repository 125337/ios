@interface WCFinderZoomAnimatorShareData : NSObject
{
    NSMapTable * _animatorMap; // +0x8
}
- (id)init;
- (BOOL)hasZoomAnimatorForKey:(id)arg1;
- (id)zoomAnimatorForKey:(id)arg1;
- (void)rebindAnimztorWithBehavior:(id)arg1 key:(id)arg2;
- (void)registerAnimator:(id)arg1;
- (void)cleanAnimator:(id)arg1;
- (id)animatorMap;
- (void)setAnimatorMap:(id)arg1;
- (void).cxx_destruct;
@end

