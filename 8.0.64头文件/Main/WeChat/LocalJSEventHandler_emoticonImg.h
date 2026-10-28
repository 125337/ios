@interface LocalJSEventHandler_emoticonImg : LocalJSEventHandler_BaseEvent <IStoreEmotionSingleDownloadMgrExt>
{
    unsigned long long _operation; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)startDownloadWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (unsigned long long)operation;
- (void)setOperation:(unsigned long long)arg1;
@end
