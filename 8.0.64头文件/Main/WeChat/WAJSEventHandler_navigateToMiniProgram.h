@interface WAJSEventHandler_navigateToMiniProgram : WAJSEventHandler_BaseEvent
{
    WAAppIdToUsernameTransfer * _appID2UserNameTransfer; // +0x8
    BOOL _customShowShareBtnOnTemplateNav; // +0x10
    id /* block */ _customShareBtnActionBlock; // +0x18
    NSDictionary * _extraParamInfo; // +0x20
    NSMutableArray * _widgetParameters; // +0x28
}
- (void)handleJSEvent:(id)arg1;
- (void)navigateToMiniProgramWithParam:(id)arg1 appID:(id)arg2 userName:(id)arg3 navigationController:(id)arg4;
- (BOOL)checkNeedUseCustomParams;
- (BOOL)customShowShareBtnOnTemplateNav;
- (void)setCustomShowShareBtnOnTemplateNav:(BOOL)arg1;
- (id /* block */)customShareBtnActionBlock;
- (void)setCustomShareBtnActionBlock:(id /* block */)arg1;
- (id)extraParamInfo;
- (void)setExtraParamInfo:(id)arg1;
- (id)widgetParameters;
- (void)setWidgetParameters:(id)arg1;
- (void).cxx_destruct;
@end
