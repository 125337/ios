@interface ChatBotBrandVoiceInputButton : UIView
{
    double lastVolume; // +0x8
    BOOL _isActive; // +0x10
    id <ChatBotBrandVoiceInputButtonDelegate> _delegate; // +0x18
    UIImageView * _voiceView; // +0x20
    UIView * _voiceBgView; // +0x28
    MMUILabel * _recordingPromptLabel; // +0x30
}
- (void)layoutSubviews;
- (void)layoutContentViews;
- (void)layoutVioceButton;
- (void)layoutRecordingPromptLabel;
- (void)setActive:(BOOL)arg1;
- (void)handleLongPress:(id)arg1;
- (void)updateRippleSizeByVolumeDB:(double)arg1;
- (void)resizeViewWithoutChangingCenter:(id)arg1 newSize:(CGSize)arg2 duration:(double)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)voiceView;
- (void)setVoiceView:(id)arg1;
- (id)voiceBgView;
- (void)setVoiceBgView:(id)arg1;
- (id)recordingPromptLabel;
- (void)setRecordingPromptLabel:(id)arg1;
- (BOOL)isActive;
- (void)setIsActive:(BOOL)arg1;
- (void).cxx_destruct;
@end
