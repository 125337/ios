@interface WCAdFinderDialogClickManager : NSObject
{
    BOOL _directToAppUserConfirm; // +0x8
    int _directToAppReportScene; // +0xc
    WCAdFinderDialogBaseInfo * _dialogInfo; // +0x10
    WCFinderJumpInfoParams * _jumpParams; // +0x18
    WCAdvertiseInfo * _advertiseInfo; // +0x20
}
- (id)initWithDialogInfo:(id)arg1 jumpParams:(id)arg2;
- (id)advertiseInfo;
- (void)commitDialogConfirmEvents;
- (void)doDirectToAppEventWithInfo:(id)arg1;
- (void)launchAppByDeeplink:(id)arg1;
- (void)handleLaunchAppResultWithAppInfo:(id)arg1 bIsCancel:(BOOL)arg2 bIsLaunchSuccess:(BOOL)arg3;
- (void)doDoubleLinkJumpEventWithInfo:(id)arg1 jumpParams:(id)arg2;
- (void)doJumpStoreEventWithInfo:(id)arg1;
- (void)doConversionShowUpReport;
- (int)deeplinkType;
- (void)reportConversionOnlineForLaunchApp:(int)arg1 deeplinkType:(int)arg2;
- (void)doDirectToAppDialogClickReport;
- (void)reportDirectToAppDialogClickWithReportScene:(int)arg1 isForShowDialog:(BOOL)arg2;
- (BOOL)isDialogTypeDirectToApp;
- (id)dialogInfo;
- (void)setDialogInfo:(id)arg1;
- (id)jumpParams;
- (void)setJumpParams:(id)arg1;
- (void)setAdvertiseInfo:(id)arg1;
- (BOOL)directToAppUserConfirm;
- (void)setDirectToAppUserConfirm:(BOOL)arg1;
- (int)directToAppReportScene;
- (void)setDirectToAppReportScene:(int)arg1;
- (void).cxx_destruct;
@end
