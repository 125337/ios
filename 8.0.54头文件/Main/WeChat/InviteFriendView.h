@interface InviteFriendView : MMUIView <IMMQRCodeExt>
{
    UIImageView * m_imageQRView; // +0x8
    MMUIActivityIndicatorView * m_loadingView; // +0x10
    UITextView * m_textView; // +0x18
    id <InviteFriendViewDelegate> m_delegate; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 Title:(id)arg2 Msg:(id)arg3 Delegate:(id)arg4 showQRImage:(BOOL)arg5;
- (id)initWithFrame:(CGRect)arg1 Title:(id)arg2 Msg:(id)arg3 Delegate:(id)arg4;
- (void)onLeft;
- (void)onRight;
- (void)onDownloadQRCodeFinish:(id)arg1 FooterWording:(id)arg2;
- (void).cxx_destruct;
@end

