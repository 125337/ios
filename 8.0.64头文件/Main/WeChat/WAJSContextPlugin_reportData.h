@interface WAJSContextPlugin_reportData : WAJSContextPluginBase
{
    id <IReportMiniProgramDelegate> _webDelegate; // +0x8
    id <IReportMiniProgramDelegate> _weappDelegate; // +0x10
}
- (void)reportMiniProgramPageData:(id)arg1 pageRoute:(id)arg2 isUserReport:(BOOL)arg3;
- (void)getMiniProgramReportId;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (id)webDelegate;
- (void)setWebDelegate:(id)arg1;
- (id)weappDelegate;
- (void)setWeappDelegate:(id)arg1;
- (void).cxx_destruct;
@end
