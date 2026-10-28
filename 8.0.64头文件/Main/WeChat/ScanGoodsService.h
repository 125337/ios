@interface ScanGoodsService : WSTemplateBaseMgr <MMResourceMgrExt, MMServiceProtocol, PBMessageObserverDelegate>
{
    BOOL _isUploadingCameraImageInfo; // +0x8
}
+ (void)deleteScanGoodDevelopH5;
- (void)onServiceInit;
- (void)dealloc;
- (void)fetchScanConfigure;
- (void)fetchDynamicWording;
- (void)fetchPhashConfigure;
- (void)fetchScanCombineConfigure;
- (void)internalFetchScanConfWithType:(int)arg1;
- (BOOL)sendImageInfoWithNewCGI:(id)arg1;
- (BOOL)sendImageInfo:(id)arg1;
- (unsigned int)sendPressImageInfo:(id)arg1;
- (void)cancelSendPressImageInfo:(unsigned int)arg1;
- (void)onBeginUploadingCameraImageInfo;
- (void)onEndUploadingCameraImageInfo;
- (unsigned int)getSendImageInfoCgiTimeout;
- (void)setSendImageInfoCgiTimeout:(unsigned int)arg1;
- (void)mpTemplateRequest:(unsigned int)arg1 type:(unsigned int)arg2 content:(id)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleFetchScanConfigure:(id)arg1;
- (void)handleFetchDynamicWording:(id)arg1;
- (void)handleFetchPhashConfigure:(id)arg1;
- (void)hanldeScanCombineConfigure:(id)arg1;
- (void)handleUploadResponse:(id)arg1;
- (void)handleSendImageInfo:(id)arg1;
- (void)handleSendPressImageInfo:(id)arg1;
- (void)handleMpTemplateResponse:(id)arg1;
- (id)defaultTemplateZipPath;
- (id)templateResouceRootPath;
- (unsigned int)packageResouceType;
- (unsigned long long)localJSBizType;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (long long)getResultActionFromReturnType:(unsigned int)arg1;
- (BOOL)isUploadingCameraImageInfo;
- (void)setIsUploadingCameraImageInfo:(BOOL)arg1;
@end
