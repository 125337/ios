@interface WCAtomicRedEnvReceiveHomeView : MMUIView
{
    id <WCAtomicRedEnvReceiveHomeViewDelegate> m_delegate; // +0x8
    UIImageView * m_oBackgroundView; // +0x10
    UIButton * m_oOpenRedEnvelopesButton; // +0x18
    UIImageView * m_oOpenAnimationImageView; // +0x20
    CGRect m_oFrame; // +0x28
    NSDictionary * m_dicBaseInfo; // +0x48
    BOOL m_bChecked; // +0x50
    UIButton * checkedButton; // +0x58
    BOOL m_bEndAnmation; // +0x60
    UIView * m_oRedView; // +0x68
    UIView * m_oTopHeaderView; // +0x70
    UIImageView * imageView; // +0x78
}
- (void)refreshViewWithData:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
- (void)OnCancelButtonDone;
- (void)OnOpenList;
- (void)OnOpenRedEnvelopes;
- (void)startReceiveAnimation;
- (void)stopReceiveAnimation;
- (void)showAnimation;
- (void)endAnimation;
- (void)removeView;
- (void)showSuccessOpenAnimation;
- (void)OnCheckChanged;
- (void).cxx_destruct;
@end

