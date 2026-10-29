@interface MMLiveConnectMicStatisticsCardView : UIView <MMLiveConnectMicStatisticsItemViewDelegate>
{
    NSString * _connectingAudienceAvatarUri; // +0x8
    long long _connectingAudienceRole; // +0x10
    NSString * _anchorAvatarUri; // +0x18
    double _connectingUnixEpochTime; // +0x20
    unsigned long long _views; // +0x28
    unsigned long long _likes; // +0x30
    unsigned long long _heat; // +0x38
    UIImageView * _leftUserAvatarView; // +0x40
    UIImageView * _rightUserAvatarView; // +0x48
    UILabel * _titleLabel; // +0x50
    UIView * _statisticsContainerView; // +0x58
    UILabel * _timeLabel; // +0x60
    MMLiveConnectMicStatisticsItemView * _seenItemView; // +0x68
    MMLiveConnectMicStatisticsItemView * _likesItemView; // +0x70
    MMLiveConnectMicStatisticsItemView * _heatItemView; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setConnectingAudienceAvatarUri:(id)arg1;
- (void)setConnectingAudienceRole:(long long)arg1;
- (void)setAnchorAvatarUri:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setConnectingUnixEpochTime:(double)arg1;
- (void)setViews:(unsigned long long)arg1;
- (void)setLikes:(unsigned long long)arg1;
- (void)setHeat:(unsigned long long)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)onMMLiveConnectMicStatisticsItemViewTipsIconTapped:(id)arg1;
- (void)initializeComponents;
- (void)updateAvatars;
- (id)connectingAudienceAvatarUri;
- (long long)connectingAudienceRole;
- (id)anchorAvatarUri;
- (double)connectingUnixEpochTime;
- (unsigned long long)views;
- (unsigned long long)likes;
- (unsigned long long)heat;
- (id)leftUserAvatarView;
- (void)setLeftUserAvatarView:(id)arg1;
- (id)rightUserAvatarView;
- (void)setRightUserAvatarView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)statisticsContainerView;
- (void)setStatisticsContainerView:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)seenItemView;
- (void)setSeenItemView:(id)arg1;
- (id)likesItemView;
- (void)setLikesItemView:(id)arg1;
- (id)heatItemView;
- (void)setHeatItemView:(id)arg1;
- (void).cxx_destruct;
@end
