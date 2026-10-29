@interface WCAddressLogicMgr : MMUserService <MMServiceProtocol, WCAddressNetworkDelegate, MMPackageDownloadMgrExt, MMResourceMgrExt>
{
    NSMutableArray * m_arrAddress; // +0x8
    NSMutableArray * m_arrAddressStageData; // +0x10
    unsigned int m_retainCount; // +0x18
    unsigned int currentVersion; // +0x1c
    WCAddressNetworkHelper * m_networkHelper; // +0x20
    unsigned int m_timeStamp; // +0x28
    int m_uiWCAddressGetAddressStategy; // +0x2c
    int m_uiWCAddressDownloadType; // +0x30
}
- (id)init;
- (id)GetRcptInfoNode:(id)arg1;
- (BOOL)GetAddressDataFromPath:(id)arg1 Error:(id *)arg2;
- (BOOL)GetFourStageAddressDataFromPath:(id)arg1 Error:(id *)arg2;
- (BOOL)safeArchiveAddress;
- (BOOL)isCachedAddress;
- (id)safeGetAddress;
- (void)removeArchiveAddress;
- (BOOL)isImportYiXunAddress;
- (void)setHadImportYiXunAddress;
- (void)importYiXunAdress;
- (void)onServiceInit;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)StartWCAddressService;
- (void)StopWCAddressService;
- (void)GetLatestAddress:(id)arg1;
- (void)AddAddress:(id)arg1;
- (void)DelAddress:(id)arg1;
- (void)ModifyAddress:(id)arg1;
- (void)AnalysicAddressInfo:(id)arg1;
- (void)GetAllAddress:(id)arg1;
- (id)GetRecentlyUsedAddress;
- (void)SetRecentlyUsedAddress:(id)arg1;
- (BOOL)GetServerRequestToAddressStageData:(id)arg1 andType:(unsigned long long)arg2;
- (BOOL)GetAllAddressStageData;
- (BOOL)getAllAddressFourStageData;
- (void)OnAddWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnRemoveWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)HandleGetAddressStategy:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (void)OnQueryWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnModifyWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnSelectWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnImportWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnAnalyseWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)onPackageListUpdated:(id)arg1;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void).cxx_destruct;
@end

