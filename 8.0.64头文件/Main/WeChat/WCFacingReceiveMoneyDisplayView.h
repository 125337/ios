@interface WCFacingReceiveMoneyDisplayView : MMUIView <CAAnimationDelegate>
{
    UIView * backgroundView; // +0x8
    id userInfo; // +0x10
    CGRect m_frame; // +0x18
    BOOL _bShowActionBar; // +0x38
    unsigned int _codeType; // +0x3c
    NSString * _accessTips; // +0x40
}
- (id)initWithUserName:(id)arg1 DisplayName:(id)arg2 TotalMoney:(id)arg3 Frame:(CGRect)arg4 codeType:(unsigned int)arg5 showActionBar:(BOOL)arg6;
- (id)initWithUserDisplayName:(id)arg1 TotalMoney:(id)arg2 HeadImgUrl:(id)arg3 Frame:(CGRect)arg4 codeType:(unsigned int)arg5 showActionBar:(BOOL)arg6;
- (double)setupBackgroundViewWithFrame:(CGRect)arg1;
- (void)setupDescContentWithDisplayName:(id)arg1 totalMoney:(id)arg2 startY:(double)arg3;
- (void)layoutSubviews;
- (void)showStartAnimation;
- (void)showEndAnimation:(CGPoint)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)closeView;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)accessTips;
- (void)setAccessTips:(id)arg1;
- (BOOL)bShowActionBar;
- (void)setBShowActionBar:(BOOL)arg1;
- (unsigned int)codeType;
- (void)setCodeType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
