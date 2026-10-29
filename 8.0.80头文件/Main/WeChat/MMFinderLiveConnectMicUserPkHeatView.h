@interface MMFinderLiveConnectMicUserPkHeatView : UIView
{
    BOOL _isSelfAnchorTeam; // +0x8
    BOOL _smallMode; // +0x9
    id <MMFinderLiveConnectMicUserPkHeatViewDelegate> _delegate; // +0x10
    MMFinderLiveConnectMicPkTeam * _team; // +0x18
    MMFinderLiveConnectMicPkUser * _user; // +0x20
    UIView * _containerView; // +0x28
    MMLiveGradientLayerView * _circleRankView; // +0x30
    UILabel * _rankLabel; // +0x38
    UIImageView * _designatedGiftThumbnailView; // +0x40
    UILabel * _heatLabel; // +0x48
    CAGradientLayer * _containerGradientLayer; // +0x50
}
+ (double)heightWithSmallMode:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)updateWithPkTeam:(id)arg1 uiConf:(id)arg2 pkUser:(id)arg3 isSelfAnchorTeam:(BOOL)arg4 showRank:(BOOL)arg5 designatedGiftItem:(id)arg6 smallMode:(BOOL)arg7;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onTapped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)team;
- (void)setTeam:(id)arg1;
- (id)user;
- (void)setUser:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)circleRankView;
- (void)setCircleRankView:(id)arg1;
- (id)rankLabel;
- (void)setRankLabel:(id)arg1;
- (id)designatedGiftThumbnailView;
- (void)setDesignatedGiftThumbnailView:(id)arg1;
- (id)heatLabel;
- (void)setHeatLabel:(id)arg1;
- (id)containerGradientLayer;
- (void)setContainerGradientLayer:(id)arg1;
- (BOOL)isSelfAnchorTeam;
- (void)setIsSelfAnchorTeam:(BOOL)arg1;
- (BOOL)smallMode;
- (void)setSmallMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
