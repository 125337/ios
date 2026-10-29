@interface EmoticonLiteAppStoreDownloadCallbackCallback : NSObject
{
    EmoticonLiteAppStoreDownloadCallbackDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(EmoticonLiteAppStoreDownloadCallbackDispatcherBridgeObjcImpl *)arg1;
- (void)onOnDownloadStatusChangedComplete:(unsigned long long)arg1;
- (void)onOnDownloadProgressComplete:(unsigned long long)arg1;
- (void)onOnNeedPurchaseComplete:(unsigned long long)arg1;
@end
