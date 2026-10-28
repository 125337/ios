@interface WCFinderCollectionFeedItemContentView : UIView <WCFinderFeedContentVMExt, UIContentView>
{
    WCFinderCollectionFeedItemConfiguration * _appliedConfiguration; // +0x8
    WCFinderFeedImageCDNView * _coverView; // +0x10
    UILabel * _episodeLabel; // +0x18
    RichTextView * _textView; // +0x20
    WCFinderLinearView * _descLineContainer; // +0x28
    UIImageView * _likeCountIconView; // +0x30
    UILabel * _likeCountLabel; // +0x38
    MMUIButton * _memberFlagButton; // +0x40
    UIView * _separatorView; // +0x48
    UILabel * _durationLabel; // +0x50
    UILabel * _watchProgressLabel; // +0x58
    UIView * _playingMaskView; // +0x60
    WCFinderGradientView * _coverGradient; // +0x68
    UILabel * _needPayTag; // +0x70
    double _layoutWidth; // +0x78
    UILabel * _watchedAtLastTimeLabel; // +0x80
}
- (id)initWithConfiguration:(id)arg1;
- (void)setupUI;
- (void)setupSubUIs;
- (void)layoutSubviews;
- (void)_applyConfiguration:(id)arg1;
- (void)updateDescLines;
- (void)updateLikeCountBtn;
- (void)updateLikeCountBtnIfNeed;
- (void)layoutUI;
- (BOOL)shouldShowNeedPayTag;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (id)configuration;
- (void)setConfiguration:(id)arg1;
- (id)contentVM;
- (id)config;
- (id)coverView;
- (id)separatorView;
- (id)playingMaskView;
- (id)episodeLabel;
- (id)textView;
- (id)needPayTag;
- (id)memberFlagButton;
- (id)likeCountLabel;
- (id)likeCountIconView;
- (id)coverGradient;
- (id)createWatchedAtLastTimeLabel;
- (id)appliedConfiguration;
- (void)setAppliedConfiguration:(id)arg1;
- (void)setCoverView:(id)arg1;
- (void)setEpisodeLabel:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)descLineContainer;
- (void)setDescLineContainer:(id)arg1;
- (void)setLikeCountIconView:(id)arg1;
- (void)setLikeCountLabel:(id)arg1;
- (void)setMemberFlagButton:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)watchProgressLabel;
- (void)setWatchProgressLabel:(id)arg1;
- (void)setPlayingMaskView:(id)arg1;
- (void)setCoverGradient:(id)arg1;
- (void)setNeedPayTag:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (id)watchedAtLastTimeLabel;
- (void)setWatchedAtLastTimeLabel:(id)arg1;
- (void).cxx_destruct;
@end
