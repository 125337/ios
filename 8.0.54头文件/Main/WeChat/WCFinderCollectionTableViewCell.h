@interface WCFinderCollectionTableViewCell : UITableViewCell <WCFinderFeedContentVMExt>
{
    WCFinderFeedImageCDNView * _coverView; // +0x8
    UILabel * _episodeLabel; // +0x10
    RichTextView * _textView; // +0x18
    WCFinderLinearView * _descLineContainer; // +0x20
    MMUIButton * _likeCountBtn; // +0x28
    MMUIButton * _memberFlagButton; // +0x30
    UIView * _separatorView; // +0x38
    UILabel * _durationLabel; // +0x40
    UILabel * _watchProgressLabel; // +0x48
    UIView * _playingMaskView; // +0x50
    WCFinderGradientView * _coverGradient; // +0x58
    UILabel * _needPayTag; // +0x60
    WCFinderFeedContentVM * _contentVM; // +0x68
    double _layoutWidth; // +0x70
    WCFinderCollectionFeedCellConfig * _config; // +0x78
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)setupSubUIs;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithContentVM:(id)arg1 config:(id)arg2;
- (void)updateDescLines;
- (void)updateLikeCountBtn;
- (void)updateLikeCountBtnIfNeed;
- (void)layoutUI;
- (void)showHighlightAnimation;
- (BOOL)shouldShowNeedPayTag;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (id)coverView;
- (id)separatorView;
- (id)playingMaskView;
- (id)episodeLabel;
- (id)textView;
- (id)needPayTag;
- (id)memberFlagButton;
- (id)likeCountBtn;
- (id)coverGradient;
- (void)setCoverView:(id)arg1;
- (void)setEpisodeLabel:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)descLineContainer;
- (void)setDescLineContainer:(id)arg1;
- (void)setLikeCountBtn:(id)arg1;
- (void)setMemberFlagButton:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)watchProgressLabel;
- (void)setWatchProgressLabel:(id)arg1;
- (void)setPlayingMaskView:(id)arg1;
- (void)setCoverGradient:(id)arg1;
- (void)setNeedPayTag:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end

