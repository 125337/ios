@interface EmoticonDownloadTask : NSObject <EmoticonDownloadProxyDelegate>
{
    BOOL _needThumb; // +0x8
    BOOL _needCallbackLocal; // +0x9
    BOOL _isRunning; // +0xa
    BOOL _hasNotifyThumbFininshed; // +0xb
    EmojiInfoObj * _emojiInfo; // +0x10
    id <EmoticonDownloadTaskDelegate> _downloadDelegate; // +0x18
    EmoticonHybridDownloadProxy * _downloadCgi; // +0x20
    id <EmoticonDownloadTaskInnerDelegate> _downloadInnerDelegate; // +0x28
    EmoticonThumbUrlInfo * _thumbInfo; // +0x30
    EmoticonThumbImageCdnTask * _thumbDowbloadTask; // +0x38
}
- (id)init;
- (id)md5;
- (BOOL)isSupportWxam;
- (void)initDownload;
- (void)startDownload;
- (void)downloadThumb:(id)arg1 toPath:(id)arg2 aesKey:(id)arg3;
- (void)onThumbDownloadFinished:(id)arg1;
- (void)onEmoticonDownloadMd5Ok:(id)arg1 AndFilePath:(id)arg2 withUserInfo:(id)arg3;
- (void)onEmoticonDownloadMd5Failed:(id)arg1 withUserInfo:(id)arg2;
- (void)onEmoticonDownloadingMd5:(id)arg1 withUserInfo:(id)arg2 partLen:(unsigned long long)arg3 totalLen:(unsigned long long)arg4;
- (BOOL)needThumb;
- (void)setNeedThumb:(BOOL)arg1;
- (id)emojiInfo;
- (void)setEmojiInfo:(id)arg1;
- (id)downloadDelegate;
- (void)setDownloadDelegate:(id)arg1;
- (BOOL)needCallbackLocal;
- (void)setNeedCallbackLocal:(BOOL)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (BOOL)hasNotifyThumbFininshed;
- (void)setHasNotifyThumbFininshed:(BOOL)arg1;
- (id)downloadCgi;
- (void)setDownloadCgi:(id)arg1;
- (id)downloadInnerDelegate;
- (void)setDownloadInnerDelegate:(id)arg1;
- (id)thumbInfo;
- (void)setThumbInfo:(id)arg1;
- (id)thumbDowbloadTask;
- (void)setThumbDowbloadTask:(id)arg1;
- (void).cxx_destruct;
@end
