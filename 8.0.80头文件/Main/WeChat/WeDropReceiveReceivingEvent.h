@interface WeDropReceiveReceivingEvent : WeDropReceiveEvent <INearConnectionServiceExt>
{
    WeDropBaseServerHandler * _server; // +0x8
    NSMutableData * _dataBuffer; // +0x10
    NSString * _tempPath; // +0x18
    unsigned long long _bufOffset; // +0x20
    unsigned long long _receivingFileIndex; // +0x28
    unsigned long long _receivingFileContentIndex; // +0x30
    NSMutableArray * _receivingFileContentPaths; // +0x38
    WeDropSendingFileMetadata * _metadata; // +0x40
    unsigned long long _totalReceived; // +0x48
}
- (BOOL)canEnterFrom:(id)arg1;
- (void)onEnter;
- (void)onInterrupt;
- (void)onEnterBackground;
- (void)checkNextReceive;
- (void)onReceivedFileChunk:(id)arg1;
- (void)prepareForNewFile;
- (void)prepareForNewFileContent;
- (void)receiveMetadata;
- (void)receiveFileChunk;
- (void)handleFileReceived:(id)arg1 contentInfo:(id)arg2;
- (void)saveImageToAlbum:(id)arg1 forContentInfo:(id)arg2;
- (void)saveLivePhotoImageToAlbum:(id)arg1 videoPath:(id)arg2 forContentInfo:(id)arg3;
- (void)realSaveLivePhotoToAlbumNoCheck:(id)arg1 videoPath:(id)arg2 forContentInfo:(id)arg3 callback:(id /* block */)arg4;
- (void)realSaveLivePhotoToAlbumCheck:(id)arg1 videoPath:(id)arg2 forContentInfo:(id)arg3 callback:(id /* block */)arg4;
- (void)saveSingleImageToAlbum:(id)arg1 forContentInfo:(id)arg2;
- (void)saveVideoToAlbum:(id)arg1 forContentInfo:(id)arg2;
- (void)saveFileToStorage:(id)arg1 forContentInfo:(id)arg2;
- (void)onNearConnectionDisconnected:(int)arg1 errMsg:(id)arg2;
- (id)server;
- (void)setServer:(id)arg1;
- (id)dataBuffer;
- (void)setDataBuffer:(id)arg1;
- (id)tempPath;
- (void)setTempPath:(id)arg1;
- (unsigned long long)bufOffset;
- (void)setBufOffset:(unsigned long long)arg1;
- (unsigned long long)receivingFileIndex;
- (void)setReceivingFileIndex:(unsigned long long)arg1;
- (unsigned long long)receivingFileContentIndex;
- (void)setReceivingFileContentIndex:(unsigned long long)arg1;
- (id)receivingFileContentPaths;
- (void)setReceivingFileContentPaths:(id)arg1;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (unsigned long long)totalReceived;
- (void)setTotalReceived:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
