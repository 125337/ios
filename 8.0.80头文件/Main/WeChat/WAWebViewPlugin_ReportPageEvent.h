@interface WAWebViewPlugin_ReportPageEvent : WAWebViewPluginBase
{
    unsigned long long m_clickTimeStamp; // +0x8
    WAReportBaseItem * _baseItem; // +0x10
    NSString * _referpagepath; // +0x18
}
- (id)getReportBaseItemFromWebview:(unsigned long long)arg1;
- (void)reportWebviewMenuAction:(unsigned long long)arg1 actionResult:(unsigned long long)arg2 actionNote:(id)arg3 errCode:(int)arg4;
- (void)reportWAJSApiResult:(id)arg1 result:(id)arg2;
- (void)reportWAJSApiResult:(id)arg1 forEvent:(unsigned int)arg2;
- (void)reportRequstPaymentApiPreOKCallResult:(id)arg1 forEvent:(unsigned int)arg2;
- (void)reportWeAppForwardMessage:(id)arg1;
- (void)reportWAWebViewPageNotFound;
- (id)getAppID;
- (id)userName;
- (id)getCurrentUrl;
- (unsigned long long)appVersion;
- (unsigned int)getAppType;
- (unsigned long long)useState;
- (unsigned long long)appstate;
- (id)presentingPagePathForReport;
- (BOOL)reportPageEventFrom3rdProvideInfoWithKey:(id)arg1 andValue:(id)arg2;
- (BOOL)reportPublicJSInsideKVInfo:(unsigned int)arg1 andValue:(id)arg2 version:(unsigned int)arg3 ignoreFreqCheck:(BOOL)arg4;
- (void)reportWeAppGameRenderEvent:(unsigned int)arg1 eventType:(unsigned int)arg2 eventValue:(unsigned int)arg3 gameDuration:(long long)arg4;
- (void)reportHomeButtonEvent:(unsigned long long)arg1;
- (id)referpagepath;
- (void)setReferpagepath:(id)arg1;
- (void).cxx_destruct;
@end
