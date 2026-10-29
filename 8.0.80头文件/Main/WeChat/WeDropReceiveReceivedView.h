@interface WeDropReceiveReceivedView : WeDropBaseView <WeDropReceiveSuccessFooterDelegate>
{
    UIImage * _thumbnail; // +0x8
    NSMutableArray * _receivingFileInfo; // +0x10
}
- (id)initWithThumbnail:(id)arg1 receivingFileInfo:(id)arg2;
- (void)initSubviews;
- (void)onTapAtContentCover;
- (void)onConfirmTapped;
- (void)onJumpBtnTapped;
- (id)thumbnail;
- (void)setThumbnail:(id)arg1;
- (id)receivingFileInfo;
- (void)setReceivingFileInfo:(id)arg1;
- (void).cxx_destruct;
@end
