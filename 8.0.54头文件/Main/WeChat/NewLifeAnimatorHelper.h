@interface NewLifeAnimatorHelper : NSObject
{
    NSMapTable * _animatorMap; // +0x8
}
+ (id)shareData;
+ (id)DetailAnimatorForKey:(id)arg1;
+ (void)RebindDetailAnimationBehavior:(id)arg1;
+ (void)RemoveDetailAnimationBehaviorWithKey:(id)arg1;
- (id)init;
- (id)animatorMap;
- (void)setAnimatorMap:(id)arg1;
- (void).cxx_destruct;
@end

