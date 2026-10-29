@interface MMMusicForwardHandler : MMObject <SendAppMsgHandleDelegate, WCCommitViewResultDelegate>
{
    id <MMMusicForwardHandlerDataSource> _dataSource; // +0x8
    id <MMMusicForwardHandlerDelegate> _delegate; // +0x10
    unsigned long long _pushedFromType; // +0x18
    unsigned long long _curShareSource; // +0x20
    SendAppMsgHandler * _sendAppMsgHandler; // +0x28
    MMMusicVideoImageDownloader * _imageDownLoader; // +0x30
}
- (void)shareToFriendsWithSource:(unsigned long long)arg1 musicInfo:(id)arg2 mvModel:(id)arg3;
- (void)shareToFriendsWithSource:(unsigned long long)arg1 musicInfo:(id)arg2 mvModel:(id)arg3 completion:(id /* block */)arg4;
- (void)doShareToFriendsWithImageData:(id)arg1 musicInfo:(id)arg2;
- (void)shareToWcWithSource:(unsigned long long)arg1 musicInfo:(id)arg2 mvModel:(id)arg3;
- (void)doShareToWCWithImageData:(id)arg1 musicInfo:(id)arg2;
- (void)OnSendAppMsgOKToContacts:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (id)imageDownLoader;
- (id)sendAppMsgHandler;
- (id)genLogMusicInfo:(id)arg1;
- (id)getCoverImageData:(id)arg1;
- (id)getCoverImageDataWithDefault:(id)arg1 musicInfo:(id)arg2;
- (id)getMessageWrap:(id)arg1 musicInfo:(id)arg2;
- (id)getUpLoadTask:(id)arg1 musicInfo:(id)arg2;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)pushedFromType;
- (void)setPushedFromType:(unsigned long long)arg1;
- (unsigned long long)curShareSource;
- (void)setCurShareSource:(unsigned long long)arg1;
- (void)setSendAppMsgHandler:(id)arg1;
- (void)setImageDownLoader:(id)arg1;
- (void).cxx_destruct;
@end

