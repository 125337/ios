@interface WCFinderFriendLikeCustomInfoView : UIView
{
    WCFinderFriendLikeViewSetupParams * _params; // +0x8
    NSMutableArray * _roundHeaderViews; // +0x10
    WCFinderSizingRichTextView * _likeInfoTextView; // +0x18
    WCFinderSizingRichTextView * _appendTisTextView; // +0x20
    UIView * _avatorContainerView; // +0x28
}
- (id)initWithParams:(id)arg1;
- (void)setUpUI;
- (id)genFinderTextView;
- (void)updateWithContentVM:(id)arg1;
- (id)getDisplayCommentInfo:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)generatorAvatorView:(id)arg1 headUrl:(id)arg2 headerViewSize:(CGSize)arg3;
- (id)accessibilityLabel;
- (id)params;
- (void)setParams:(id)arg1;
- (id)roundHeaderViews;
- (void)setRoundHeaderViews:(id)arg1;
- (id)likeInfoTextView;
- (void)setLikeInfoTextView:(id)arg1;
- (id)appendTisTextView;
- (void)setAppendTisTextView:(id)arg1;
- (id)avatorContainerView;
- (void)setAvatorContainerView:(id)arg1;
- (void).cxx_destruct;
@end
