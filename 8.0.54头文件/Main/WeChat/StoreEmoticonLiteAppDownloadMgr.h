@interface StoreEmoticonLiteAppDownloadMgr : NSObject <StoreEmoticonLiteAppDownloadLogicDelegate>
{
    MMLiteAppViewController * _currentVC; // +0x8
    NSMutableDictionary * _donwloadLogicDic; // +0x10
}
- (id)init;
- (void)registerStoreItem:(id)arg1 scene:(long long)arg2;
- (void)doOperation:(long long)arg1 forPid:(id)arg2 downloadType:(long long)arg3 reportInfo:(id)arg4;
- (void)onDownloadProgress:(float)arg1 pid:(id)arg2;
- (void)onDownloadStatusChangeTo:(long long)arg1 pid:(id)arg2;
- (id)currentVC;
- (void)setCurrentVC:(id)arg1;
- (id)donwloadLogicDic;
- (void)setDonwloadLogicDic:(id)arg1;
- (void).cxx_destruct;
@end

