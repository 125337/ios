@interface WCPayGPpfLaunchControlLogic : WCPayControlLogic <WCPayGppfQueryInfoCgiDelegate, WCPayGPLaunchControlLogicDelegate>
{
    BOOL _bIsLaunchSucc; // +0x38
    id <WCPayGppfLaunchControlLogicDelegate> _launchDelegate; // +0x40
    NSString * _appId; // +0x48
    NSString * _pfOrderNo; // +0x50
    unsigned long long _pfFromScene; // +0x58
    CContact * _launchContact; // +0x60
    WCPayGppfQueryInfoCgi * _queryPfInfoCgi; // +0x68
}
- (id)initWith3rdAppId:(id)arg1 pfOrderNo:(id)arg2 pfFromScene:(unsigned long long)arg3;
- (void)setPfLaunchLogicDelegate:(id)arg1;
- (void)dealloc;
- (void)stopLogic;
- (void)startLogic;
- (void)sendQueryPfInfoRequest;
- (void)onGetpfQueryInfoCgiResp:(id)arg1;
- (void)saveAndRefreshSvrConfigData;
- (void)onLaunchGroupPaySuccWithContact:(id)arg1;
- (void)onLaunchControlLogicStop;
- (id)launchDelegate;
- (void)setLaunchDelegate:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)pfOrderNo;
- (void)setPfOrderNo:(id)arg1;
- (unsigned long long)pfFromScene;
- (void)setPfFromScene:(unsigned long long)arg1;
- (BOOL)bIsLaunchSucc;
- (void)setBIsLaunchSucc:(BOOL)arg1;
- (id)launchContact;
- (void)setLaunchContact:(id)arg1;
- (id)queryPfInfoCgi;
- (void)setQueryPfInfoCgi:(id)arg1;
- (void).cxx_destruct;
@end

