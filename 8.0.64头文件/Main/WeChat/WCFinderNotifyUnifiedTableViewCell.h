@interface WCFinderNotifyUnifiedTableViewCell : UITableViewCell <WCFinderHeadImageViewDelegate, WCFinderNotifyCenterCellViewModelDelegate, WCFinderContactExt, WCFinderMentionTitleViewDelegate, WCFinderThanksButtonDelegate>
{
    BOOL _hasBottomButton; // +0x8
    BOOL _needUpdateCellSize; // +0x9
    WCFinderNotifyCenterCellViewModel * _viewModel; // +0x10
    id <WCFinderNotifyUnifiedCellDelegate> _delegate; // +0x18
    WCFinderMentionTitleView * _titleView; // +0x20
    MMWebImageView * _thumbImageView; // +0x28
    RichTextView * _pureTextView; // +0x30
    UIView * _refContentView; // +0x38
    RichTextView * _refContentTextView; // +0x40
    UIView * _highlightAnimBg; // +0x48
    WCFinderHeadImageView * _headImageView; // +0x50
    UIView * _mulityHeadImageView; // +0x58
    WCFinderHeadImageView * _frontHeadImageView; // +0x60
    WCFinderHeadImageView * _backHeadImageView; // +0x68
    UIView * _lineView; // +0x70
    UIView * _pureTextBackGroundView; // +0x78
    UIView * _refContentLineView; // +0x80
    WCFinderThanksButton * _thanksButton; // +0x88
    UIView * _bottomBtnContainer; // +0x90
    MMUIButton * _commentReplyBtn; // +0x98
    MMUIButton * _commentLikeBtn; // +0xa0
    MMUIButton * _aggregatedExpandBtn; // +0xa8
    UIImageView * _ignoreIcon; // +0xb0
    WCFinderUserRelationshipTag * _userTag; // +0xb8
    UILabel * _feedTypeTag; // +0xc0
    double _cacheWidth; // +0xc8
}
+ (BOOL)shouldShowRefContentWithViewModel:(id)arg1;
+ (BOOL)shouldShowFollowMeLabel;
+ (BOOL)shouldShowMembership;
+ (double)getPlaceholderHeightWithWidth:(double)arg1;
+ (double)getHeightWithViewModel:(id)arg1 width:(double)arg2;
+ (double)getTextMaxWidthWithVM:(id)arg1 fullWidth:(double)arg2;
+ (double)getRefContentHeightWithViewModel:(id)arg1 width:(double)arg2;
+ (double)thankBtnHeight;
+ (double)aggregatedExpandHeight;
+ (double)cellBottomMarginWithVM:(id)arg1;
+ (double)commentInteractionBtnHeight;
+ (CGSize)mentionInteractionIconSize;
+ (double)mentionInteractionBtnTopMargin;
+ (id)mentionInteractionBtnFont;
+ (UIEdgeInsets)mentionInteractionBtnInset;
+ (id)mentionInteractionBtnBgColor;
+ (double)thumbLeftMarginWithVM:(id)arg1;
+ (double)thumbRightMargin;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)setUpUI;
- (void)setupBottomBtnContainer;
- (void)setUpMulityImageView;
- (void)setupRefContentView;
- (void)setUpPureTextView;
- (void)setUpViewLayout;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateSeperatorFull:(BOOL)arg1;
- (void)showHighlightAnimation;
- (void)cancelHighlightAnimation;
- (void)setNeedsUpdateCellSize;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)layoutBottomBtnContainer;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (CGRect)thanksIconFrame;
- (void)onThanksButtonClickedWithThanksState:(BOOL)arg1;
- (void)onThanksButtonEmitMagicAnimationWithAnimStyle:(unsigned long long)arg1;
- (void)clickAggregatedExpandButton;
- (void)clickCommentReplyButton;
- (void)clickCommentLikeButton;
- (void)onMentionTitleViewClickUserRelationshipTag:(id)arg1;
- (void)onMentionTitleViewClickFollowButton:(id)arg1;
- (void)onMentionTitleViewClickNickName:(id)arg1;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (int)viewModelCommentScene:(id)arg1;
- (void)viewModelCellHeightChanged:(id)arg1;
- (void)onMentionThankStateChanged;
- (void)onMentionCommentLikeStateChanged;
- (void)onMentionSilentStateChanged;
- (void)onMentionCommentInvalidStateChanged;
- (void)onMentionCommentReplySuccess;
- (void)onMentionCommentReplyErrorWithMsg:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)pureTextView;
- (void)setPureTextView:(id)arg1;
- (id)refContentView;
- (void)setRefContentView:(id)arg1;
- (id)refContentTextView;
- (void)setRefContentTextView:(id)arg1;
- (BOOL)hasBottomButton;
- (void)setHasBottomButton:(BOOL)arg1;
- (id)highlightAnimBg;
- (void)setHighlightAnimBg:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)mulityHeadImageView;
- (void)setMulityHeadImageView:(id)arg1;
- (id)frontHeadImageView;
- (void)setFrontHeadImageView:(id)arg1;
- (id)backHeadImageView;
- (void)setBackHeadImageView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)pureTextBackGroundView;
- (void)setPureTextBackGroundView:(id)arg1;
- (id)refContentLineView;
- (void)setRefContentLineView:(id)arg1;
- (id)thanksButton;
- (void)setThanksButton:(id)arg1;
- (id)bottomBtnContainer;
- (void)setBottomBtnContainer:(id)arg1;
- (id)commentReplyBtn;
- (void)setCommentReplyBtn:(id)arg1;
- (id)commentLikeBtn;
- (void)setCommentLikeBtn:(id)arg1;
- (id)aggregatedExpandBtn;
- (void)setAggregatedExpandBtn:(id)arg1;
- (id)ignoreIcon;
- (void)setIgnoreIcon:(id)arg1;
- (BOOL)needUpdateCellSize;
- (void)setNeedUpdateCellSize:(BOOL)arg1;
- (id)userTag;
- (void)setUserTag:(id)arg1;
- (id)feedTypeTag;
- (void)setFeedTypeTag:(id)arg1;
- (double)cacheWidth;
- (void)setCacheWidth:(double)arg1;
- (void).cxx_destruct;
@end
