@interface WCCommentListContentView : UIView <WCImageViewDelegate, ILinkEventExt, WCCommentEmotionViewDelegate>
{
    id <WCCommentListContentViewDelegate> _delegate; // +0x8
    WCSNSMessage * _message; // +0x10
    WCMomentsPageContext * _pageContext; // +0x18
    UIView * _rightestView; // +0x20
    RichTextView * _contentTextView; // +0x28
    WCUserComment * _comment; // +0x30
    UIView * _emotionView; // +0x38
    WCCommentListContentBackgroundView * _backgroundView; // +0x40
}
+ (double)getContentViewHeight:(id)arg1 dataItem:(id)arg2;
+ (BOOL)isAdvertiserPreferComment:(id)arg1 dataItem:(id)arg2;
+ (id)getAccessibilityStr:(id)arg1 dataItem:(id)arg2;
+ (unsigned long long)getDisplayContentParseType:(id)arg1 dataItem:(id)arg2;
+ (id)getDisplayName:(id)arg1 dataItem:(id)arg2;
+ (id)getDisplayContent:(id)arg1 dataItem:(id)arg2;
- (void)config:(id)arg1 dataItem:(id)arg2 width:(double)arg3;
- (id)getRightestView;
- (void)addEmotionView:(id)arg1;
- (id)finderShareView:(id)arg1;
- (id)finderLiveShareView:(id)arg1;
- (BOOL)isAdvertiserPreferComment:(id)arg1 dataItem:(id)arg2;
- (BOOL)isAdvertiserComment:(id)arg1 dataItem:(id)arg2;
- (void)onHeadImageClicked:(id)arg1;
- (void)onHeadImageDoubleClicked:(id)arg1;
- (void)onHeadAdSpecialClick:(id)arg1;
- (void)onClickWCImage:(id)arg1;
- (void)onWCCommentEmotionViewSizeChange;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (id)rightestView;
- (void)setRightestView:(id)arg1;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)emotionView;
- (void)setEmotionView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end

