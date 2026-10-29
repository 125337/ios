@interface _TtC9WeAppCore22WAReportRouteEventItem : WAReportBaseItem
{
    long long eventType; // +0x8
    long long webviewId; // +0x10
    void * webviewUrl; // +0x18
}
- (long long)eventType;
- (void)setEventType:(long long)arg1;
- (long long)webviewId;
- (void)setWebviewId:(long long)arg1;
- (id)webviewUrl;
- (void)setWebviewUrl:(id)arg1;
- (int)reportID;
- (id)reportString;
- (id)init;
- (void).cxx_destruct;
@end
