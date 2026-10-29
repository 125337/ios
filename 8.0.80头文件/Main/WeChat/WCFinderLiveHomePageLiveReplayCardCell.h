@interface WCFinderLiveHomePageLiveReplayCardCell : WCFinderLiveFeedBaseStyleableCell <WCFinderFeedStaticCoverCollectionViewCellDelegate, WCFinderLiveGenericFeedVMDelegate, WCFinderLiveFeedGenericCellPlayProtocol, WCFinderLiveFeedGenericCardCellProtocol>
{
    BOOL _viewInitialized; // +0x8
    id <WCFinderLiveHomePageLiveReplayCardCellDelegate> _delegate; // +0x10
    WCFinderLiveGenericFeedVM * _feedVM; // +0x18
    WCFinderFeedStaticCoverCollectionViewCell * _liveReplayView; // +0x20
    UIView * _liveReplayMaskView; // +0x28
    UIView * _authorView; // +0x30
    UIView * _avatorContainer; // +0x38
    WCFinderHeadImageView * _avatorImageView; // +0x40
    RichTextView * _nicknameTV; // +0x48
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x50
    RichTextView * _mediaTitleTextView; // +0x58
    UIView * _replayLabelView; // +0x60
    MMUILabel * _replayText; // +0x68
    UIView * _replayIconView; // +0x70
}
+ (id)cellIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViewsIfNeeded;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateUIElementsWithIsPlaying:(BOOL)arg1;
- (void)playWithSound:(BOOL)arg1;
- (void)stop;
- (void)markTappedByUser;
- (void)prepareForMorphTransition;
- (void)updateWithFeedVM:(id)arg1;
- (void)updateSkeletonable:(id)arg1;
- (void)prepareForReuse;
- (void)onAuthorViewDidClick;
- (id)accessibilityLabel;
- (id)createPlayIconView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)feedVM;
- (void)setFeedVM:(id)arg1;
- (id)liveReplayView;
- (void)setLiveReplayView:(id)arg1;
- (id)liveReplayMaskView;
- (void)setLiveReplayMaskView:(id)arg1;
- (id)authorView;
- (void)setAuthorView:(id)arg1;
- (id)avatorContainer;
- (void)setAvatorContainer:(id)arg1;
- (id)avatorImageView;
- (void)setAvatorImageView:(id)arg1;
- (id)nicknameTV;
- (void)setNicknameTV:(id)arg1;
- (id)authInfoIconView;
- (void)setAuthInfoIconView:(id)arg1;
- (id)mediaTitleTextView;
- (void)setMediaTitleTextView:(id)arg1;
- (id)replayLabelView;
- (void)setReplayLabelView:(id)arg1;
- (id)replayText;
- (void)setReplayText:(id)arg1;
- (id)replayIconView;
- (void)setReplayIconView:(id)arg1;
- (BOOL)viewInitialized;
- (void)setViewInitialized:(BOOL)arg1;
- (void).cxx_destruct;
@end
