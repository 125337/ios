@interface WCFinderHighEntropyInteractionView : UIView <WCFinderFeedContentVMExt>
{
    id <WCFinderHighEntropyInteractionViewDelegate> _delegate; // +0x8
    NSMutableArray * _actionButtons; // +0x10
    NSMutableArray * _iconImageViews; // +0x18
    NSMutableArray * _countLabels; // +0x20
    WCFinderFeedContentVM * _currentContentVM; // +0x28
}
+ (double)viewHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setupUI;
- (void)updateFonts;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)configureWithContentVM:(id)arg1;
- (void)updateInteractionStateWithContentVM:(id)arg1;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 favDataChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 commentDataChanged:(id)arg2;
- (void)refreshInteractionStateWithContentVM:(id)arg1;
- (id)formatCount:(unsigned long long)arg1;
- (id)titleForFavCount:(unsigned long long)arg1;
- (id)titleForForwardCount:(unsigned long long)arg1;
- (id)titleForLikeCount:(unsigned long long)arg1 contentVM:(id)arg2;
- (id)titleForCommentCount:(unsigned long long)arg1;
- (double)minimumTruncatedTextWidthWithFont:(id)arg1;
- (void)onActionTapped:(id)arg1;
- (void)updateButtonStateImmediately:(unsigned long long)arg1;
- (id)likeIconImageView;
- (id)fallbackLikeIconWithContentVM:(id)arg1 likeFlag:(int)arg2;
- (void)updateLikeIconWithContentVM:(id)arg1 likeFlag:(int)arg2;
- (void)playScaleAnimation:(id)arg1;
- (id)accessibilityLabelWithTitle:(id)arg1 count:(unsigned long long)arg2;
- (id)accessibilityLabelForFav:(BOOL)arg1 count:(unsigned long long)arg2;
- (id)accessibilityLabelForForward:(unsigned long long)arg1;
- (id)accessibilityLabelForLike:(BOOL)arg1 count:(unsigned long long)arg2;
- (id)accessibilityLabelForComment:(unsigned long long)arg1 isClose:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)actionButtons;
- (void)setActionButtons:(id)arg1;
- (id)iconImageViews;
- (void)setIconImageViews:(id)arg1;
- (id)countLabels;
- (void)setCountLabels:(id)arg1;
- (id)currentContentVM;
- (void)setCurrentContentVM:(id)arg1;
- (void).cxx_destruct;
@end
