@interface WCFinderFriendsHeaderSuffixView : UIView
{
    UIColor * _titleColor; // +0x8
    UIView * _headerContainerView; // +0x10
    WCFinderSizingRichTextView * _likeInfoTextView; // +0x18
    WCFinderSizingRichTextView * _appendTisTextView; // +0x20
}
- (id)init;
- (void)setUpUI;
- (void)updateCommentRecommendFriendList:(id)arg1 width:(double)arg2;
- (id)getHeadImageViewWithContact:(id)arg1 size:(CGSize)arg2;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)headerContainerView;
- (void)setHeaderContainerView:(id)arg1;
- (id)likeInfoTextView;
- (void)setLikeInfoTextView:(id)arg1;
- (id)appendTisTextView;
- (void)setAppendTisTextView:(id)arg1;
- (void).cxx_destruct;
@end
