@interface WCFinderPostRouteMgr : MMUserService <MMServiceProtocol>
{
    int _fromScene; // +0x8
    int _sceneKey; // +0xc
    int _actionType; // +0x10
    NSString * _reportKey; // +0x18
    WCFinderDataItem * _fromDataItem; // +0x20
    NSString * _traceKey; // +0x28
    unsigned long long _phaseKey; // +0x30
    unsigned long long _enterScene; // +0x38
    unsigned long long _postSourceType; // +0x40
}
+ (unsigned long long)convertVideoSourceToType:(unsigned long long)arg1;
+ (BOOL)isExitCustomKey:(id)arg1;
- (void)updatePhaseKey:(unsigned long long)arg1 sceneKey:(int)arg2 actionType:(int)arg3 exit:(BOOL)arg4 enterScene:(unsigned long long)arg5 postSourceType:(unsigned long long)arg6;
- (void)triggerReport;
- (void)triggerCustomKey:(id)arg1 enterScene:(unsigned long long)arg2;
- (void)triggerCustomKey:(id)arg1 postSession:(id)arg2;
- (void)triggerCustomKey:(id)arg1 enterScene:(unsigned long long)arg2 videoDuration:(double)arg3 fileSize:(double)arg4;
- (void)triggerTraceKey:(id)arg1 customKey:(id)arg2 postSession:(id)arg3;
- (void)triggerCustomKey:(id)arg1 postSession:(id)arg2 cdnErrorCode:(long long)arg3;
- (void)triggerCustomKey:(id)arg1 failCode:(long long)arg2 failErr:(id)arg3 postSession:(id)arg4;
- (id)genTraceKeyByCustomKey:(id)arg1 postSession:(id)arg2;
- (void)beginReportByTraceKey:(id)arg1 customKey:(id)arg2 clientInfo:(id)arg3 cgiFailErrCode:(long long)arg4 cgiFailErrMsg:(id)arg5 postSession:(id)arg6;
- (void)beginReportByTraceKey:(id)arg1 customKey:(id)arg2 clientInfo:(id)arg3 cgiFailErrCode:(long long)arg4 cgiFailErrMsg:(id)arg5 enterScene:(unsigned long long)arg6 mediaType:(unsigned long long)arg7 videoPlayLength:(long long)arg8 videoFileSize:(long long)arg9 mediaCount:(long long)arg10 feedId:(id)arg11;
- (id)getPostExtReportSvrValue;
- (id)reportKey;
- (void)setReportKey:(id)arg1;
- (id)fromDataItem;
- (void)setFromDataItem:(id)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (id)traceKey;
- (void)setTraceKey:(id)arg1;
- (unsigned long long)phaseKey;
- (void)setPhaseKey:(unsigned long long)arg1;
- (int)sceneKey;
- (void)setSceneKey:(int)arg1;
- (int)actionType;
- (void)setActionType:(int)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (unsigned long long)postSourceType;
- (void)setPostSourceType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
