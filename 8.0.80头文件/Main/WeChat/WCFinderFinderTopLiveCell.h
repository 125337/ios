@interface WCFinderFinderTopLiveCell : UICollectionViewCell <WCFinderFeedContentVMExt, MMLiveCDNPlayerViewDelegate>
{
    id <WCFinderFinderTopLiveCellDelegate> _delegate; // +0x8
    MMLiveCDNPlayerView * _playerView; // +0x10
    UIView * _endMaskView; // +0x18
    UILabel * _endTipsView; // +0x20
    UIView * _gradientView; // +0x28
    UILabel * _recommendReasonLabel; // +0x30
    UIView * _recommendReasonView; // +0x38
    RichTextView * _descLabel; // +0x40
    UIView * _authorView; // +0x48
    UIView * _avatorContainer; // +0x50
    WCFinderHeadImageView * _avatorImageView; // +0x58
    UILabel * _nicknameLabel; // +0x60
    WCFinderAuthInfoIconView * _authInfoIconView; // +0x68
    UILabel * _audienceNumLabel; // +0x70
    WCFinderFeedContentVM * _contentVM; // +0x78
}
+ (double)cellHeightInWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateWithContentVM:(id)arg1;
- (void)play;
- (void)playWithSound:(BOOL)arg1;
- (void)stop;
- (void)layoutUI;
- (void)onAuthorViewDidClick;
- (id)getAudienceNumWordingWithDataItem:(id)arg1;
- (void)addBlurEffectIfNeed;
- (void)removeBlurEffectIfNeed;
- (id)playerView;
- (id)endMaskView;
- (id)endTipsView;
- (id)gradientView;
- (id)descLabel;
- (id)avatorImageView;
- (id)avatorContainer;
- (id)nicknameLabel;
- (id)authInfoIconView;
- (id)authorView;
- (id)recommendReasonLabel;
- (id)recommendReasonView;
- (id)audienceNumLabel;
- (void)onFeedLiveOnlineCountChange:(long long)arg1 participantWording:(id)arg2;
- (void)onFeedLiveCoverInfoUpdate:(id)arg1;
- (void)onPlayBegin;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setEndMaskView:(id)arg1;
- (void)setEndTipsView:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setRecommendReasonLabel:(id)arg1;
- (void)setRecommendReasonView:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setAuthorView:(id)arg1;
- (void)setAvatorContainer:(id)arg1;
- (void)setAvatorImageView:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void)setAuthInfoIconView:(id)arg1;
- (void)setAudienceNumLabel:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end
