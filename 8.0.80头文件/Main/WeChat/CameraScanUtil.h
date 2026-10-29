@interface CameraScanUtil : NSObject
+ (BOOL)isScanCodesDirectOpenWhitelistLandingPage;
+ (BOOL)isScanGoodsNotShowTab;
+ (BOOL)isScanGoodsNotUseNcnnLibrary;
+ (unsigned long long)scanGoodsNcnnCloseStrangy;
+ (BOOL)isCodeScannerQueueUpgradeQOSClass;
+ (double)scanFailShortTermCheckDurantion;
+ (double)scanFailLongTermCheckDurantion;
+ (unsigned long long)scanFailMaxAlertCount;
+ (BOOL)enbaleScanFailRebootAlert;
+ (BOOL)isScanGoodCombineEnable;
+ (BOOL)isMainScene:(unsigned long long)arg1;
+ (BOOL)isOperateReporterEnable;
+ (BOOL)isOpenMultiCodeSwitch;
+ (BOOL)enableImageScanProviderIsolationProtection;
+ (id)arrWCPayHighPriorityCodePrefixs;
+ (id)arrLowPriorityCodePrefixs;
+ (BOOL)enableScanAutoSwitchCameraWhenFocusing;
+ (double)autoSwitchingCameraLensPosition;
+ (BOOL)enableQRCodeDetectionFilter;
+ (BOOL)enableEnergyTrack;
+ (BOOL)enableEnergyTrackInfoView;
+ (long long)dynamicFrameDurationControl;
+ (unsigned long long)scanPreFilterSampleScore;
+ (id)imageFromLockedCVImageBuffer:(__CVBuffer *)arg1;
+ (id)getStringFromUTF8Bytes:(const char *)arg1 LENGTH:(int)arg2;
+ (void)uploadImageInC2CWithFilePath:(id)arg1 andCompletion:(id /* block */)arg2;
@end
