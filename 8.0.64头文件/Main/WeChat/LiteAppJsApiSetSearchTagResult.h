@interface LiteAppJsApiSetSearchTagResult : LiteAppJsApi
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)onSetSearchTagResult:(id)arg1 chatUserName:(id)arg2;
- (void)onEmoticonDownloaded:(id)arg1 chatUserName:(id)arg2;
- (void)onSelectEmoticonFinished:(id)arg1 chatUserName:(id)arg2;
- (void)onSelectEmoticonFailed;
@end
