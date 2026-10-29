@interface WALiteAppStoreExtKeyCallLiteAppConnectEventAdapter : NSObject
{
    NSMutableDictionary * _adapterMap; // +0x8
}
+ (id)shareInstance;
- (void)registerDelegateForAppId:(id)arg1 context:(id)arg2;
- (void)unRegisterDelegateForAppId:(id)arg1;
- (id)adapterMap;
- (void)setAdapterMap:(id)arg1;
- (void).cxx_destruct;
@end
