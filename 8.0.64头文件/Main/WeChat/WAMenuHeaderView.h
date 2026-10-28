@interface WAMenuHeaderView : UIView <MMWebImageViewDelegate, UIGestureRecognizerDelegate, WARichTextViewHelperDelegate, WAMenuHeaderTagsViewDelegate, _TtP9WeAppCore32WAMenuHeaderDishItemViewDelegate_>
{
    BOOL _showComment; // +0x8
    BOOL _hasCommentJumpInfo; // +0x9
    BOOL _highlightCommentModuleWhenAppear; // +0xa
    BOOL _displayTopRightArrow; // +0xb
    NSString * _descriptionTitle; // +0x10
    NSString * _descriptionSub; // +0x18
    UIImage * _topIconDefault; // +0x20
    NSString * _topIconUrl; // +0x28
    NSString * _topTitle; // +0x30
    UIImage * _topRightImage; // +0x38
    NSString * _topRightWording; // +0x40
    UIColor * _topRightBgColor; // +0x48
    UIFont * _topTitleFont; // +0x50
    NSString * _regitserBody; // +0x58
    NSString * _gameFriendsInfoText; // +0x60
    NSString * _gameActivityText; // +0x68
    NSString * _hostWeAppName; // +0x70
    NSString * _coverAdContent; // +0x78
    NSString * _commentTitleText; // +0x80
    NSString * _commentImageTitleUrl; // +0x88
    NSString * _commentImageTitleInDarkModeUrl; // +0x90
    NSString * _commentScoreStr; // +0x98
    NSString * _commentRecommendStr; // +0xa0
    NSString * _commentMoreText; // +0xa8
    NSString * _lowScoreText; // +0xb0
    NSString * _dishMoreText; // +0xb8
    NSArray * _dishItemList; // +0xc0
    NSString * _commentInviteText; // +0xc8
    NSString * _commentInviteClickbleText; // +0xd0
    NSArray * _commentTagItemList; // +0xd8
    NSArray * _tagsArray; // +0xe0
    id <WAMenuHeaderViewDelegate> _delegate; // +0xe8
    MMUILabel<IWCRichTextLabelProtocol> * _subtitleLabel; // +0xf0
    MMWebImageView * _topIconView; // +0xf8
    MMUILabel * _topTitleLabel; // +0x100
    UIImageView * _topArrowView; // +0x108
    UIButton * _topButton; // +0x110
    UIView * _topPrivacyView; // +0x118
    WCTagsView * _tagsView; // +0x120
    UIView * _topRightView; // +0x128
    MMUILabel * _regitserBodyLabel; // +0x130
    WAHighLightedButton * _gameFriendsInfoButton; // +0x138
    WAHighLightedButton * _gameActivityButton; // +0x140
    WAHighLightedButton * _hostWeAppButton; // +0x148
    WAHighLightedButton * _coverAdContentButton; // +0x150
    WAMenuHeaderTagsView * _commentTagsView; // +0x158
    MMUIView * _commentContentView; // +0x160
    MMWebImageView * _commentTitleImageView; // +0x168
    MMUILabel * _commentTitleLabel; // +0x170
    MMUILabel * _commentScoreLabel; // +0x178
    id <IWARichTextViewHelper> _commentSubtitleRichTextHelper; // +0x180
    MMUILabel * _commentLowScoreLabel; // +0x188
    _TtC9WeAppCore24WAMenuHeaderDishItemView * _dishItemView; // +0x190
    id <IWARichTextViewHelper> _recommendRichTextHelper; // +0x198
    id <IWARichTextViewHelper> _commentInviteRichTextHelper; // +0x1a0
    UIView * _dividingLineView; // +0x1a8
    UIView * _commentModuleHighlightView; // +0x1b0
    double _contentY; // +0x1b8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)loadView;
- (void)relayoutForUpdate;
- (void)layoutContentView;
- (void)layoutTextButton:(id)arg1 withText:(id)arg2 contentY:(double *)arg3 firstButtonHasLayout:(BOOL *)arg4;
- (void)layoutCommentContentView:(double)arg1;
- (void)highlightCommentModuleView;
- (void)updateRecommendContent;
- (void)updateCommentSubtitle;
- (void)updateCommentInvite;
- (id)generateScoreAttributedStr;
- (double)layoutCommentTitleView;
- (double)layoutCommentTagView:(double)arg1;
- (double)layoutDishItemView:(double)arg1;
- (double)layoutRecommendView:(double)arg1;
- (void)layoutCommentInvite:(double)arg1;
- (void)layoutCommentHighlightView:(double)arg1;
- (void)layoutDividingLine:(double)arg1;
- (void)setShowComment:(BOOL)arg1;
- (void)setCommentMoreText:(id)arg1;
- (void)setCommentInviteClickbleText:(id)arg1;
- (void)setDishItemList:(id)arg1;
- (void)setDishMoreText:(id)arg1;
- (void)setGameActivityText:(id)arg1;
- (void)setGameFriendsInfoText:(id)arg1;
- (double)contentHeight;
- (BOOL)hasTextButtonArea;
- (id)tagsView;
- (id)generateHighLightedButton:(id)arg1;
- (id)gameFriendsInfoButton;
- (id)gameActivityButton;
- (id)hostWeAppButton;
- (id)coverAdContentButton;
- (id)commentContentView;
- (id)commentTitleImageView;
- (id)commentTitleLabel;
- (id)commentScoreLabel;
- (id)commentLowScoreLabel;
- (id)commentSubtitleRichTextHelper;
- (id)recommendRichTextHelper;
- (id)commentInviteRichTextHelper;
- (id)commentTagsView;
- (id)dishItemView;
- (void)onDishItemLinkClicked:(id)arg1 linkRect:(CGRect)arg2;
- (void)onDishItemTextClicked:(id)arg1 with:(CGRect)arg2;
- (void)onDishItemShown:(unsigned int)arg1 actionNote:(id)arg2;
- (void)onLinkClicked:(id)arg1 linkRect:(CGRect)arg2;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onLoadImageOK:(id)arg1;
- (void)onCommentTagsViewTaped;
- (void)onTopTaped;
- (void)onPrivacyTaped;
- (void)onGameActivity;
- (void)onGameFriendsInfo;
- (void)onHostWeApp;
- (void)onCoverAd;
- (void)onCommentTaped:(unsigned int)arg1;
- (void)onCommentTaped:(unsigned int)arg1 actionNote:(id)arg2;
- (void)onCommentShown:(unsigned int)arg1;
- (void)onCommentShown:(unsigned int)arg1 actionNote:(id)arg2;
- (void)onCommentSecondButtonTaped;
- (void)onTagButtonClicked:(id)arg1;
- (void)onTagButtonExposed:(id)arg1;
- (id)descriptionTitle;
- (void)setDescriptionTitle:(id)arg1;
- (id)descriptionSub;
- (void)setDescriptionSub:(id)arg1;
- (id)topIconDefault;
- (void)setTopIconDefault:(id)arg1;
- (id)topIconUrl;
- (void)setTopIconUrl:(id)arg1;
- (id)topTitle;
- (void)setTopTitle:(id)arg1;
- (id)topRightImage;
- (void)setTopRightImage:(id)arg1;
- (id)topRightWording;
- (void)setTopRightWording:(id)arg1;
- (id)topRightBgColor;
- (void)setTopRightBgColor:(id)arg1;
- (id)topTitleFont;
- (void)setTopTitleFont:(id)arg1;
- (id)regitserBody;
- (void)setRegitserBody:(id)arg1;
- (id)gameFriendsInfoText;
- (id)gameActivityText;
- (id)hostWeAppName;
- (void)setHostWeAppName:(id)arg1;
- (id)coverAdContent;
- (void)setCoverAdContent:(id)arg1;
- (BOOL)showComment;
- (id)commentTitleText;
- (void)setCommentTitleText:(id)arg1;
- (id)commentImageTitleUrl;
- (void)setCommentImageTitleUrl:(id)arg1;
- (id)commentImageTitleInDarkModeUrl;
- (void)setCommentImageTitleInDarkModeUrl:(id)arg1;
- (id)commentScoreStr;
- (void)setCommentScoreStr:(id)arg1;
- (id)commentRecommendStr;
- (void)setCommentRecommendStr:(id)arg1;
- (id)commentMoreText;
- (id)lowScoreText;
- (void)setLowScoreText:(id)arg1;
- (BOOL)hasCommentJumpInfo;
- (void)setHasCommentJumpInfo:(BOOL)arg1;
- (id)dishMoreText;
- (id)dishItemList;
- (id)commentInviteText;
- (void)setCommentInviteText:(id)arg1;
- (id)commentInviteClickbleText;
- (id)commentTagItemList;
- (void)setCommentTagItemList:(id)arg1;
- (BOOL)highlightCommentModuleWhenAppear;
- (void)setHighlightCommentModuleWhenAppear:(BOOL)arg1;
- (id)tagsArray;
- (void)setTagsArray:(id)arg1;
- (BOOL)displayTopRightArrow;
- (void)setDisplayTopRightArrow:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)topIconView;
- (void)setTopIconView:(id)arg1;
- (id)topTitleLabel;
- (void)setTopTitleLabel:(id)arg1;
- (id)topArrowView;
- (void)setTopArrowView:(id)arg1;
- (id)topButton;
- (void)setTopButton:(id)arg1;
- (id)topPrivacyView;
- (void)setTopPrivacyView:(id)arg1;
- (void)setTagsView:(id)arg1;
- (id)topRightView;
- (void)setTopRightView:(id)arg1;
- (id)regitserBodyLabel;
- (void)setRegitserBodyLabel:(id)arg1;
- (void)setGameFriendsInfoButton:(id)arg1;
- (void)setGameActivityButton:(id)arg1;
- (void)setHostWeAppButton:(id)arg1;
- (void)setCoverAdContentButton:(id)arg1;
- (void)setCommentTagsView:(id)arg1;
- (void)setCommentContentView:(id)arg1;
- (void)setCommentTitleImageView:(id)arg1;
- (void)setCommentTitleLabel:(id)arg1;
- (void)setCommentScoreLabel:(id)arg1;
- (void)setCommentSubtitleRichTextHelper:(id)arg1;
- (void)setCommentLowScoreLabel:(id)arg1;
- (void)setDishItemView:(id)arg1;
- (void)setRecommendRichTextHelper:(id)arg1;
- (void)setCommentInviteRichTextHelper:(id)arg1;
- (id)dividingLineView;
- (void)setDividingLineView:(id)arg1;
- (id)commentModuleHighlightView;
- (void)setCommentModuleHighlightView:(id)arg1;
- (double)contentY;
- (void)setContentY:(double)arg1;
- (void).cxx_destruct;
@end
