@interface WCFinderSubtitleBubble : UIView <WCActionSheetDelegate, WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id <WCFinderSubtitleBubbleDelegate> _delegate; // +0x10
    unsigned long long _bubbleStyle; // +0x18
    FinderJumpInfo_Style * _style; // +0x20
    MMTimer * _timer; // +0x28
    double _maxTextAreaWidth; // +0x30
    double _maxWidth; // +0x38
    MMWebImageView * _iconView; // +0x40
    UILabel * _titleLabel; // +0x48
    UILabel * _subtitleLabel_1; // +0x50
    UILabel * _subtitleLabel_2; // +0x58
    MMUIButton * _episodeBtn; // +0x60
    unsigned long long _operatingType; // +0x68
    WCFinderJumpInfo * _jumpInfo; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)dealloc;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)updateStyleAnimated:(BOOL)arg1;
- (void)updateEpisodeBtnAlpha;
- (void)updateLayoutView;
- (void)notifyToShow;
- (void)onClickAction;
- (void)collectionEpisodeBtnClicked;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)onVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (void)showJumpInfoViewForCompletePlayIfNeeded;
- (void)startExposeAction;
- (void)endExposeAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)bubbleStyle;
- (void)setBubbleStyle:(unsigned long long)arg1;
- (int)showPosition;
- (void)setShowPosition:(int)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
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
- (unsigned long long)operatingType;
- (void)setOperatingType:(unsigned long long)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end

