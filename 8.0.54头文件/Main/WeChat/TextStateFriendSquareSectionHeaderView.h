@interface TextStateFriendSquareSectionHeaderView : UICollectionReusableView
{
    NSString * _ownTopicId; // +0x8
    TextStateTopicModel * _friendTopic; // +0x10
    MMWebImageView * _iconImageView; // +0x18
    MMUILabel * _clusterLabel; // +0x20
    long long _section; // +0x28
    UIView * _bottomView; // +0x30
}
+ (double)alignX;
+ (double)heightForSection:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)initLayout;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setOwnTopicId:(id)arg1 friendTopic:(id)arg2 section:(long long)arg3;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)ownTopicId;
- (void)setOwnTopicId:(id)arg1;
- (id)friendTopic;
- (void)setFriendTopic:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)clusterLabel;
- (void)setClusterLabel:(id)arg1;
- (long long)section;
- (void)setSection:(long long)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (void).cxx_destruct;
@end

