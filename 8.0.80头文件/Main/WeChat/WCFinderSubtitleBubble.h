@interface WCFinderSubtitleBubble : WCFinderJumpInfoView <WCActionSheetDelegate>
{
    BOOL _isClickEpisodeBtn; // +0x8
    unsigned long long _bubbleStyle; // +0x10
    double _maxTextAreaWidth; // +0x18
    double _maxWidth; // +0x20
    MMWebImageView * _iconView; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _subtitleLabel_1; // +0x38
    UILabel * _subtitleLabel_2; // +0x40
    MMUIButton * _episodeBtn; // +0x48
    unsigned long long _operatingType; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)dealloc;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)updateStyleAnimated:(BOOL)arg1;
- (void)updateEpisodeBtnAlpha;
- (void)updateLayoutView;
- (void)onClickAction;
- (void)collectionEpisodeBtnClicked;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (unsigned long long)getCurPhase;
- (id)getClickedControlStr;
- (unsigned long long)bubbleStyle;
- (void)setBubbleStyle:(unsigned long long)arg1;
- (double)maxTextAreaWidth;
- (void)setMaxTextAreaWidth:(double)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel_1;
- (void)setSubtitleLabel_1:(id)arg1;
- (id)subtitleLabel_2;
- (void)setSubtitleLabel_2:(id)arg1;
- (id)episodeBtn;
- (void)setEpisodeBtn:(id)arg1;
- (BOOL)isClickEpisodeBtn;
- (void)setIsClickEpisodeBtn:(BOOL)arg1;
- (unsigned long long)operatingType;
- (void)setOperatingType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
