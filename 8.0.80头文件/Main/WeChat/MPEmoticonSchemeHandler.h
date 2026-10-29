@interface MPEmoticonSchemeHandler : NSObject <IStoreEmotionSingleDownloadMgrExt, WKURLSchemeHandler>
{
    id /* block */ _checkSchemePermission; // +0x8
    NSMutableArray * _tasks; // +0x10
    NSMutableSet * _observingMD5s; // +0x18
}
- (id)scheme;
- (id)init;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (id)create404ResponseForURL:(id)arg1;
- (void)stopTask:(id)arg1 withError:(id)arg2;
- (void)finishTask:(id)arg1 withData:(id)arg2;
- (void)startDownloadEmoji:(id)arg1 emojiInfoObj:(id)arg2;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (id /* block */)checkSchemePermission;
- (void)setCheckSchemePermission:(id /* block */)arg1;
- (id)tasks;
- (void)setTasks:(id)arg1;
- (id)observingMD5s;
- (void)setObservingMD5s:(id)arg1;
- (void).cxx_destruct;
@end
