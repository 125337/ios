@interface WCFinderFeedDetailCommentCell : UITableViewCell <ILinkEventExt>
{
    BOOL _isSelfPost; // +0x8
    WCFinderComment * _comment; // +0x10
    WCFinderFriendsHeaderSuffixView * _friendLikeSuffixView; // +0x18
    MMUIButton * _recommendButton; // +0x20
    WCFinderCommentEmoticonView * _emoticonView; // +0x28
}
+ (double)recommendNameInfoHeightWithComment:(id)arg1 width:(double)arg2;
+ (double)emoticonContentHeightWithComment:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setUpRecommendNameInfosView;
- (void)setUpRecommendButton;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)clickRecommendFriendUsername:(id)arg1;
- (void)clickRecommendAction;
- (void)clickFriendLikeAction;
- (void)recommendViewDataChange;
- (void)setupEmoticonViewIfNeeded;
- (void)updateEmoticonViewWithComment:(id)arg1;
- (void)onClickEmotionView:(id)arg1;
- (void)onLongPressEmoticonView:(id)arg1;
- (id)getCommentEventDelegate;
- (BOOL)showRecommendButton;
- (id)authorLikeLabelStr;
- (id)comment;
- (void)setComment:(id)arg1;
- (BOOL)isSelfPost;
- (void)setIsSelfPost:(BOOL)arg1;
- (id)friendLikeSuffixView;
- (void)setFriendLikeSuffixView:(id)arg1;
- (id)recommendButton;
- (void)setRecommendButton:(id)arg1;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (void).cxx_destruct;
@end

