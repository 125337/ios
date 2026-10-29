@interface SnsAdPlatformContextCallback : NSObject
{
    SnsAdPlatformContextDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(SnsAdPlatformContextDispatcherBridgeObjcImpl *)arg1;
- (void)onIsValidContactComplete:(unsigned long long)arg1 result:(BOOL)arg2;
- (void)onGetOAIDComplete:(unsigned long long)arg1 result:(id)arg2;
- (void)onGetCanvasAdH5LibVersionComplete:(unsigned long long)arg1 result:(id)arg2;
- (void)onGetNetkworkTypeComplete:(unsigned long long)arg1 result:(int)arg2;
- (void)onVibrateComplete:(unsigned long long)arg1 result:(BOOL)arg2;
- (void)onRequestHttpForReportComplete:(unsigned long long)arg1 result:(BOOL)arg2;
@end
