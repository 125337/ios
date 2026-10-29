@interface WCFinderFriendLikeDisplayIconReasonView : WCFinderFriendLikeDisplayBaseView
{
    WCFinderSizingRichTextView * _nickNameTextView; // +0x8
    WCFinderSizingRichTextView * _appendTipsView; // +0x10
    UIView * _avatorContainerView; // +0x18
    NSMutableArray * _roundHeaderViews; // +0x20
}
- (void)setUpUI;
- (void)applyLayoutConfigToTextView:(id)arg1;
- (void)updateWithViewModel:(id)arg1;
- (void)layoutUIWithLikeInfoLeft:(double)arg1;
- (id)nickNameTextView;
- (void)setNickNameTextView:(id)arg1;
- (id)appendTipsView;
- (void)setAppendTipsView:(id)arg1;
- (id)avatorContainerView;
- (void)setAvatorContainerView:(id)arg1;
- (id)roundHeaderViews;
- (void)setRoundHeaderViews:(id)arg1;
- (void).cxx_destruct;
@end
