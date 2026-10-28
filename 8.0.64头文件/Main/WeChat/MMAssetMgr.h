@interface MMAssetMgr : MMRootService <MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * m_queue; // +0x8
    CLLocation * m_lastLocation; // +0x10
    PHCachingImageManager * m_imageManagerForIOS8Plus; // +0x18
    EditImageLogicController * m_editImageLogicController; // +0x20
    EditVideoLogicController * m_editVideoLogicController; // +0x28
}
+ (void)reportPhotoUsageScene:(int)arg1 dimensionSize:(CGSize)arg2 createTimestamp:(id)arg3 isCreatedByWeChatCamera:(BOOL)arg4 metadata:(id)arg5;
+ (int)getAssetCameraDeviceForMetadata:(id)arg1;
+ (int)getAssetSourceForMetadata:(id)arg1 isCreatedByWeChatCamera:(BOOL)arg2;
+ (BOOL)isCreatedByAppleCameraForMetadata:(id)arg1;
+ (BOOL)isBackCameraForMetadata:(id)arg1;
+ (BOOL)isFrontCameraForMetadata:(id)arg1;
+ (BOOL)isScreenshotForMetadata:(id)arg1;
+ (id)getSimplestDimensionRatio:(CGSize)arg1;
+ (int)gcdOfNum1:(int)arg1 andNum2:(int)arg2;
+ (int)GetNetType;
- (id)init;
- (id)getImageManager;
- (void)onServiceInit;
- (id)getQueue;
- (void)dispatchAction:(id /* block */)arg1;
- (void)retrieveLocationForPicker;
- (BOOL)hasLocation;
- (double)latitude;
- (double)longitude;
- (id)m_lastLocation;
- (void)setM_lastLocation:(id)arg1;
- (id)m_imageManagerForIOS8Plus;
- (void)setM_imageManagerForIOS8Plus:(id)arg1;
- (id)m_editImageLogicController;
- (void)setM_editImageLogicController:(id)arg1;
- (id)m_editVideoLogicController;
- (void)setM_editVideoLogicController:(id)arg1;
- (void).cxx_destruct;
@end
