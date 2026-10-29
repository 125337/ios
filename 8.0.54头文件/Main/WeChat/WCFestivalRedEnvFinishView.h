@interface WCFestivalRedEnvFinishView : MMUIView
{
    id <WCFestivalRedEnvFinishViewDelegate> m_delegate; // +0x8
    UIImageView * m_backgroundView; // +0x10
    UIButton * openRedEnvelopesButton; // +0x18
    UIImageView * openAnimationImageView; // +0x20
    CGRect m_frame; // +0x28
    NSDictionary * m_dicBaseInfo; // +0x48
    BOOL m_bSuccessAnmation; // +0x50
    UIView * oRedView; // +0x58
    UIView * oTopHeaderView; // +0x60
    UIImageView * imageView; // +0x68
    WCRedEnvelopesControlData * m_data; // +0x70
}
- (void)refreshViewWithData:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
- (void)OnCancelButtonDone;
- (void)OnCacnelButtonDoneLogic;
- (void)OnOpenList;
- (void)OnOpenRedEnvelopes;
- (void)startReceiveAnimation;
- (void)stopReceiveAnimation;
- (void)showAnimation;
- (void)endAnimation;
- (void)removeView;
- (void)showSuccessOpenAnimation;
- (void).cxx_destruct;
@end

