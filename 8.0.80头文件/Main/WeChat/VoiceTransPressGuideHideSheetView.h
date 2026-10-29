@interface VoiceTransPressGuideHideSheetView : MMAutoLayoutSheetView
{
    UILabel * _guideTitleLabel; // +0x8
    VoiceTransPressGuideVideoView * _videoView; // +0x10
    UIButton * _confirmButton; // +0x18
}
- (id)init;
- (void)initConfigs;
- (void)initViews;
- (id)guideTitleLabel;
- (id)videoView;
- (id)confirmButton;
- (void)onConfirm;
- (void)setGuideTitleLabel:(id)arg1;
- (void)setVideoView:(id)arg1;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
