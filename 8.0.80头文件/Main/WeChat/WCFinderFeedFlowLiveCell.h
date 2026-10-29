@interface WCFinderFeedFlowLiveCell : UICollectionViewCell <WCFinderFeedContentVMExt, MMLiveCDNPlayerViewDelegate, ILinkEventExt, WCFinderFlowCellAutoplayProtocol>
{
    BOOL _disableAutoPlay; // +0x8
    BOOL _enableShowInnerRecommendReason; // +0x9
    BOOL _lowQualityPlay; // +0xa
    BOOL _hideAudienceNum; // +0xb
    BOOL _showFriendLikeReason; // +0xc
    BOOL _isJustTappedByUser; // +0xd
    id <WCFinderFeedFlowLiveCellDelegate> _delegate; // +0x10
    MMLiveCDNPlayerView * _playerView; // +0x18
    WCFinderFeedContentVM * _contentVM; // +0x20
    UIView * _endMaskView; // +0x28
    UIView * _endTipsView; // +0x30
    UIView * _gradientView; // +0x38
    WCFinderRichTextView * _recommendReasonLabel; // +0x40
    UIView * _recommendReasonView; // +0x48
    UILabel * _audienceNumLabel; // +0x50
    WCFinderMoreLiveFriendLikeRecommendReasonView * _friendLikeReasonView; // +0x58
    RichTextView * _innerRecommendReasonLabel; // +0x60
    MMUILabel * _innerRecommendExpandActionLabel; // +0x68
    UIScrollView * _innerRecommendReasonView; // +0x70
    NSString * _innerRecommendReason; // +0x78
    long long _innerRecommendLabelState; // +0x80
    WCFinderFeedStaticCoverContactView * _contactView; // +0x88
    WCFinderLiveNowView * _liveNowView; // +0x90
}
+ (double)cellHeightInWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateWithContentVM:(id)arg1;
- (void)layoutContactView;
- (id)customRecommendReason;
- (unsigned long long)autoPlayCellType;
- (void)play;
- (BOOL)isPlaying;
- (void)playWithSound:(BOOL)arg1;
- (void)pause;
- (void)stop;
- (void)markTappedByUser;
- (BOOL)shouldPreventAutoPlay;
- (void)layoutUI;
- (void)willMoveToWindow:(id)arg1;
- (void)onAuthorViewDidClick;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
- (void)updateLiveCardBlurState;
- (void)layoutInnerRecommendReasonView;
- (void)onFriendLikeClick;
- (void)onRecommendExpandActionTapped;
- (double)maxRecommendWidthInCellWidth:(double)arg1;
- (BOOL)shouldHideAudienceNum;
- (BOOL)showFriendLike;
- (BOOL)showInnerRecommendReason;
- (void)addBlurEffectIfNeed;
- (void)removeBlurEffectIfNeed;
- (id)playerView;
- (id)endMaskView;
- (id)endTipsView;
- (id)gradientView;
- (id)recommendReasonLabel;
- (id)recommendReasonView;
- (id)audienceNumLabel;
- (void)updatePlayAccessibilityWithLiveState:(unsigned long long)arg1;
- (id)nickNameAccessibility;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (void)onFeedLiveStatusChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onPlayBegin;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayViewCoverLoadFinish:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (BOOL)disableAutoPlay;
- (void)setDisableAutoPlay:(BOOL)arg1;
- (BOOL)enableShowInnerRecommendReason;
- (void)setEnableShowInnerRecommendReason:(BOOL)arg1;
- (BOOL)lowQualityPlay;
- (void)setLowQualityPlay:(BOOL)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (BOOL)hideAudienceNum;
- (void)setHideAudienceNum:(BOOL)arg1;
- (BOOL)showFriendLikeReason;
- (void)setShowFriendLikeReason:(BOOL)arg1;
- (void)setEndMaskView:(id)arg1;
- (void)setEndTipsView:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setRecommendReasonLabel:(id)arg1;
- (void)setRecommendReasonView:(id)arg1;
- (void)setAudienceNumLabel:(id)arg1;
- (id)friendLikeReasonView;
- (void)setFriendLikeReasonView:(id)arg1;
- (id)innerRecommendReasonLabel;
- (void)setInnerRecommendReasonLabel:(id)arg1;
- (id)innerRecommendExpandActionLabel;
- (void)setInnerRecommendExpandActionLabel:(id)arg1;
- (id)innerRecommendReasonView;
- (void)setInnerRecommendReasonView:(id)arg1;
- (id)innerRecommendReason;
- (void)setInnerRecommendReason:(id)arg1;
- (long long)innerRecommendLabelState;
- (void)setInnerRecommendLabelState:(long long)arg1;
- (id)contactView;
- (void)setContactView:(id)arg1;
- (id)liveNowView;
- (void)setLiveNowView:(id)arg1;
- (BOOL)isJustTappedByUser;
- (void)setIsJustTappedByUser:(BOOL)arg1;
- (void).cxx_destruct;
@end
