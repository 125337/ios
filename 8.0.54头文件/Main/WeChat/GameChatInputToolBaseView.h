@interface GameChatInputToolBaseView : UIView <InputControllerDelegate, MMQuickSendEmoticonViewDelegate>
{
    BOOL _showingInputView; // +0x8
    EmoticonBoardView * _emoticonBoardView; // +0x10
    unsigned long long _maxInputCharsCount; // +0x18
    id <GameChatInputToolViewDelegate> _delegate; // +0x20
    GameChatInputController * _inputController; // +0x28
    UIColor * _pubbleInputBackColor; // +0x30
    NSString * _plackHolderStr; // +0x38
    UIFont * _textFont; // +0x40
    Channel * _currentChannel; // +0x48
    GCInputToolBaseViewConfig * _baseViewConfig; // +0x50
    MMGrowTextView * _growTextView; // +0x58
    unsigned long long _appearCountTipsCharsCount; // +0x60
    long long _currentOrientation; // +0x68
    NSMutableArray * _scrollViewArr; // +0x70
    NSString * _prePlaceHolderStr; // +0x78
    MMQuickSendEmoticonView * _quickSendEmoticonView; // +0x80
    NSString * _lastRequestEmoticonDesc; // +0x88
    UIView * _pubbleInputView; // +0x90
    UIView * _backGroundView; // +0x98
    MMUILabel * _countTipLabel; // +0xa0
    UIButton * _expressionButton; // +0xa8
    GCInputChannelTipView * _channelTipVIew; // +0xb0
}
+ (double)inputToolViewInitialHeight;
- (void)configureCurrentChannel:(id)arg1 canDeselect:(BOOL)arg2;
- (void)initChannelTipViewIfNeed;
- (void)handleDeSelect;
- (id)initWithBaseViewConfig:(id)arg1;
- (void)initPubbleView;
- (void)initGrowTextView;
- (void)initCountTipLabel;
- (void)initExpressBtn;
- (id)leftBtmBtnColor;
- (id)btnWithImgNamed:(id)arg1 selector:(SEL)arg2 accessibilityLabel:(id)arg3;
- (void)initBgView;
- (void)initSubViews;
- (void)dealloc;
- (void)didRotate:(id)arg1;
- (void)layoutSubviews;
- (void)initInputController;
- (void)layoutUI;
- (void)initQuickSendEmoticonView;
- (void)updateSelfHeight;
- (void)updateSelfHeightAndLayoutSubvews;
- (void)updateHeightAndNotifyChange;
- (double)getPubbleViewHeight;
- (double)subClsAditionPubbleViewHeight;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onMergeRecommendEmoticon:(id)arg1 emoticonWrapList:(id)arg2 sessionId:(id)arg3 recSessionId:(id)arg4 remoteWordListMeta:(id)arg5;
- (void)onMMQuickSendEmoticonViewClickEmoticonWrap:(id)arg1 index:(unsigned long long)arg2;
- (void)updateCharsCountTipLabel;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)showEmoticonView;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)updateTableViewFrameWithInputViewTop:(double)arg1;
- (void)setMaxInputCharsCount:(unsigned long long)arg1;
- (void)setEmoticonBoardView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateInputViewY;
- (BOOL)needStickBtm;
- (id)scrollViewArr;
- (void)setShowingInputView:(BOOL)arg1;
- (void)subclassOnShowInputView;
- (void)showInputViewAtScrollViewY:(double)arg1;
- (void)closeInputView;
- (void)updateScrollViewFrameWhenShowInputView;
- (void)setPubbleInputBackColor:(id)arg1;
- (void)setPlackHolderStr:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextFont:(id)arg1;
- (void)setPlaceHolderStrOnce:(id)arg1;
- (void)addScrollView:(id)arg1 withMarginBottomInputView:(double)arg2 adjustCallBack:(id /* block */)arg3 getCurrentBottomCallBack:(id /* block */)arg4;
- (void)onSelectEmoticonSearchItem;
- (double)getVisibleHeight;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)InputViewFrameDidChange:(id)arg1;
- (void)keyboardWillShow;
- (void)keyboardDidHide;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(BOOL)arg2;
- (void)refreshEmoticonView;
- (void)growTextViewDidClickSendWithText:(id)arg1;
- (void)didCommitText:(id)arg1;
- (BOOL)handleDidCommit;
- (void)onDidCommitEnd;
- (void)textDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)onTextChange:(id)arg1;
- (void)requestEmoticonWrapByDesc:(id)arg1;
- (void)onSelectorSelfDefinedEmotcion:(id)arg1;
- (BOOL)customeHandleEmoticonSelect:(id)arg1;
- (BOOL)checkNetWorkUnReachable;
- (void)forceClearInputContent;
- (BOOL)showingInputView;
- (id)emoticonBoardView;
- (unsigned long long)maxInputCharsCount;
- (id)delegate;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (id)pubbleInputBackColor;
- (id)plackHolderStr;
- (id)textFont;
- (id)currentChannel;
- (void)setCurrentChannel:(id)arg1;
- (id)baseViewConfig;
- (void)setBaseViewConfig:(id)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (unsigned long long)appearCountTipsCharsCount;
- (void)setAppearCountTipsCharsCount:(unsigned long long)arg1;
- (long long)currentOrientation;
- (void)setCurrentOrientation:(long long)arg1;
- (void)setScrollViewArr:(id)arg1;
- (id)prePlaceHolderStr;
- (void)setPrePlaceHolderStr:(id)arg1;
- (id)quickSendEmoticonView;
- (void)setQuickSendEmoticonView:(id)arg1;
- (id)lastRequestEmoticonDesc;
- (void)setLastRequestEmoticonDesc:(id)arg1;
- (id)pubbleInputView;
- (void)setPubbleInputView:(id)arg1;
- (id)backGroundView;
- (void)setBackGroundView:(id)arg1;
- (id)countTipLabel;
- (void)setCountTipLabel:(id)arg1;
- (id)expressionButton;
- (void)setExpressionButton:(id)arg1;
- (id)channelTipVIew;
- (void)setChannelTipVIew:(id)arg1;
- (void).cxx_destruct;
@end

