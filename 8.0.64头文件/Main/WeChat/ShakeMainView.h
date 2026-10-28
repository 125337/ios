@interface ShakeMainView : MMUIScrollView <FriendAsistSessionExt, ShakeMgrExt>
{
    UIView * m_hideView; // +0x8
    BOOL m_bAnimating; // +0x10
    MMSayHelloButton * m_btnSayHello; // +0x18
    ShakeMsgUnreadButton * m_btnUnreadMsg; // +0x20
    id <ShakeMainFrameDelegate> m_delegate; // +0x28
    double m_middleY; // +0x30
    UIImageView * _imageViewUp; // +0x38
    UIImageView * _imageViewDown; // +0x40
    UIView * _bkgViewUp; // +0x48
    UIView * _bkgViewDown; // +0x50
    UIImageView * _customImageView; // +0x58
    UIView * _curMaskView; // +0x60
    UIImageView * _defaultImageView; // +0x68
    CirclesView * _circlesView; // +0x70
    MMUILabel * _stateLabel; // +0x78
}
- (void)setM_Delegate:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)didChangeOrientation;
- (void)updateView;
- (void)updateViewForNormal;
- (void)updateViewForLoading;
- (void)setErrorMsg:(id)arg1;
- (id)customImageView;
- (id)curMaskView;
- (id)defaultImageView;
- (void)updateHideImage;
- (id)getHideImage;
- (id)tryGenHQImage:(id)arg1;
- (id)circlesView;
- (id)bkgViewUp;
- (id)bkgViewDown;
- (id)imageViewUp;
- (id)imageViewDown;
- (id)stateLabel;
- (id)getHideView;
- (id)getShakeSingleView;
- (void)stopAllAnimation;
- (void)startAnimationSplit;
- (void)onSplitAnimationEnd;
- (void)startAnimationMerge:(id /* block */)arg1;
- (void)startBackgroundAnimate;
- (void)stopBackgroundAnimate;
- (BOOL)bIsAnimating;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)initSayHelloBtn;
- (void)initUnreadMsgBtn;
- (void)OnOpenSayHello;
- (void)OnOpenUnreadMsgList;
- (void)updateSayHelloBtnState;
- (void)updateUnreadMsgBtnState;
- (void)onFriendAssistUnreadCountChanged;
- (void)onShakeMsgUnreadCountChanged;
- (void)setImageViewUp:(id)arg1;
- (void)setImageViewDown:(id)arg1;
- (void)setBkgViewUp:(id)arg1;
- (void)setBkgViewDown:(id)arg1;
- (void)setCustomImageView:(id)arg1;
- (void)setCurMaskView:(id)arg1;
- (void)setDefaultImageView:(id)arg1;
- (void)setCirclesView:(id)arg1;
- (void)setStateLabel:(id)arg1;
- (void).cxx_destruct;
@end
