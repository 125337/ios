@interface LiteAppJsApiSetSearchTagResult : LiteAppJsApi
{
    WCTopicSearchActionLogic * _shareActionLogic; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)onSetSearchTagResult:(id)arg1 chatUserName:(id)arg2 scene:(long long)arg3 sessionId:(id)arg4;
- (void)onEmoticonDownloaded:(id)arg1 chatUserName:(id)arg2 scene:(long long)arg3 sessionId:(id)arg4;
- (void)onSelectEmoticonFinished:(id)arg1 chatUserName:(id)arg2 scene:(long long)arg3 sessionId:(id)arg4;
- (void)onSelectEmoticonFailed;
- (id)shareActionLogic;
- (void)setShareActionLogic:(id)arg1;
- (void).cxx_destruct;
@end
