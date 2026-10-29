@interface MultiTalkContactCell : UIView <MultiTalkMemberExt, MultiTalkMemberWaittingExt>
{
    BOOL m_hasShowTipsView; // +0x8
    BOOL m_showBigview; // +0x9
    BOOL m_needRefresh; // +0xa
    BOOL _m_renderDisplay; // +0xb
    BOOL _m_highlighted; // +0xc
    BOOL _m_highlightAnimating; // +0xd
    BOOL _m_hasHighlightAnimationTodo; // +0xe
    CContact * m_contact; // +0x10
    MultiTalkHDHeadView * m_headImageView; // +0x18
    WCVideoRender * m_render; // +0x20
    UIImageView * m_talkingImageView; // +0x28
    UIImageView * m_netQualityImageView; // +0x30
    id <MultiTalkContactCellDelegate> m_delegate; // +0x38
    UIView * m_videoTipsView; // +0x40
    MultiTalkSharingScreenTipsView * m_screenSharingTipsView; // +0x48
    UIView * _m_backgroundMaskView; // +0x50
    UIImageView * _m_waittingImageView; // +0x58
    NSMutableArray * _m_waittingImageList; // +0x60
    UILabel * _m_busyLabel; // +0x68
    MultiTalkMuteIconView * _m_muteIconView; // +0x70
    MMTimer * _m_videoTipsVideoTimer; // +0x78
    MMUILabel * _memberNameLabel; // +0x80
    MMUILabel * _callerMemberNameLabel; // +0x88
    ColorGradientView * _blurView; // +0x90
}
- (void)showBusyLabel;
- (void)hideBusyLabel;
- (void)showRenderView:(id)arg1;
- (void)hideRender;
- (void)showMuteIcon;
- (void)hideMuteIcon;
- (void)internalHighlightStautsUpdate;
- (void)statusHighlighted:(BOOL)arg1;
- (void)showScreenSharingTips;
- (void)hideScreenSharingTips;
- (void)updateRender:(id)arg1;
- (void)updateRenderDisplayStatus:(BOOL)arg1;
- (void)setFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateAccessibility;
- (void)onSingleTap;
- (void)initBackgroundMaskView;
- (void)initTalkingImageView;
- (void)initNetQualityImageView;
- (void)initBusyLabel;
- (void)initMuteIconView;
- (void)initHeadImageView;
- (void)initWaittingImageView;
- (void)initScreenSharingTipsView;
- (void)initUserNameLabel;
- (void)updateContact:(id)arg1 callerName:(id)arg2;
- (void)onMultiTalkMemberWaittingTimerCheckWithIndex:(unsigned long long)arg1;
- (void)onMultiTalkMemberTalking;
- (void)onMultiTalkMemberSilent;
- (void)onMultiTalkMemberQualityChange:(unsigned int)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_headImageView;
- (void)setM_headImageView:(id)arg1;
- (id)m_render;
- (void)setM_render:(id)arg1;
- (id)m_talkingImageView;
- (void)setM_talkingImageView:(id)arg1;
- (id)m_netQualityImageView;
- (void)setM_netQualityImageView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_hasShowTipsView;
- (void)setM_hasShowTipsView:(BOOL)arg1;
- (id)m_videoTipsView;
- (void)setM_videoTipsView:(id)arg1;
- (id)m_screenSharingTipsView;
- (void)setM_screenSharingTipsView:(id)arg1;
- (BOOL)m_showBigview;
- (void)setM_showBigview:(BOOL)arg1;
- (BOOL)m_needRefresh;
- (void)setM_needRefresh:(BOOL)arg1;
- (id)m_backgroundMaskView;
- (void)setM_backgroundMaskView:(id)arg1;
- (BOOL)m_renderDisplay;
- (void)setM_renderDisplay:(BOOL)arg1;
- (id)m_waittingImageView;
- (void)setM_waittingImageView:(id)arg1;
- (id)m_waittingImageList;
- (void)setM_waittingImageList:(id)arg1;
- (id)m_busyLabel;
- (void)setM_busyLabel:(id)arg1;
- (id)m_muteIconView;
- (void)setM_muteIconView:(id)arg1;
- (id)m_videoTipsVideoTimer;
- (void)setM_videoTipsVideoTimer:(id)arg1;
- (BOOL)m_highlighted;
- (void)setM_highlighted:(BOOL)arg1;
- (BOOL)m_highlightAnimating;
- (void)setM_highlightAnimating:(BOOL)arg1;
- (BOOL)m_hasHighlightAnimationTodo;
- (void)setM_hasHighlightAnimationTodo:(BOOL)arg1;
- (id)memberNameLabel;
- (void)setMemberNameLabel:(id)arg1;
- (id)callerMemberNameLabel;
- (void)setCallerMemberNameLabel:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (void).cxx_destruct;
@end

