@interface WARedEnvelopesReceiveHomeView : MMUIView
{
    id <WCRedEnvelopesReceiveHomeViewDelegate> m_delegate; // +0x8
    UIImageView * m_backgroundView; // +0x10
    UIButton * openRedEnvelopesButton; // +0x18
    UIImageView * openAnimationImageView; // +0x20
    CGRect m_frame; // +0x28
    NSDictionary * m_dicBaseInfo; // +0x48
    BOOL m_bSuccessAnmation; // +0x50
    UIView * oRedView; // +0x58
    UIView * oTopHeaderView; // +0x60
    UIView * imageView; // +0x68
    UIButton * cancel2Button; // +0x70
    MMWebImageView * maskImageView; // +0x78
    ContactUpdateHelper * _m_nickNameHelper; // +0x80
    ContactUpdateHelper * _m_successOpenNickNameHelper; // +0x88
}
- (void)refreshViewWithData:(id)arg1;
- (BOOL)shouldShowBottomDescriptionWithType:(unsigned long long)arg1 envelopeStutus:(unsigned long long)arg2;
- (BOOL)shouldShowDetailButtonWithIsSender:(BOOL)arg1 Type:(unsigned long long)arg2 ReceiveStutus:(unsigned long long)arg3 envelopeStutus:(unsigned long long)arg4 data:(id)arg5;
- (id)initWithFrame:(CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
- (BOOL)accessibilityPerformEscape;
- (void)OnCancelButtonDone;
- (void)OnOpenList;
- (void)OnOpenRedEnvelopes;
- (void)startReceiveAnimation;
- (void)stopReceiveAnimation;
- (void)showAnimation;
- (void)endAnimation;
- (void)removeView;
- (void)showSuccessOpenAnimation;
- (id)convertToImage:(id)arg1;
- (id)m_nickNameHelper;
- (void)setM_nickNameHelper:(id)arg1;
- (id)m_successOpenNickNameHelper;
- (void)setM_successOpenNickNameHelper:(id)arg1;
- (void).cxx_destruct;
@end
