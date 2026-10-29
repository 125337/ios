@interface EmoticonRecoverEventCenterCallback : NSObject
{
    EmoticonRecoverEventCenterDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(EmoticonRecoverEventCenterDispatcherBridgeObjcImpl *)arg1;
- (void)onOnEmoticonRecoverLogicFinishedComplete:(unsigned long long)arg1;
- (void)onOnEmoticonRecoverLogicFailedComplete:(unsigned long long)arg1;
- (void)onOnEmoticonRecoverLogicDownloadedSingleEmoticonComplete:(unsigned long long)arg1;
- (void)onOnEmoticonRecoverLogicFinishedPartSyncComplete:(unsigned long long)arg1;
- (void)onOnEmoticonRecoverLogicNotifyDownloadProgressComplete:(unsigned long long)arg1;
@end
