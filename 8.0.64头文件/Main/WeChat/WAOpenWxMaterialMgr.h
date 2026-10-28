@interface WAOpenWxMaterialMgr : MMUserService <PBMessageObserverDelegate, MMResourceMgrExt, MMServiceProtocol>
{
    unsigned int _lastOpenType; // +0x8
    UIImage * _cornerImg; // +0x10
    WAWxMaterialStorage * _storage; // +0x18
}
+ (id)dirForDefaultWebResource;
+ (id)confPathForDefaultWebResource;
+ (id)dirForUpdatedWebResource;
+ (id)confPathForUpdatedWebResource;
+ (id)htmlPathForUpdatedWebResource;
+ (id)htmlTransPathForUpdatedWebResource;
+ (id)batchFileExtByArray:(id)arg1;
- (void)onServiceInit;
- (void)dealloc;
- (void)updateWebResource;
- (void)tryCopyWebResource;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (BOOL)forbidMaterialType:(unsigned int)arg1;
- (void)updateWeAppForMaterial:(id)arg1;
- (void)requestWeAppList:(id)arg1;
- (void)batchRequestWeAppList:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onBatchMaterialWeApp:(id)arg1;
- (void)onMaterialWeAppRsp:(id)arg1 req:(id)arg2;
- (id)getUnstatedWording;
- (id)getInfoForFileExt:(id)arg1;
- (id)getInfoForWebview;
- (id)getInfoForImageFilePath:(id)arg1;
- (id)getFileExtForImage:(id)arg1;
- (id)getInfoForVideo;
- (id)getFileExtForVideo;
- (id)getInfoForFile:(id)arg1;
- (id)getFileExtForFile:(id)arg1;
- (id)getInfoForMessageWrap:(id)arg1;
- (id)getFileExtForMessageWrap:(id)arg1;
- (id)GetFilePath:(id)arg1;
- (id)getFileExtForTextMessage;
- (id)getInfoForTextMessage;
- (id)getCornerImg;
- (id)genAppActionSheetItem:(id)arg1;
- (id)genAppListActionSheetItem:(id)arg1 scene:(unsigned int)arg2;
- (id)genAppListActionSheetItem:(id)arg1 scene:(unsigned int)arg2 openType:(unsigned int)arg3;
- (unsigned int)getReportMaterialSceneFromMsg:(id)arg1;
- (id)getWeAppIcon:(id)arg1;
- (id)safeStr:(id)arg1;
- (id)safeArr:(id)arg1;
- (id)getMatarialTypeName:(unsigned int)arg1;
- (BOOL)shouldShowThirdPartyServiceTips;
- (BOOL)shouldShowThirdPartyServiceTipsForScene:(unsigned long long)arg1;
- (void)showAllAppForMaterial:(id)arg1;
- (void)realShowAllAppForMaterial:(id)arg1;
- (void)oldShowAllAppForMaterial:(id)arg1;
- (void)openAppForMaterial:(id)arg1;
- (void)openAppForMaterials:(id)arg1 wxaCard:(id)arg2 chatUsername:(id)arg3 chatType:(unsigned long long)arg4 sheetScene:(unsigned long long)arg5;
- (void)updateMaterial:(id)arg1;
- (id)makeExtMimeDic;
- (id)getExtMimeDic;
- (id)getMimeByExt:(id)arg1;
- (id)getExtByMime:(id)arg1;
- (id)adjustRecommName:(id)arg1 appName:(id)arg2;
- (id)adjustOneLine:(id)arg1;
- (id)materialWeAppDic;
- (void)reportOpenMaterialItem:(id)arg1;
- (void)reportMaterialItemClicked:(id)arg1;
- (void)reportMaterialItemExposed:(id)arg1;
- (id)cornerImg;
- (void)setCornerImg:(id)arg1;
- (id)storage;
- (void)setStorage:(id)arg1;
- (unsigned int)lastOpenType;
- (void)setLastOpenType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
