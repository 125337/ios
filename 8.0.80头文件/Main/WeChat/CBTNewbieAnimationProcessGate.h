@interface CBTNewbieAnimationProcessGate : NSObject
{
    BOOL _hasTriggered; // +0x8
}
+ (id)sharedGate;
- (BOOL)hasTriggered;
- (void)setHasTriggered:(BOOL)arg1;
@end
