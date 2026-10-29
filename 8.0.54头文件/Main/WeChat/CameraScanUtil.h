@interface CameraScanUtil : NSObject
+ (BOOL)isScanCodesUseSmallCropArea;
+ (BOOL)isScanCodesDirectOpenWhitelistLandingPage;
+ (unsigned long long)scanCodesCropAreaType;
+ (BOOL)isScanGoodsNotShowTab;
+ (BOOL)isScanGoodsNotUseNcnnLibrary;
+ (unsigned long long)scanGoodsNcnnCloseStrangy;
+ (BOOL)isCodeScannerQueueUpgradeQOSClass;
+ (double)scanFailShortTermCheckDurantion;
+ (double)scanFailLongTermCheckDurantion;
+ (unsigned long long)scanFailMaxAlertCount;
+ (BOOL)enbaleScanFailRebootAlert;
+ (BOOL)isScanGoodCombineEnable;
+ (BOOL)isOpenMultiCodeSwitch;
+ (id)arrLowPriorityCodePrefixs;
+ (BOOL)enableScanAutoSwitchCameraWhenFocusing;
+ (double)autoSwitchingCameraLensPosition;
@end

