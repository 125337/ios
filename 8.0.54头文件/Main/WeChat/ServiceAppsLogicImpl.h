@interface ServiceAppsLogicImpl : MMObject <WCPayLogicMgrExt, WCPayWalletChangeExt, PBMessageObserverDelegate>
{
    NSArray * _serviceAppsList; // +0x8
    NSMutableArray * _tempList; // +0x10
    BOOL _isUpdating; // +0x18
    BOOL _isGettingIcon; // +0x19
    NSMutableDictionary * _updateIconDic; // +0x20
    unsigned int _lastUpdateTime; // +0x28
    NSMutableArray * _validJumpUrlList; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)InitValidJumpUrl;
- (BOOL)NativeUrlIsValid:(id)arg1;
- (BOOL)IsServiceAppDataValid:(id)arg1;
- (id)getServiceAppsList:(id)arg1;
- (BOOL)updateServiceAppsList;
- (BOOL)updateServiceAppsListWithOffset:(unsigned int)arg1;
- (id)getAppInfoDataRootDir;
- (void)loadServiceAppsListFromFile;
- (void)saveServiceAppsList;
- (id)GetPathOfServiceAppIcon:(id)arg1 IconUrl:(id)arg2;
- (void)setServiceAppNotShowNew:(id)arg1;
- (void)checkAndUpdateAppIcon;
- (void)getAppIcon:(id)arg1 appID:(id)arg2;
- (BOOL)makeUrlRequest:(id)arg1 userData:(id)arg2;
- (void)addNewItemToUpdateIconDicAndStartUpdate;
- (void)handleUpdateServiceAppsListWithOffsetResp:(id)arg1;
- (void)handleNotShowNewLogic;
- (BOOL)handleGetAppIconRsp:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)loadData;
- (void)OnSetUserWallet:(id)arg1;
- (void)onWCPayWalletChange;
- (void).cxx_destruct;
@end

