@interface WCFinderWechatMentionCell : UITableViewCell <WCFinderHeadImageViewDelegate, WCFinderContactExt, WCFinderWechatMentionCellViewModelDelegate, WCFinderMentionTitleViewDelegate>
{
    BOOL _needUpdateCellSize; // +0x8
    id <WCFinderWechatMentionCellDelegate> _delegate; // +0x10
    UIView * _highlightAnimBg; // +0x18
    WCFinderHeadImageView * _headImageView; // +0x20
    MMWebImageView * _thumbImageView; // +0x28
    UIImageView * _ignoreIcon; // +0x30
    WCFinderMentionTitleView * _titleView; // +0x38
    WCFinderRichTextView * _contentTextView; // +0x40
    RichTextView * _refContentTextView; // +0x48
    UIImageView * _interactImageView; // +0x50
    UIView * _lineView; // +0x58
    UIView * _refContentView; // +0x60
    NSLayoutConstraint * _titleWidthConstraint; // +0x68
    UIView * _refContentLineView; // +0x70
    WCFinderWechatMentionCellViewModel * _viewModel; // +0x78
    UIView * _mulityHeadImageView; // +0x80
    WCFinderHeadImageView * _frontHeadImageView; // +0x88
    WCFinderHeadImageView * _backHeadImageView; // +0x90
    UILabel * _firstLikeLabel; // +0x98
    MMUIButton * _commentDeleteLabel; // +0xa0
    UIView * _operateBtnContainer; // +0xa8
    WCFinderNotifyAttachDisplayView * _displayAttachmentView; // +0xb0
    MMUIButton * _commentReplyBtn; // +0xb8
    MMUIButton * _commentLikeBtn; // +0xc0
    MMUIButton * _aggregatedExpandBtn; // +0xc8
}
+ (double)calucateCellHeightWithViewModel:(id)arg1 width:(double)arg2;
+ (double)getRefContentHeightWithVM:(id)arg1 width:(double)arg2;
+ (BOOL)hasOverLineNumLimitWithContent:(id)arg1 vm:(id)arg2 width:(double)arg3;
+ (double)cellBottomMargin;
+ (double)mentionInteractionBtnHeight;
+ (CGSize)mentionInteractionIconSize;
+ (id)mentionInteractionBtnFont;
+ (double)mentionInteractionBtnTopMarginWithVM:(id)arg1;
+ (id)mentionInteractionBtnBgColor;
+ (double)aggregatedExpandHeight;
+ (double)titleMarginWithVM:(id)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)setNeedsUpdateCellSize;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)layoutUIWithViewModel:(id)arg1 width:(double)arg2;
- (void)layoutOperateBtnContainer;
- (void)setUpUI;
- (void)setUpAttachmentView;
- (void)setupOperateBtnContainer;
- (void)setUpMulityImageView;
- (void)setupRefContentView;
- (void)setUpViewLayout;
- (void)updateSeperatorFull:(BOOL)arg1;
- (void)showHighlightAnimation;
- (void)cancelHighlightAnimation;
- (id)accessibilityLabel;
- (CGRect)getThankMagicAnimIconFrame;
- (void)clickCommentReplyButton;
- (void)clickCommentLikeButton;
- (void)clickAggregatedExpandButton;
- (void)onMentionTitleViewClickFollowButton:(id)arg1;
- (void)onMentionTitleViewClickNickName:(id)arg1;
- (void)onMentionTitleViewClickUserRelationshipTag:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onWechatMentionCellViewModelCommentLikeStateChanged;
- (void)onWechatMentionCellViewModelCommentInvalidStateChanged;
- (void)onWechatMentionCellViewModelCellHeightChanged:(id)arg1;
- (void)onWechatMentionSilentStateChanged;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (void)didClickMulityHeadImageView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)highlightAnimBg;
- (void)setHighlightAnimBg:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)ignoreIcon;
- (void)setIgnoreIcon:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (id)refContentTextView;
- (void)setRefContentTextView:(id)arg1;
- (id)interactImageView;
- (void)setInteractImageView:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)refContentView;
- (void)setRefContentView:(id)arg1;
- (id)titleWidthConstraint;
- (void)setTitleWidthConstraint:(id)arg1;
- (id)refContentLineView;
- (void)setRefContentLineView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)mulityHeadImageView;
- (void)setMulityHeadImageView:(id)arg1;
- (id)frontHeadImageView;
- (void)setFrontHeadImageView:(id)arg1;
- (id)backHeadImageView;
- (void)setBackHeadImageView:(id)arg1;
- (id)firstLikeLabel;
- (void)setFirstLikeLabel:(id)arg1;
- (id)commentDeleteLabel;
- (void)setCommentDeleteLabel:(id)arg1;
- (id)operateBtnContainer;
- (void)setOperateBtnContainer:(id)arg1;
- (id)displayAttachmentView;
- (void)setDisplayAttachmentView:(id)arg1;
- (id)commentReplyBtn;
- (void)setCommentReplyBtn:(id)arg1;
- (id)commentLikeBtn;
- (void)setCommentLikeBtn:(id)arg1;
- (id)aggregatedExpandBtn;
- (void)setAggregatedExpandBtn:(id)arg1;
- (BOOL)needUpdateCellSize;
- (void)setNeedUpdateCellSize:(BOOL)arg1;
- (void).cxx_destruct;
@end
