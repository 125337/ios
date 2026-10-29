@interface QMapCapacityConstraint : NSObject
{
    BOOL _allowRenderL4; // +0x8
}
+ (id)sharedCapacity;
- (void)setupAllowRenderL4;
- (void)setup;
- (id)init;
- (BOOL)allowRenderL4;
- (void)setAllowRenderL4:(BOOL)arg1;
@end

