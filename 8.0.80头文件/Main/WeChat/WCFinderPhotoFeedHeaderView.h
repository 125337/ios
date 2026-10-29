@interface WCFinderPhotoFeedHeaderView : UIView <WCFinderFeedDescriptionViewDelegate, WCFinderFriendLikeToolbarViewDelegate, WCFinderJumpInfoCombinationViewDelegate, WCFinderJumpInfoBubbleViewDelegate, WCFinderJumpInfoLBSCardViewDelegate, WCFinderFeedContentVMExt>
{
    id <WCFinderPhotoFeedHeaderDelegate> _delegate; // +0x8
    UIView * _separatorView; // +0x10
    UILabel * _commentCountLabel; // +0x18
    WCFinderJumpInfoLBSCardView * _lbsCard; // +0x20
    UIView * _commentTopTipsView; // +0x28
    WCFinderFeedContentVM * _contentVM; // +0x30
    WCFinderJumpInfoCombinationView * _redpacketBubble; // +0x38
    WCFinderJumpInfoBubbleView * _redpacketNormalBubble; // +0x40
    WCFinderFriendLikeToolbarView * _friendLikeView; // +0x48
    UILabel * _feedShortTitleLabel; // +0x50
    WCFinderPhotoFeedDetailDescriptionView * _feedDescriptionView; // +0x58
    double _layoutWidth; // +0x60
}
- (id)initWithFrame:(CGRect)arg1 scene:(unsigned long long)arg2 switchType:(unsigned long long)arg3;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)updateUI;
- (BOOL)shouldShowFriendLikeViewWithContentVM:(id)arg1;
- (void)updateRedpacketBubbleWithForceUpdate:(BOOL)arg1;
- (id)getRedpacketBubbleJumpInfo;
- (void)updateLBSCard;
- (void)updateWithContentVM:(id)arg1;
- (void)updateShortTitleLabelWithContentVM:(id)arg1;
- (void)updateFriendLikeViewWithContentVM:(id)arg1;
- (void)updateCommentCountLabel:(id)arg1;
- (unsigned long long)generateDisplayIdentifyType:(unsigned long long)arg1;
- (void)setCommentTopTipsView:(id)arg1;
- (void)onRefreshFriendUI:(id)arg1;
- (void)clickContentPOIAction:(id)arg1;
- (void)onClickEventEntry:(id)arg1;
- (void)onClickLinkEntry:(id)arg1;
- (void)onClickCollectionAction:(id)arg1;
- (void)onClickContentUsernameAction:(id)arg1 contentVM:(id)arg2;
- (void)onClickContentMentionAction:(id)arg1 nickname:(id)arg2 contentVM:(id)arg3;
- (void)onClickContentTopicAction:(id)arg1 contentVM:(id)arg2;
- (void)finderJumpInfoView:(id)arg1 needChangeToStyleWithIndex:(unsigned long long)arg2;
- (id)jumpInfoViewWithJumpInfo:(id)arg1 subStyle:(id)arg2;
- (void)onFinderJumpInfoCombinationViewDidClick:(id)arg1;
- (void)onFinderJumpInfoBubbleViewDidClick:(id)arg1;
- (void)lbsCardChangeFavState:(BOOL)arg1 withJumpInfo:(id)arg2;
- (void)lbsCardDidClickCardWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)lbsCardLayoutHeightChanged;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(BOOL)arg2 showPosition:(int)arg3 scene:(int)arg4;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(BOOL)arg2 showPosition:(int)arg3 scene:(int)arg4 disableReport:(BOOL)arg5;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (id)commentCountLabel;
- (void)setCommentCountLabel:(id)arg1;
- (id)lbsCard;
- (void)setLbsCard:(id)arg1;
- (id)commentTopTipsView;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)redpacketBubble;
- (void)setRedpacketBubble:(id)arg1;
- (id)redpacketNormalBubble;
- (void)setRedpacketNormalBubble:(id)arg1;
- (id)friendLikeView;
- (void)setFriendLikeView:(id)arg1;
- (id)feedShortTitleLabel;
- (void)setFeedShortTitleLabel:(id)arg1;
- (id)feedDescriptionView;
- (void)setFeedDescriptionView:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
