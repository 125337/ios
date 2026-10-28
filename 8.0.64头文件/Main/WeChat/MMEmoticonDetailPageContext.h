@interface MMEmoticonDetailPageContext : MMEmoticonLiteAppPageContextBase
{
    BOOL _needScrollToBottom; // +0x8
    BOOL _fromDesigner; // +0x9
    BOOL _fastManagement; // +0xa
    BOOL _allowLimitedModeEnter; // +0xb
    int _precedingScene; // +0xc
    NSString * _pid; // +0x10
    EmoticonStoreItem * _storeItem; // +0x18
    NSString * _customBackText; // +0x20
    id /* block */ _finishInstallBlock; // +0x28
    id /* block */ _finishUninstallBlock; // +0x30
    WCDataItem * _timeLineDataItem; // +0x38
    EmoticonStoreReportInfo * _reportInfo; // +0x40
    UserOpInfo * _endOpInfo; // +0x48
    NSString * _sdkRequestID; // +0x50
    NSString * _bypassMsg; // +0x58
}
- (BOOL)isValid;
- (id)pageCreator;
- (id)sdkRequestID;
- (BOOL)allowsInEmoticonLimited;
- (id)pid;
- (void)setPid:(id)arg1;
- (id)storeItem;
- (void)setStoreItem:(id)arg1;
- (BOOL)needScrollToBottom;
- (void)setNeedScrollToBottom:(BOOL)arg1;
- (id)customBackText;
- (void)setCustomBackText:(id)arg1;
- (BOOL)fromDesigner;
- (void)setFromDesigner:(BOOL)arg1;
- (BOOL)fastManagement;
- (void)setFastManagement:(BOOL)arg1;
- (id /* block */)finishInstallBlock;
- (void)setFinishInstallBlock:(id /* block */)arg1;
- (id /* block */)finishUninstallBlock;
- (void)setFinishUninstallBlock:(id /* block */)arg1;
- (BOOL)allowLimitedModeEnter;
- (void)setAllowLimitedModeEnter:(BOOL)arg1;
- (id)timeLineDataItem;
- (void)setTimeLineDataItem:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (int)precedingScene;
- (void)setPrecedingScene:(int)arg1;
- (id)endOpInfo;
- (void)setEndOpInfo:(id)arg1;
- (void)setSdkRequestID:(id)arg1;
- (id)bypassMsg;
- (void)setBypassMsg:(id)arg1;
- (void).cxx_destruct;
@end
