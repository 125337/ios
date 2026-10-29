@interface WebviewJSEventHandler_getStoreEmoticonImage : WebviewJSEventHandlerBase <IStoreEmotionSingleDownloadMgrExt>
{
    NSString * m_md5; // +0x8
    JSEvent * m_event; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)startDownloadEmoticonWithMd5:(id)arg1 encryptUrl:(id)arg2 aesKey:(id)arg3 productId:(id)arg4 designerId:(id)arg5;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)asyncHandle_callbackEvent:(id)arg1 result:(id)arg2;
- (void)asyncHandle_callbackFailEvent:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
@end

