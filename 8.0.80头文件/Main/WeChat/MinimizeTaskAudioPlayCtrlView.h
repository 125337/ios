@interface MinimizeTaskAudioPlayCtrlView : UIView <MinimizeTaskPlayCtrlCover>
{
    BOOL _isPlayCtrlBlurCover; // +0x8
    BOOL _isPlayCtrlPlaying; // +0x9
    id <MinimizeTaskPlayCtrlDelegate> _delegate; // +0x10
    long long _taskGroup; // +0x18
    UIView * _bgView; // +0x20
    MMWebImageView * _backgroundImageView; // +0x28
    MMWebImageView * _coverView; // +0x30
    UIView * _playCtrlArea; // +0x38
    MMUIButton * _playPauseButton; // +0x40
    MMUIButton * _closeButton; // +0x48
    MMUIButton * _outerContentButton; // +0x50
}
+ (id)defaultAudioCoverPlaceholder;
- (id)initWithGroupType:(long long)arg1 ctrlDelegate:(id)arg2;
- (CGSize)contentSize;
- (id)accessibilityBizPrefix;
- (id)buttonTintColor;
- (void)initSubviews;
- (void)initBgAndBorder;
- (void)initContentButton;
- (void)initCoverView;
- (void)initPlayCtrlArea;
- (void)initPlayOrPauseButton;
- (void)initCloseButton;
- (void)updatePlayCtrlStyle;
- (void)layoutSubviews;
- (void)setCoverImageUrl:(id)arg1;
- (void)setCoverImage:(id)arg1;
- (void)setCoverDefaultImage:(id)arg1;
- (void)setIsPlaying:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)setCloseButtonState:(unsigned int)arg1;
- (void)setPlayOrPauseButtonState:(unsigned int)arg1;
- (void)setFoldingState:(BOOL)arg1;
- (void)setUpButton:(id)arg1 withState:(unsigned int)arg2;
- (void)setCoverBlurCtrl:(BOOL)arg1;
- (void)onPlayPauseButtonClicked;
- (void)onCloseButtonClicked;
- (void)onOuterContentViewClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isPlayCtrlBlurCover;
- (void)setIsPlayCtrlBlurCover:(BOOL)arg1;
- (BOOL)isPlayCtrlPlaying;
- (void)setIsPlayCtrlPlaying:(BOOL)arg1;
- (long long)taskGroup;
- (void)setTaskGroup:(long long)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)playCtrlArea;
- (void)setPlayCtrlArea:(id)arg1;
- (id)playPauseButton;
- (void)setPlayPauseButton:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)outerContentButton;
- (void)setOuterContentButton:(id)arg1;
- (void).cxx_destruct;
@end
