@interface WeDropSendWaitingRemoteDestinationView : WeDropBaseView <WeDropStopFooterDelegate>
{
    UIImage * _thumbnail; // +0x8
    NSMutableArray * _sendingFileInfo; // +0x10
}
- (id)initWithThumbnail:(id)arg1 sendingFileInfo:(id)arg2;
- (void)initSubviews;
- (void)onTapAtContentCover;
- (void)onStopTapped;
- (id)thumbnail;
- (void)setThumbnail:(id)arg1;
- (id)sendingFileInfo;
- (void)setSendingFileInfo:(id)arg1;
- (void).cxx_destruct;
@end
