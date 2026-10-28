@interface WCFinderFeedDetailCommentCell : UITableViewCell <ILinkEventExt, WCFinderCommentEmoticonViewDelegate, WCFinderCommentImageViewDelegate>
{
    BOOL _isSelfPost; // +0x8
    WCFinderComment * _comment; // +0x10
    WCFinderFriendsHeaderSuffixView * _friendLikeSuffixView; // +0x18
    MMUIButton * _recommendButton; // +0x20
    MMUIButton * _handpickButton; // +0x28
    WCFinderCommentEmoticonView * _emoticonView; // +0x30
    WCFinderCommentImageView * _commentImageView; // +0x38
    UILabel * _fromAILabel; // +0x40
    CGPoint _beginTouchPoint; // +0x48
}
+ (double)recommendNameInfoHeightWithComment:(id)arg1 width:(double)arg2;
+ (double)emoticonContentHeightWithComment:(id)arg1;
+ (double)imageContentHeightWithComment:(id)arg1;
+ (double)topMarginOfFromAILabel;
+ (double)heightForFromAILabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setComment:(id)arg1;
- (void)setUpRecommendNameInfosView;
- (void)setUpRecommendButton;
- (void)setUpHandPickButton;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)clickRecommendFriendUsername:(id)arg1;
- (void)showRecommendButtonAnimation;
- (void)clickRecommendAction;
- (void)clickFriendLikeAction;
- (void)recommendViewDataChange;
- (void)setupEmoticonViewIfNeeded;
- (void)setupCommentImageView;
- (id)emoticonReportDictWithComment:(id)arg1;
- (void)updateEmoticonViewWithComment:(id)arg1;
- (void)updateImageViewWithComment:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)forbidHightLightCell;
- (void)setupFromAILabel;
- (void)updateFromAILabelWithComment:(id)arg1;
- (id)getRealCustomBackgroundColor;
- (void)finderCommentEmoticonView:(id)arg1 didClickEmoticonView:(id)arg2;
- (void)finderCommentEmoticonView:(id)arg1 didLongPressEmoticonView:(id)arg2;
- (id)finderCommentEmoticonViewGetFeedId;
- (void)finderCommentImageView:(id)arg1 didClickWithComment:(id)arg2;
- (id)finderCommentImageViewGetFeedId;
- (id)getCommentEventDelegate;
- (id)getFeedId;
- (int)getCommentListScene;
- (BOOL)showRecommendButton;
- (void)clickHandPickAction;
- (id)authorLikeLabelStr;
- (id)comment;
- (BOOL)isSelfPost;
- (void)setIsSelfPost:(BOOL)arg1;
- (id)friendLikeSuffixView;
- (void)setFriendLikeSuffixView:(id)arg1;
- (id)recommendButton;
- (void)setRecommendButton:(id)arg1;
- (id)handpickButton;
- (void)setHandpickButton:(id)arg1;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (id)commentImageView;
- (void)setCommentImageView:(id)arg1;
- (CGPoint)beginTouchPoint;
- (void)setBeginTouchPoint:(CGPoint)arg1;
- (id)fromAILabel;
- (void)setFromAILabel:(id)arg1;
- (void).cxx_destruct;
@end
