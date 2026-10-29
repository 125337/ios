@interface StreamMDMessageCellView : CommonMessageCellView <CBTStreamMDTextViewDelegate, UIGestureRecognizerDelegate, MMRTCMenuEventDelegate, MDTextMsgViewControllerDelegate, StreamMDMessageViewModelDelegate>
{
    BOOL _disableAutoIncrease; // +0xb8
    CBTStreamMDTextView * _streamMDTextView; // +0xc0
    CBTStreamMDTextView * _thinkingTextView; // +0xc8
    MMUIButton * _thinkingButton; // +0xd0
    MMUIActivityIndicatorView * _loadingView; // +0xd8
    UILabel * _thinkingLabel; // +0xe0
    UIImageView * _arrowImageView; // +0xe8
    UITapGestureRecognizer * _doubleTapGestureRecognizer; // +0xf0
    MessageInteractionOptionListView * _buttonsContainer; // +0xf8
}
+ (double)contentVerticalPadding;
- (id)initWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)prepareForReuse;
- (BOOL)autoHighlight;
- (void)layoutContentView;
- (void)updateLayout;
- (unsigned long long)contentLineCount;
- (BOOL)shouldExpandAIBubbleToMaxWidth;
- (void)updateStatus;
- (void)setHighlighted:(BOOL)arg1;
- (void)syncTextViewMaxWidthIfNeeded;
- (void)initInteractionOptions;
- (void)initStreamMDTextView;
- (void)initThinkingTextView;
- (void)initThinkingButton;
- (void)onClickExpandThinking:(id)arg1;
- (void)onTextViewUpdate;
- (void)autoScrollToBottomIfNeeded;
- (void)animateOffsetTableTo:(CGPoint)arg1;
- (void)checkRestoreAutoFollowIfAtBottom;
- (void)onWillBeginDragging;
- (void)onDidEndDraggingWillDecelerate:(BOOL)arg1;
- (void)onDidEndDecelerating;
- (void)onTextViewHeightChange:(id)arg1 height:(double)arg2;
- (void)onTextViewWidthChange:(id)arg1 width:(double)arg2;
- (void)onClickLink:(id)arg1;
- (void)onTextViewLongPress:(id)arg1 point:(CGPoint)arg2;
- (void)onTextViewDoubleTap:(id)arg1 point:(CGPoint)arg2;
- (id)getBackgroundColor;
- (id)getThinkingMDTextView;
- (id)getResultMDTextView;
- (void)updateCellBottomToVisible;
- (id)operationMenuItems;
- (id)getFingertipSearchItem;
- (void)onFingertipSearch;
- (void)onCopy:(id)arg1;
- (void)onLongTouch:(CGPoint)arg1;
- (BOOL)pressIntoSelectCopyStatusWithPoint:(CGPoint)arg1;
- (BOOL)addCoverViewToControllerTable;
- (id)getCurrentMessageWrap;
- (BOOL)canShowForwardMenuItem;
- (BOOL)canShowFavoriteMenuItem;
- (void)setupDoubleTapGesture;
- (void)onClickAsRefer;
- (void)showFloatPreview:(BOOL)arg1;
- (void)MDTextMsgViewController:(id)arg1 onClickLink:(id)arg2;
- (id)streamMDTextView;
- (void)setStreamMDTextView:(id)arg1;
- (id)thinkingTextView;
- (void)setThinkingTextView:(id)arg1;
- (id)thinkingButton;
- (void)setThinkingButton:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)thinkingLabel;
- (void)setThinkingLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)doubleTapGestureRecognizer;
- (void)setDoubleTapGestureRecognizer:(id)arg1;
- (BOOL)disableAutoIncrease;
- (void)setDisableAutoIncrease:(BOOL)arg1;
- (id)buttonsContainer;
- (void)setButtonsContainer:(id)arg1;
- (void).cxx_destruct;
@end
