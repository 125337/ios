@interface FTSAISearchSugLabel : UIView
{
    id /* block */ _onTapBlock; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _queryLabel; // +0x18
    FTSAISearchSugFriendsLikeView * _friendsLikeView; // +0x20
    UIView * _containerView; // +0x28
    double _lastMaxLabelWidth; // +0x30
}
- (id)initWithQuery:(id)arg1 friendsLikeView:(id)arg2;
- (void)setupViews;
- (void)addFriendsLikeView:(id)arg1;
- (void)updateQueryText:(id)arg1;
- (void)updateFriendsLikeView:(id)arg1;
- (void)handleTap;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (double)maxLabelWidth;
- (id /* block */)onTapBlock;
- (void)setOnTapBlock:(id /* block */)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)queryLabel;
- (void)setQueryLabel:(id)arg1;
- (id)friendsLikeView;
- (void)setFriendsLikeView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (double)lastMaxLabelWidth;
- (void)setLastMaxLabelWidth:(double)arg1;
- (void).cxx_destruct;
@end
