@interface WCRedEnvTextStateDetailViewController : MMUIViewController <CAAnimationDelegate, PAGViewListener>
{
    BOOL _hasPageFile; // +0x68
    BOOL _m_bIsSetWXStatusClick; // +0x69
    id <WCRedEnvTextStateDetailViewControllerDelegate> _delegate; // +0x70
    WCRedEnvTextStateInfo * _detailInfo; // +0x78
    KindaProxy * _kindProxy; // +0x80
    UIView * _m_coverView; // +0x88
    UIView * _m_containerView; // +0x90
    UIImageView * _m_pictureBGImgView; // +0x98
    PAGView * _m_pagView; // +0xa0
    MMUILabel * _m_greetingLabel; // +0xa8
    MMUILabel * _m_amountLabel; // +0xb0
    MMUILabel * _m_yuanLabel; // +0xb8
    UIView * _m_setWXStatusView; // +0xc0
    UIView * _m_exclusiveView; // +0xc8
    UIButton * _m_cancelButton; // +0xd0
}
- (id)initWithDetailInfo:(id)arg1 delegate:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupData;
- (void)setupView;
- (void)layoutReceiveView;
- (void)layoutContainerView;
- (id)m_coverView;
- (id)m_containerView;
- (id)m_cancelButton;
- (id)m_pictureBGImgView;
- (id)m_pagView;
- (id)m_greetingLabel;
- (id)m_amountLabel;
- (id)m_yuanLabel;
- (id)m_setWXStatusView;
- (id)m_exclusiveView;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (BOOL)isReceiver;
- (BOOL)hasSetWXStatusEntry;
- (BOOL)hasExclusiveView;
- (void)playPagView;
- (void)onCoverTap:(id)arg1;
- (void)onCloseClick:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)showReceiveView;
- (void)showAnimation;
- (void)onSetWxStatus;
- (void)dismiss;
- (void)setWxStatus;
- (int)get_hb_width_2022;
- (int)get_hb_height_2022;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)detailInfo;
- (void)setDetailInfo:(id)arg1;
- (id)kindProxy;
- (void)setKindProxy:(id)arg1;
- (BOOL)hasPageFile;
- (void)setHasPageFile:(BOOL)arg1;
- (BOOL)m_bIsSetWXStatusClick;
- (void)setM_bIsSetWXStatusClick:(BOOL)arg1;
- (void)setM_coverView:(id)arg1;
- (void)setM_containerView:(id)arg1;
- (void)setM_pictureBGImgView:(id)arg1;
- (void)setM_pagView:(id)arg1;
- (void)setM_greetingLabel:(id)arg1;
- (void)setM_amountLabel:(id)arg1;
- (void)setM_yuanLabel:(id)arg1;
- (void)setM_setWXStatusView:(id)arg1;
- (void)setM_exclusiveView:(id)arg1;
- (void)setM_cancelButton:(id)arg1;
- (void).cxx_destruct;
@end

