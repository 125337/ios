@interface EmoticonHybridDownloadProxy : EmoticonDownloadProxy
{
    EmojiInfoObj * m_emojiInfoObj; // +0x8
    EmoticonDownloadProxy * m_downloadProxy; // +0x10
    BOOL _isRequestingEmojiInfo; // +0x18
    int _concurrentCount; // +0x1c
}
+ (BOOL)isDomainNeedUpdateForUrl:(id)arg1;
- (id)initWithMd5:(id)arg1;
- (id)initWithEmojiInfoObj:(id)arg1;
- (void)startRequest;
- (BOOL)isActive;
- (void)setDelegate:(id)arg1;
- (id)createCdnDownloadConnectionWithEmojiInfoObj:(id)arg1;
- (void)callFailedDelegate;
- (void)reportErrorWithReason:(int)arg1;
- (void)onBatchdownloadWithIsSuccessed:(BOOL)arg1 newEmojiInfo:(id)arg2 isOriCanDownload:(BOOL)arg3;
- (int)concurrentCount;
- (void)setConcurrentCount:(int)arg1;
- (BOOL)isRequestingEmojiInfo;
- (void)setIsRequestingEmojiInfo:(BOOL)arg1;
- (void).cxx_destruct;
@end
