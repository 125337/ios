@interface StoreEmoticonLiteAppDownloadMgr : NSObject <StoreEmoticonLiteAppDownloadLogicDelegate>
{
    unsigned int _appUuid; // +0x8
    UIViewController<ILiteAppJsApiPluginControllerProtocol> * _hostController; // +0x10
    NSString * _appId; // +0x18
    NSMutableDictionary * _donwloadLogicDic; // +0x20
}
- (id)init;
- (void)registerStoreItem:(id)arg1 scene:(int)arg2;
- (void)doOperation:(long long)arg1 forPid:(id)arg2 downloadType:(int)arg3 reportInfo:(id)arg4;
- (void)onDownloadProgress:(float)arg1 pid:(id)arg2;
- (void)onDownloadStatusChangeTo:(int)arg1 pid:(id)arg2;
- (id)hostController;
- (void)setHostController:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)appUuid;
- (void)setAppUuid:(unsigned int)arg1;
- (id)donwloadLogicDic;
- (void)setDonwloadLogicDic:(id)arg1;
- (void).cxx_destruct;
@end
