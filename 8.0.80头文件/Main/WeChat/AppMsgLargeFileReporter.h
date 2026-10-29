@interface AppMsgLargeFileReporter : MMUserService <MMServiceProtocol>
{
    NSString * _currentSessionId; // +0x8
}
+ (id)reportItemWithFileName:(id)arg1 fileSize:(unsigned long long)arg2 fileExtension:(id)arg3 fileDuration:(double)arg4;
+ (id)reportItemWithMessageWrap:(id)arg1 fileDuration:(double)arg2;
+ (id)reportItemWithFavoritesItem:(id)arg1;
+ (void)markMessageWrap:(id)arg1 scene:(unsigned long long)arg2;
+ (void)markMessageWrap:(id)arg1 scene:(unsigned long long)arg2 fileDuration:(double)arg3;
+ (void)markMessageWrap:(id)arg1 scene:(unsigned long long)arg2 fileDuration:(double)arg3 sessionId:(id)arg4 saveType:(unsigned long long)arg5;
+ (unsigned long long)sceneForMessageWrap:(id)arg1;
+ (double)fileDurationForMessageWrap:(id)arg1;
+ (id)sessionIdForMessageWrap:(id)arg1;
+ (unsigned long long)saveTypeForMessageWrap:(id)arg1;
+ (id)reportParamsWithScene:(unsigned long long)arg1 saveType:(unsigned long long)arg2 items:(id)arg3 includeCount:(BOOL)arg4 includeMessageId:(BOOL)arg5 oversizeSessionId:(id)arg6;
+ (id)contentInfoListWithItems:(id)arg1 includeMessageId:(BOOL)arg2;
+ (unsigned long long)totalSizeWithFavoritesDataList:(id)arg1;
- (void)reportHalfScreenExposureWithScene:(unsigned long long)arg1 isSave:(BOOL)arg2 items:(id)arg3;
- (void)reportSendWithScene:(unsigned long long)arg1 isSave:(BOOL)arg2 items:(id)arg3;
- (void)reportSendSuccessWithScene:(unsigned long long)arg1 saveType:(unsigned long long)arg2 messageWrap:(id)arg3 fileDuration:(double)arg4 oversizeSessionId:(id)arg5;
- (void)reportOversizeAlertWithScene:(unsigned long long)arg1 items:(id)arg2;
- (void)clearCurrentSession;
- (id)currentOrCreateSessionId;
- (id)generateOversizeSessionId;
- (void)onServiceClearData;
- (id)currentSessionId;
- (void)setCurrentSessionId:(id)arg1;
- (void).cxx_destruct;
@end
