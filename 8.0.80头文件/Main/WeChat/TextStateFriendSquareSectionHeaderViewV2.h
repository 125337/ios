@interface TextStateFriendSquareSectionHeaderViewV2 : UICollectionReusableView
{
    NSString * _ownTopicId; // +0x8
    TextStateTopicModel * _friendTopic; // +0x10
    UIView * _leadingIconContainer; // +0x18
    MMWebImageView * _leadingIconView; // +0x20
    UIImageView * _leadingTextIconBackgroundView; // +0x28
    UIView * _leadingTextIconMaskView; // +0x30
    MMUILabel * _leadingTextIconLabel; // +0x38
    MMUILabel * _prefixLabel; // +0x40
    MMWebImageView * _trailingIconView; // +0x48
    long long _section; // +0x50
    UIView * _bottomView; // +0x58
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
- (id)leadingIconContainer;
- (void)setLeadingIconContainer:(id)arg1;
- (id)leadingIconView;
- (void)setLeadingIconView:(id)arg1;
- (id)leadingTextIconBackgroundView;
- (void)setLeadingTextIconBackgroundView:(id)arg1;
- (id)leadingTextIconMaskView;
- (void)setLeadingTextIconMaskView:(id)arg1;
- (id)leadingTextIconLabel;
- (void)setLeadingTextIconLabel:(id)arg1;
- (id)prefixLabel;
- (void)setPrefixLabel:(id)arg1;
- (id)trailingIconView;
- (void)setTrailingIconView:(id)arg1;
- (long long)section;
- (void)setSection:(long long)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (void).cxx_destruct;
@end
