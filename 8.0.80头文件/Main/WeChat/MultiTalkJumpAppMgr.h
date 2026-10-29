@interface MultiTalkJumpAppMgr : MMUserService <IExptServiceExt, MMServiceProtocol>
{
    int _type; // +0x8
    NSString * _schemePrefix; // +0x10
    NSString * _h5UrlPrefix; // +0x18
    NSString * _iconUrlString; // +0x20
    MultiTalkJumpAppWordingInfo * _zhCNWordingInfo; // +0x28
    MultiTalkJumpAppWordingInfo * _zhHKWordingInfo; // +0x30
    MultiTalkJumpAppWordingInfo * _enWordingInfo; // +0x38
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clearData;
- (void)checkAndUpdateData;
- (void)updateWordingInfoFromJsonString:(id)arg1;
- (id)getWordingInfo;
- (id)schemeUrlStringWithPositionType:(int)arg1;
- (id)htmlUrlStringWithPositionType:(int)arg1;
- (id)currentDefaultIconName;
- (id)currentWordingInfoFromExpt;
- (id)getCurrentAppInfo;
- (void)showJumpAppTipsWithInfo:(id)arg1 inViewController:(id)arg2;
- (void)jumpToAppFromBannerWithInfo:(id)arg1 inViewController:(id)arg2;
- (void)jumpToAppWithSchemeUrlString:(id)arg1 andHtmlUrlString:(id)arg2 inViewController:(id)arg3 type:(int)arg4 positionType:(int)arg5;
- (void)openHtmlUrl:(id)arg1 inViewController:(id)arg2;
- (void)reportBannerViewExposureWithType:(int)arg1;
- (void)reportBannerViewClickedWithType:(int)arg1;
- (void)reportShowJumpDialogWithType:(int)arg1;
- (void)reportCancelJumpDialogWithType:(int)arg1;
- (void)reportConfirmJumpDialogWithType:(int)arg1;
- (void)reportOpenHtmlWithType:(int)arg1 htmlUrlString:(id)arg2 andPositionType:(int)arg3;
- (void)reportJumpAppWithType:(int)arg1 andPositionType:(int)arg2;
- (void)onExptItemListChange;
- (int)type;
- (void)setType:(int)arg1;
- (id)schemePrefix;
- (void)setSchemePrefix:(id)arg1;
- (id)h5UrlPrefix;
- (void)setH5UrlPrefix:(id)arg1;
- (id)iconUrlString;
- (void)setIconUrlString:(id)arg1;
- (id)zhCNWordingInfo;
- (void)setZhCNWordingInfo:(id)arg1;
- (id)zhHKWordingInfo;
- (void)setZhHKWordingInfo:(id)arg1;
- (id)enWordingInfo;
- (void)setEnWordingInfo:(id)arg1;
- (void).cxx_destruct;
@end
