@interface WCPayFaceHBFaceView : UIView <IWCPayFaceHBMgrExt, CAAnimationDelegate>
{
    MMHeadImageView * _headView; // +0x8
    MMUILabel * _nameView; // +0x10
    MMUILabel * _moneyView; // +0x18
    UIView * _hbView; // +0x20
    UIImageView * _hbBigView; // +0x28
    UIImageView * _hbSmallView; // +0x30
    UIView * _streamerView; // +0x38
    CAEmitterLayer * _streamerLayer; // +0x40
    UIView * _streamerBackView; // +0x48
    CAEmitterLayer * _streamerBackLayer; // +0x50
    UIView * _contentsView; // +0x58
    UIView * _maskView; // +0x60
    WCPayFaceRedEnvelopesReceiverInfo * m_info; // +0x68
    BOOL m_bAnimating; // +0x70
    unsigned long long m_t; // +0x78
    NSMutableArray * m_blockArr; // +0x80
    unsigned int lCount; // +0x88
    unsigned int vCount; // +0x8c
    CGRect m_contentFrame; // +0x90
    UIView * m_view; // +0xb0
    id <WCPayFaceHBFaceViewDelegate> m_delegate; // +0xb8
    AVAudioPlayer * m_sendOKPlayer; // +0xc0
    AVAudioPlayer * m_luckyPlayer; // +0xc8
    AVAudioPlayer * m_whistlePlayer; // +0xd0
    MMTimer * m_stimer; // +0xd8
    MMTimer * m_timer; // +0xe0
    CGSize m_bigSize; // +0xe8
    CGSize m_normalSize; // +0xf8
    BOOL _bAnimating; // +0x108
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (id)getHeadView;
- (id)getSmallHBView;
- (id)getMoneyString;
- (void)updateUser:(id)arg1;
- (id)getEmitterCell:(id)arg1 image:(id)arg2 isMore:(BOOL)arg3 isBack:(BOOL)arg4;
- (id)getStreamerLayer:(BOOL)arg1;
- (void)playWhistle;
- (void)stopStreamersAnimation;
- (void)startStreamersAnimation;
- (void)startFlyAnimation;
- (void)startAnimate:(CGRect)arg1;
- (void)startBandAnimate;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)updateFaceHB:(id)arg1;
- (BOOL)bAnimating;
- (void)setBAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end

