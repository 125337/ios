@interface MMFinderLiveMicTalkingOperationView : UIView
{
    BOOL _isPressingTalkButton; // +0x8
    id <MMFinderLiveMicTalkingOperationViewActionDelegate> _actionDelegate; // +0x10
    unsigned long long _talkState; // +0x18
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x20
    WCLiveBottomTextButton * _closeButton; // +0x28
    UIView * _pressTalkButtonBackgroundView; // +0x30
    MMUIButton * _pressTalkButton; // +0x38
    UIView * _recordContainerView; // +0x40
    UIImageView * _backgroundImageView; // +0x48
    VoiceRecordTextureButtonView * _voiceRecordView; // +0x50
    MMUIActivityIndicatorView * _talkLoadingView; // +0x58
    UIImageView * _talkingImageView; // +0x60
    UILabel * _talkTipLabel; // +0x68
    unsigned long long _lastUpdateVolumeTime; // +0x70
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2;
- (id)initWithTaskId:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutCloseButton;
- (void)layoutPressTalkButton;
- (void)layoutRecordViews;
- (void)onCloseButtonClicked;
- (void)onTalkButtonTouchDown;
- (void)onTalkButtonTouchUp;
- (void)updateTalkViewsAppearance;
- (void)setIsPressingTalkButton:(BOOL)arg1;
- (void)setTalkState:(unsigned long long)arg1;
- (void)cancelTalk;
- (void)updateTalkingVolume:(unsigned long long)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (unsigned long long)talkState;
- (BOOL)isPressingTalkButton;
- (id)finderLiveTaskId;
- (void)setFinderLiveTaskId:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)pressTalkButtonBackgroundView;
- (void)setPressTalkButtonBackgroundView:(id)arg1;
- (id)pressTalkButton;
- (void)setPressTalkButton:(id)arg1;
- (id)recordContainerView;
- (void)setRecordContainerView:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)voiceRecordView;
- (void)setVoiceRecordView:(id)arg1;
- (id)talkLoadingView;
- (void)setTalkLoadingView:(id)arg1;
- (id)talkingImageView;
- (void)setTalkingImageView:(id)arg1;
- (id)talkTipLabel;
- (void)setTalkTipLabel:(id)arg1;
- (unsigned long long)lastUpdateVolumeTime;
- (void)setLastUpdateVolumeTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
