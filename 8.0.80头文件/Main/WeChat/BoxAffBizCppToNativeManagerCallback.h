@interface BoxAffBizCppToNativeManagerCallback : NSObject
{
    BoxAffBizCppToNativeManagerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(BoxAffBizCppToNativeManagerDispatcherBridgeObjcImpl *)arg1;
- (void)onMarkBrandListDBAsCompressBeginComplete:(int)arg1;
- (void)onMarkBrandListDBAsCompressFinishComplete:(int)arg1;
- (void)onGetResortContextComplete:(int)arg1 context:(id)arg2;
- (void)onOnBizDigestFinderLiveInfoChangedComplete:(int)arg1;
- (void)onGetBizPoiInfoComplete:(int)arg1 userLocation:(id)arg2;
- (void)onGetFinderBoxLocationComplete:(int)arg1 location:(id)arg2;
- (void)onGetBizResortUserActiveReportInfoComplete:(int)arg1 reportInfo:(id)arg2;
- (void)onCallOnDataChangeComplete:(int)arg1;
- (void)onCallOnInitDoneComplete:(int)arg1;
- (void)onCallOnIDKeyComplete:(int)arg1;
- (void)onCallOnKVComplete:(int)arg1;
- (void)onCallOnFirstScreenPreResortComplete:(int)arg1;
- (void)onCallOnFirstScreenResortStartComplete:(int)arg1;
- (void)onCallOnFirstScreenResortEndComplete:(int)arg1;
- (void)onCallOnNotifyMsgChangeComplete:(int)arg1;
- (void)onCallOnFinderBoxConfigChangedComplete:(int)arg1;
- (void)onGetIsInNonTopFirst8Complete:(int)arg1 isInNonTopFirst8:(BOOL)arg2;
@end
