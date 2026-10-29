@interface WCFinderFriendLikeCustomInfoView : UIView <WCFinderDynamicRichTextViewDelegate>
{
    UIFont * _tipsFont; // +0x8
    UIColor * _tipsColor; // +0x10
    NSMutableArray * _roundHeaderViews; // +0x18
    WCFinderDynamicRichTextView * _likeInfoTextView; // +0x20
    WCFinderDynamicRichTextView * _appendTisTextView; // +0x28
    UIView * _avatorContainerView; // +0x30
    CGSize _headImageSize; // +0x38
}
- (id)init;
- (double)infoViewHeight;
- (void)setTipsFont:(id)arg1;
- (void)setTipsColor:(id)arg1;
- (void)setUpUI;
- (void)updateWithContentVM:(id)arg1;
- (id)getDisplayCommentInfo:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)generatorAvatorView:(id)arg1 headUrl:(id)arg2 headerViewSize:(CGSize)arg3;
- (id)accessibilityLabel;
- (CGSize)headImageSize;
- (void)setHeadImageSize:(CGSize)arg1;
- (id)tipsFont;
- (id)tipsColor;
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

