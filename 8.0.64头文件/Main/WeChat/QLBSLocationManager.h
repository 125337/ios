@interface QLBSLocationManager : QLocationManager <TencentLBSLocationManagerDelegate>
{
    BOOL _toTriggerLocationCheck; // +0x8
    TencentLBSLocationManager * _manager; // +0x10
}
- (id)initWithKey:(id)arg1;
- (void)requestWhenInUseAuthorization;
- (void)tencentLBSLocationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)tencentLBSLocationManager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)tencentLBSLocationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)tencentLBSLocationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (BOOL)toTriggerLocationCheck;
- (void)setToTriggerLocationCheck:(BOOL)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (void).cxx_destruct;
@end
