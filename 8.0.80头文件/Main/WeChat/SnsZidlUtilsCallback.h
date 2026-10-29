@interface SnsZidlUtilsCallback : NSObject
{
    SnsZidlUtilsDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(SnsZidlUtilsDispatcherBridgeObjcImpl *)arg1;
- (void)onTransferVideoUtilComplete:(unsigned long long)arg1 target:(id)arg2;
- (void)onTransferVideoUtilWithParamComplete:(unsigned long long)arg1 target:(id)arg2;
- (void)onGetMainDirComplete:(unsigned long long)arg1 dirPath:(id)arg2;
- (void)onRequestNativeLocalPublishInfoListComplete:(unsigned long long)arg1 result:(id)arg2;
- (void)onRequestNativeLocalPublishInfoComplete:(unsigned long long)arg1 result:(id)arg2;
- (void)onRequestNativeLocalPublishDetailTipComplete:(unsigned long long)arg1 resultJson:(id)arg2;
- (void)onPerformNativeLocalPublishDetailTipActionComplete:(unsigned long long)arg1 resultJson:(id)arg2;
- (void)onDeleteNativeLocalPublishInfoComplete:(unsigned long long)arg1 result:(id)arg2;
- (void)onGetVideoInfoComplete:(unsigned long long)arg1 width:(int)arg2 height:(int)arg3 durationMs:(int)arg4;
@end
