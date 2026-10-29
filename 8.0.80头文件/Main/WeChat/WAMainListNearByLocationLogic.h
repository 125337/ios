@interface WAMainListNearByLocationLogic : MMObject <WALocationGetterDelegate>
{
    id <WAMainListNearByLocationLogicDelegate> _delegate; // +0x8
    WALocationGetter * _locationGetter; // +0x10
    MMTimer * _timer; // +0x18
}
- (id)init;
- (void)startGetLocation;
- (void)onGetLocationSuccess:(id)arg1;
- (void)onGetLocationFailedWithReason:(unsigned long long)arg1;
- (void)firstAccuracyInvalid:(id)arg1;
- (void)secondAccuracyInvalid:(id)arg1;
- (void)thirdAccuracyInvalid:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)locationGetter;
- (void)setLocationGetter:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
