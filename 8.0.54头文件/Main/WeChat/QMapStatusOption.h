@interface QMapStatusOption : NSObject
{
    BOOL _animated; // +0x8
    BOOL _byGesture; // +0x9
    BOOL _triggerRegionChangeDistributor; // +0xa
    BOOL _triggerDecreaseTrackingMode; // +0xb
    double _duration; // +0x10
}
+ (id)mapStatusOptionWithAnimation:(BOOL)arg1 duration:(double)arg2 byGesture:(BOOL)arg3 triggerRegionChange:(BOOL)arg4 triggerDecreaseTrackingMode:(BOOL)arg5;
- (id)init;
- (BOOL)animated;
- (void)setAnimated:(BOOL)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (BOOL)byGesture;
- (void)setByGesture:(BOOL)arg1;
- (BOOL)triggerRegionChangeDistributor;
- (void)setTriggerRegionChangeDistributor:(BOOL)arg1;
- (BOOL)triggerDecreaseTrackingMode;
- (void)setTriggerDecreaseTrackingMode:(BOOL)arg1;
@end

