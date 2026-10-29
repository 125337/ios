@interface WeDropSendSendingFileEvent : WeDropSendEvent <INearConnectionServiceExt>
{
    WeDropBaseLocalCgi * _localCgi; // +0x8
    unsigned long long _sendingFileIndex; // +0x10
    unsigned long long _sendingFileContentIndex; // +0x18
    unsigned long long _sendingFileOffset; // +0x20
    unsigned long long _totalSentBytes; // +0x28
}
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onInterrupt;
- (void)onEnterBackground;
- (void)checkNextSend;
- (void)sendNextChunkedFile;
- (void)sendMetadata;
- (void)onAllFileSent;
- (void)onNearConnectionDisconnected:(int)arg1 errMsg:(id)arg2;
- (id)localCgi;
- (void)setLocalCgi:(id)arg1;
- (unsigned long long)sendingFileIndex;
- (void)setSendingFileIndex:(unsigned long long)arg1;
- (unsigned long long)sendingFileContentIndex;
- (void)setSendingFileContentIndex:(unsigned long long)arg1;
- (unsigned long long)sendingFileOffset;
- (void)setSendingFileOffset:(unsigned long long)arg1;
- (unsigned long long)totalSentBytes;
- (void)setTotalSentBytes:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
