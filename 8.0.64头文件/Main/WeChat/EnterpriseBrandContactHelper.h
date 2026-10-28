@interface EnterpriseBrandContactHelper : MMObject <WCActionSheetDelegate, IEnterpriseBrandContactMgrExt, PBMessageObserverDelegate>
{
    NSString * _contextBrandUserName; // +0x8
    unsigned int _contextScene; // +0x10
    unsigned int _useScene; // +0x14
    id <EnterpriseBrandContactHelperDelegate> _delegate; // +0x18
}
- (id)init;
- (id)initWithScene:(unsigned int)arg1;
- (void)disableSubBrand:(id)arg1;
- (void)confirmDisableSubBrand:(id)arg1;
- (void)exposeWeWork:(id)arg1 scene:(unsigned int)arg2;
- (void)openWeWork:(id)arg1 withNavController:(id)arg2;
- (void)confirmWeWorkDownloadWithActionSheet;
- (void)confirmWeWorkDownloadWithAlert;
- (void)openWeWorkDownload;
- (void)openWeWorkApp;
- (void)reportWeWork:(unsigned int)arg1;
- (void)reportWeWorkBannerNew:(unsigned int)arg1;
- (void)reportImmediatelyType:(unsigned int)arg1 mainAttr:(id)arg2 operation:(unsigned int)arg3 scene:(unsigned int)arg4 flag:(unsigned long long)arg5;
- (void)handleReportImmediatelyType:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onEnterpriseBrandSyncToSvrCompleted:(id)arg1 extParams:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
