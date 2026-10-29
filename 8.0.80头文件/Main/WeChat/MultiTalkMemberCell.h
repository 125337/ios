@interface MultiTalkMemberCell : UIView <MultiTalkMemberExt, MultiTalkMemberWaittingExt>
{
    BOOL _muteIconHidden; // +0x8
    BOOL _busyLabelHidden; // +0x9
    BOOL _isInMinimizeMode; // +0xa
    BOOL _isAudioInterruption; // +0xb
    BOOL _beforeTalkingPending; // +0xc
    BOOL _highlighted; // +0xd
    BOOL _renderDisplayed; // +0xe
    BOOL _screenSharingTipsEnable; // +0xf
    BOOL _isTalking; // +0x10
    BOOL _isSelected; // +0x11
    BOOL _isChanging; // +0x12
    unsigned int _talkingQuality; // +0x14
    id <MultiTalkMemberCellDelegate> _cellDelegate; // +0x18
    WCVideoRender * _render; // +0x20
    CContact * _contact; // +0x28
    UIView * _backgroundMaskView; // +0x30
    UIColor * _maskColor; // +0x38
    MultiTalkHDHeadView * _headImageView; // +0x40
    UIImageView * _talkingImageView; // +0x48
    VoIPPendingDotsView * _waittingDotsView; // +0x50
    unsigned long long _waittingImageListIndex; // +0x58
    UIView * _pendingOverlayView; // +0x60
    VoIPPendingDotsView * _pendingDotsView; // +0x68
    UIImageView * _netQualityImageView; // +0x70
    UILabel * _busyLabel; // +0x78
    MultiTalkMuteIconView * _muteIconView; // +0x80
    MultiTalkSharingScreenTipsView * _screenSharingTipsView; // +0x88
    UIView * _renderView; // +0x90
    UIView * _clickView; // +0x98
    MMUIButton * _memberNameButton; // +0xa0
    UIView * _nameRowContainer; // +0xa8
    MMUILabel * _callerMemberNameLabel; // +0xb0
    ColorGradientView * _blurView; // +0xb8
    NSObject<MultiTalkMemberProtocol> * _member; // +0xc0
}
- (void)layoutBackgroundMaskView;
- (void)layoutHeadImageView;
- (void)layoutWaittingImageView;
- (void)layoutPendingOverlayView;
- (void)layoutTalkingImageView;
- (void)layoutNetQualityImageView;
- (void)layoutBusyLabel;
- (void)layoutMultiTalkMuteIconView;
- (void)layoutScreenSharingTipsView;
- (void)layoutRenderView;
- (void)layoutClickView;
- (void)bringClickViewFront;
- (void)layoutUserNameContainer;
- (void)applyNameRowFlex;
- (void)onMemberNameButtonTapped:(id)arg1;
- (void)updateHighlighted:(BOOL)arg1;
- (void)setBeforeTalkingPending:(BOOL)arg1;
- (BOOL)getRenderDisplayed;
- (void)updateRenderDisplayed:(BOOL)arg1;
- (void)updateScreenSharingTipsEnable:(BOOL)arg1;
- (void)updateRender:(id)arg1;
- (void)updateContact:(id)arg1 member:(id)arg2 isSelected:(BOOL)arg3;
- (void)updateMaskColorWithIndex:(unsigned long long)arg1 membersCount:(unsigned long long)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)onTapWithSender:(id)arg1;
- (void)onMultiTalkMemberTalking;
- (void)onMultiTalkMemberSilent;
- (void)onMultiTalkMemberQualityChange:(unsigned int)arg1;
- (void)onMultiTalkMemberWaittingTimerCheckWithIndex:(unsigned long long)arg1;
- (BOOL)muteIconHidden;
- (void)setMuteIconHidden:(BOOL)arg1;
- (BOOL)busyLabelHidden;
- (void)setBusyLabelHidden:(BOOL)arg1;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)render;
- (void)setRender:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)isInMinimizeMode;
- (void)setIsInMinimizeMode:(BOOL)arg1;
- (BOOL)isAudioInterruption;
- (void)setIsAudioInterruption:(BOOL)arg1;
- (id)backgroundMaskView;
- (void)setBackgroundMaskView:(id)arg1;
- (id)maskColor;
- (void)setMaskColor:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)talkingImageView;
- (void)setTalkingImageView:(id)arg1;
- (id)waittingDotsView;
- (void)setWaittingDotsView:(id)arg1;
- (unsigned long long)waittingImageListIndex;
- (void)setWaittingImageListIndex:(unsigned long long)arg1;
- (id)pendingOverlayView;
- (void)setPendingOverlayView:(id)arg1;
- (id)pendingDotsView;
- (void)setPendingDotsView:(id)arg1;
- (BOOL)beforeTalkingPending;
- (id)netQualityImageView;
- (void)setNetQualityImageView:(id)arg1;
- (id)busyLabel;
- (void)setBusyLabel:(id)arg1;
- (id)muteIconView;
- (void)setMuteIconView:(id)arg1;
- (id)screenSharingTipsView;
- (void)setScreenSharingTipsView:(id)arg1;
- (id)renderView;
- (void)setRenderView:(id)arg1;
- (BOOL)highlighted;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)renderDisplayed;
- (void)setRenderDisplayed:(BOOL)arg1;
- (BOOL)screenSharingTipsEnable;
- (void)setScreenSharingTipsEnable:(BOOL)arg1;
- (BOOL)isTalking;
- (void)setIsTalking:(BOOL)arg1;
- (unsigned int)talkingQuality;
- (void)setTalkingQuality:(unsigned int)arg1;
- (id)clickView;
- (void)setClickView:(id)arg1;
- (id)memberNameButton;
- (void)setMemberNameButton:(id)arg1;
- (id)nameRowContainer;
- (void)setNameRowContainer:(id)arg1;
- (id)callerMemberNameLabel;
- (void)setCallerMemberNameLabel:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)member;
- (void)setMember:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)isChanging;
- (void)setIsChanging:(BOOL)arg1;
- (void).cxx_destruct;
@end
