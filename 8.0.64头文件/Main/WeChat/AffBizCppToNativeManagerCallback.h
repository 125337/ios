@interface AffBizCppToNativeManagerCallback : NSObject
{
    AffBizCppToNativeManagerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(AffBizCppToNativeManagerDispatcherBridgeObjcImpl *)arg1;
- (void)onMarkBrandListDBAsCompressBeginComplete:(int)arg1;
- (void)onMarkBrandListDBAsCompressFinishComplete:(int)arg1;
- (void)onGetResortContextComplete:(int)arg1 context:(id)arg2;
- (void)onOnBizDigestFinderLiveInfoChangedComplete:(int)arg1;
- (void)onCallOnDataChangeComplete:(int)arg1;
- (void)onCallOnInitDoneComplete:(int)arg1;
- (void)onCallOnIDKeyComplete:(int)arg1;
- (void)onCallOnKVComplete:(int)arg1;
- (void)onCallOnFirstScreenPreResortComplete:(int)arg1;
- (void)onCallOnFirstScreenResortStartComplete:(int)arg1;
- (void)onCallOnFirstScreenResortEndComplete:(int)arg1;
@end
