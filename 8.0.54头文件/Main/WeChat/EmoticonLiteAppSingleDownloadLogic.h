@interface EmoticonLiteAppSingleDownloadLogic : NSObject <IStoreEmotionSingleDownloadMgrExt>
{
    BOOL _active; // +0x8
    id /* block */ _sucBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    EmojiInfoObj * _emojiInfo; // +0x20
}
- (id)initWithDownloadWrap:(id)arg1;
- (void)startDownload;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imagePath:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (id /* block */)sucBlock;
- (void)setSucBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)emojiInfo;
- (void)setEmojiInfo:(id)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (void).cxx_destruct;
@end

