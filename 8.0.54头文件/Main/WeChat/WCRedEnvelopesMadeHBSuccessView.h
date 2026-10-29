@interface WCRedEnvelopesMadeHBSuccessView : MMUIView <IUiUtilExt>
{
    id <WCRedEnvelopesMadeHBSuccessViewDelegate> m_delegate; // +0x8
    UIImageView * m_backgroundView; // +0x10
    UIButton * openRedEnvelopesButton; // +0x18
    BOOL m_bEndAnmation; // +0x20
    UIView * oRedView; // +0x28
    UIView * oTopHeaderView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)initUIWithFrame:(CGRect)arg1;
- (void)OnCancelButtonDone;
- (void)OnSendHBDone;
- (void)startReceiveAnimation;
- (void)stopReceiveAnimation;
- (void)showAnimation;
- (void)endAnimation;
- (void)removeView;
- (void)onMainWindowFrameChanged;
- (void).cxx_destruct;
@end

