@interface WCFinderFeedFlowLiveCell : UICollectionViewCell <WCFinderFeedContentVMExt, MMLiveCDNPlayerViewDelegate, WCFinderFlowCellAutoplayProtocol>
{
    BOOL _disableAutoPlay; // +0x8
    id <WCFinderFeedFlowLiveCellDelegate> _delegate; // +0x10
    MMLiveCDNPlayerView * _playerView; // +0x18
    UIView * _endMaskView; // +0x20
    UIView * _endTipsView; // +0x28
    UIView * _gradientView; // +0x30
    UILabel * _recommendReasonLabel; // +0x38
    UIView * _recommendReasonView; // +0x40
    UILabel * _audienceNumLabel; // +0x48
    WCFinderFeedContentVM * _contentVM; // +0x50
    WCFinderFeedStaticCoverContactView * _contactView; // +0x58
    WCFinderLiveNowView * _liveNowView; // +0x60
}
+ (double)cellHeightInWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateWithContentVM:(id)arg1;
- (unsigned long long)autoPlayCellType;
- (void)play;
- (BOOL)isPlaying;
- (void)playWithSound:(BOOL)arg1;
- (void)pause;
- (void)stop;
- (BOOL)shouldPreventAutoPlay;
- (void)layoutUI;
- (void)willMoveToWindow:(id)arg1;
- (void)onAuthorViewDidClick;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
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
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)disableAutoPlay;
- (void)setDisableAutoPlay:(BOOL)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setEndMaskView:(id)arg1;
- (void)setEndTipsView:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setRecommendReasonLabel:(id)arg1;
- (void)setRecommendReasonView:(id)arg1;
- (void)setAudienceNumLabel:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)contactView;
- (void)setContactView:(id)arg1;
- (id)liveNowView;
- (void)setLiveNowView:(id)arg1;
- (void).cxx_destruct;
@end

