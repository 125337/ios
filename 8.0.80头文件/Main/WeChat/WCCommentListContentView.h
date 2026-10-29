@interface WCCommentListContentView : UIView <WCImageViewDelegate, ILinkEventExt, WCCommentEmotionViewDelegate, WCCommentBigEmoticonViewDelegate, RichTextEmoticonExtension>
{
    id <WCCommentListContentViewDelegate> _delegate; // +0x8
    WCSNSMessage * _message; // +0x10
    WCMomentsPageContext * _pageContext; // +0x18
    UIView * _rightestView; // +0x20
    RichTextView * _contentTextView; // +0x28
    WCUserComment * _comment; // +0x30
    WCDataItem * _dataItem; // +0x38
    UIView * _mediaView; // +0x40
    WCCommentListContentBackgroundView * _backgroundView; // +0x48
    WCSpringWishButton * _springWishBtn; // +0x50
    UIView * _jumpPlaceHolder; // +0x58
    MMCPLabel * _userNameLabel; // +0x60
    NSArray * _linkElements; // +0x68
}
+ (double)getContentViewHeight:(id)arg1 dataItem:(id)arg2 pageContext:(id)arg3 width:(double)arg4;
+ (BOOL)isAdvertiserPreferComment:(id)arg1 dataItem:(id)arg2;
+ (id)getContentAccessibilityStr:(id)arg1 dataItem:(id)arg2;
+ (unsigned long long)getDisplayContentParseType:(id)arg1 dataItem:(id)arg2;
+ (id)getRefDisplayName:(id)arg1;
+ (id)getDisplayName:(id)arg1 dataItem:(id)arg2;
+ (id)getDisplayContent:(id)arg1 dataItem:(id)arg2 pageContext:(id)arg3;
+ (id)hexStringFromColor:(id)arg1 defaultColor:(id)arg2;
+ (BOOL)displaySpringWishBtn:(id)arg1 dataItem:(id)arg2;
- (void)config:(id)arg1 dataItem:(id)arg2 width:(double)arg3;
- (id)getRightestView;
- (void)addEmotionView:(id)arg1;
- (void)handleImageTap:(id)arg1;
- (void)handleEmoticonTap:(id)arg1;
- (void)openEmotionDetailVC;
- (id)finderShareView:(id)arg1;
- (id)finderLiveShareView:(id)arg1;
- (BOOL)isAdvertiserPreferComment:(id)arg1 dataItem:(id)arg2;
- (BOOL)isAdvertiserComment:(id)arg1 dataItem:(id)arg2;
- (BOOL)isCellMarkedAsIgnoreNotification:(id)arg1;
- (id)getAccessibilityStr:(id)arg1 dataItem:(id)arg2;
- (void)onHeadImageClicked:(id)arg1;
- (void)onUserNameLableTapped:(id)arg1;
- (void)onTapTextStateViewForCard;
- (void)onHeadImageDoubleClicked:(id)arg1;
- (void)onHeadAdSpecialClick:(id)arg1;
- (void)onClickWCImage:(id)arg1;
- (void)WCCommentBigEmoticonView:(id)arg1 didClickEmoticonView:(id)arg2;
- (void)WCCommentBigEmoticonView:(id)arg1 didLongPressEmoticonView:(id)arg2;
- (void)WCCommentBigEmoticonViewSizeChange:(id)arg1;
- (void)onTextLongPressed:(id)arg1 withRect:(CGRect)arg2;
- (void)onClickRichTextViewImageIcon:(id)arg1 imageIconSrc:(id)arg2 imageIconFrame:(CGRect)arg3 richTextView:(id)arg4;
- (void)onClickRichTextViewEmoticonThumb:(id)arg1 thumbFrame:(CGRect)arg2 richTextView:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)emojiInfoForMd5:(id)arg1;
- (void)onEmoticonThumbLoadFailedForMd5:(id)arg1;
- (void)onWCCommentEmotionViewSizeChange;
- (void)configSpringWishMsgDataReport:(id)arg1;
- (id)genSpringWishMsgReportDict;
- (void)reportSnsMsgThumbnailClickEvent;
- (void)reportMsgClickEvent;
- (void)reportMsgEvent:(id)arg1;
- (void)setupAccessibility;
- (id)createLinksRotor;
- (void)accessibilityElementDidBecomeFocused;
- (void)setupLinkElements;
- (void)setupActionsForTargetView:(id)arg1;
- (void)removeActionWithName:(id)arg1 fromArray:(id)arg2;
- (void)onCommentImageClickedWithAccessibility;
- (void)onCommentEmoticonClickedWithAccessibility;
- (void)onNickNameClickedWithAccessibility;
- (void)onRefNameClickedWithAccessibility;
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
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)springWishBtn;
- (void)setSpringWishBtn:(id)arg1;
- (id)jumpPlaceHolder;
- (void)setJumpPlaceHolder:(id)arg1;
- (id)userNameLabel;
- (void)setUserNameLabel:(id)arg1;
- (id)linkElements;
- (void)setLinkElements:(id)arg1;
- (void).cxx_destruct;
@end
