@interface MMWebViewConfig : NSObject
+ (BOOL)isABTestAllowForceSyncA8Key;
+ (BOOL)isABTestUseNativeOauth;
+ (long long)abTestTriggerReportCount;
+ (BOOL)shouldCloseMinimize;
+ (BOOL)isEnableWebDebugFunctions;
+ (BOOL)isDisableWebViewIPadNewFontSolution;
+ (id)arrWebViewFontSizes;
+ (unsigned int)webviewMaxFontLevel;
+ (BOOL)shouldRecallWebviewBottomBarBugfix;
+ (BOOL)shouldDisableWebviewBottomBarWhenContentSizeChangedAdjustment;
+ (BOOL)shouldUseNewWebAttachmentDownloadInterface;
+ (BOOL)shouldUsePlaybackPauseWhenDelayRelease;
+ (BOOL)shouldTrickKBSnapshot;
+ (BOOL)shouldCheckMpFastLoadAlive;
+ (id)limitModeReplaceUrl;
@end
