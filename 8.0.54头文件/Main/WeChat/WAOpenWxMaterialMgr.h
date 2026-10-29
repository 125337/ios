@interface WAOpenWxMaterialMgr : MMUserService <PBMessageObserverDelegate, MMResourceMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _materialWeAppDic; // +0x8
    UIImage * _cornerImg; // +0x10
}
+ (id)dirForDefaultWebResource;
+ (id)confPathForDefaultWebResource;
+ (id)dirForUpdatedWebResource;
+ (id)confPathForUpdatedWebResource;
+ (id)htmlPathForUpdatedWebResource;
+ (id)htmlTransPathForUpdatedWebResource;
- (id)init;
- (void)onServiceInit;
- (void)dealloc;
- (void)updateWebResource;
- (void)tryCopyWebResource;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (BOOL)forbidMaterialType:(unsigned int)arg1;
- (void)updateWeAppForMaterial:(id)arg1;
- (void)requestWeAppList:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onMaterialWeAppRsp:(id)arg1 req:(id)arg2;
- (id)getInfoForFileExt:(id)arg1;
- (id)getInfoForWebview;
- (id)getInfoForImageFilePath:(id)arg1;
- (id)getInfoForVideo;
- (id)getInfoForFile:(id)arg1;
- (id)getCornerImg;
- (id)genAppActionSheetItem:(id)arg1;
- (id)genAppListActionSheetItem:(id)arg1 scene:(unsigned int)arg2;
- (id)getWeAppIcon:(id)arg1;
- (id)safeStr:(id)arg1;
- (id)safeArr:(id)arg1;
- (id)getMatarialTypeName:(unsigned int)arg1;
- (void)showAllAppForMaterial:(id)arg1;
- (void)openAppForMaterial:(id)arg1;
- (id)makeExtMimeDic;
- (id)getExtMimeDic;
- (id)getMimeByExt:(id)arg1;
- (id)getExtByMime:(id)arg1;
- (id)adjustRecommName:(id)arg1 appName:(id)arg2;
- (id)adjustOneLine:(id)arg1;
- (void)reportOpenMaterialItem:(id)arg1;
- (void)reportOpenMaterialListItem:(id)arg1;
- (void)reportOpenMaterialOpenItem:(id)arg1;
- (id)materialWeAppDic;
- (void)setMaterialWeAppDic:(id)arg1;
- (id)cornerImg;
- (void)setCornerImg:(id)arg1;
- (void).cxx_destruct;
@end

