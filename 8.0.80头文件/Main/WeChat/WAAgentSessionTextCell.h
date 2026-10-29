@interface WAAgentSessionTextCell : WAAgentSessionBaseCell <CBTStreamMDParseLogicDelegate, CBTStreamMDTextViewDelegate>
{
    id <WAAgentSessionTextCellDelegate> _delegate; // +0x8
    UIView * _bubbleView; // +0x10
    CBTStreamMDTextView * _mdTextView; // +0x18
    UIImageView * _arrowImageView; // +0x20
    NSMutableAttributedString * _parsedContent; // +0x28
    NSString * _lastConfiguredText; // +0x30
    double _lastConfiguredMaxTextWidth; // +0x38
}
+ (BOOL)isUserBubbleForViewModel:(id)arg1;
+ (id)mdStyleConfigForUser:(BOOL)arg1;
+ (id)userPlainTextForString:(id)arg1;
+ (void)parseMarkdownText:(id)arg1 withDelegate:(id)arg2;
+ (double)maxBubbleWidthForCellWidth:(double)arg1 isUser:(BOOL)arg2;
+ (double)fixedLayoutWidth;
+ (double)cellHeightForContentHeight:(double)arg1;
+ (double)cellHeightWithViewModel:(id)arg1 width:(double)arg2;
+ (id)sharedMeasureTextView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)createMDTextView;
- (BOOL)isUserBubble;
- (id)bubbleColor;
- (double)maxTextWidthForCellWidth:(double)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)ensureContentForWidth:(double)arg1;
- (void)onGeneratedContent:(id)arg1;
- (void)onParseFinished;
- (void)insertMiniAppLinkIcons;
- (void)layoutSubviews;
- (void)layoutArrowImageView;
- (void)onTextViewHeightChange:(id)arg1 height:(double)arg2;
- (void)onTextViewWidthChange:(id)arg1 width:(double)arg2;
- (id)closestNavigationController;
- (void)onClickLink:(id)arg1;
- (void)onTextViewLongPress:(id)arg1 point:(CGPoint)arg2;
- (id)getBackgroundColor;
- (void)onCardActionFollowup:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)forceRedrawStreamMDTextView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bubbleView;
- (void)setBubbleView:(id)arg1;
- (id)mdTextView;
- (void)setMdTextView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)parsedContent;
- (void)setParsedContent:(id)arg1;
- (id)lastConfiguredText;
- (void)setLastConfiguredText:(id)arg1;
- (double)lastConfiguredMaxTextWidth;
- (void)setLastConfiguredMaxTextWidth:(double)arg1;
- (void).cxx_destruct;
@end
