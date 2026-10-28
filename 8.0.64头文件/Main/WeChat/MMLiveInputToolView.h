@interface MMLiveInputToolView : UIView <MMLiveInputControllerDelegate, RoomContactSelectDelegate, MMLiveContactSelectViewControllerDelegate, MMFinderLiveQuickReplyViewDelegate, ILinkEventExt, EmoticonSearchViewControllerDelegate, MMLiveVoiceInputViewDelegate, MMQuickSendEmoticonViewDelegate, EmoticonInputRecommendMgrExt>
{
    BOOL _showingInputView; // +0x8
    BOOL _showCurUserHeadImageView; // +0x9
    BOOL _hasAtAll; // +0xa
    BOOL _enableForwardToFloatBarrage; // +0xb
    BOOL _enableProductQuestionAnswer; // +0xc
    BOOL _isInBarrageInputMode; // +0xd
    BOOL _isInProductQuestionInputMode; // +0xe
    BOOL _hasSendMsg; // +0xf
    BOOL _isSwitchAccountTipsViewExposed; // +0x10
    BOOL _showingLocationButton; // +0x11
    BOOL _isRemainSeeItemEnable; // +0x12
    BOOL _isForceCloseContactSelectView; // +0x13
    BOOL _needDisplayBarrageRedDot; // +0x14
    BOOL _queProductForceUpdated; // +0x15
    BOOL _forwardToFloatBarrageSwitch; // +0x16
    BOOL _isCurrentForwardToFloatBarrage; // +0x17
    BOOL _isResettingTextViewText; // +0x18
    BOOL _isFirstShowBarrageSwitchEntrance; // +0x19
    BOOL _hadVoiceInputText; // +0x1a
    BOOL _isAtContactVCShowing; // +0x1b
    long long _inputViewStyle; // +0x20
    id /* block */ _curUserHeadImageClickBlock; // +0x28
    EmoticonBoardView * _emoticonBoardView; // +0x30
    MMLiveVoiceInputView * _voiceInputView; // +0x38
    MMQuickSendEmoticonView * _quickSendEmoticonView; // +0x40
    unsigned long long _maxInputCharsCount; // +0x48
    id <MMLiveInputToolViewDelegate> _delegate; // +0x50
    MMLiveInputController * _inputController; // +0x58
    UIColor * _pubbleInputBackColor; // +0x60
    NSString * _plackHolderStr; // +0x68
    UIFont * _textFont; // +0x70
    long long _atCommentEnableState; // +0x78
    NSMutableArray * _atUsrNameList; // +0x80
    id /* block */ _showCustomToastCallback; // +0x88
    FinderLiveBoxId * _currentBoxId; // +0x90
    id /* block */ _barragePreviewCallback; // +0x98
    id /* block */ _notifyLayoutCallback; // +0xa0
    unsigned long long _appearCountTipsCharsCount; // +0xa8
    long long _currentOrientation; // +0xb0
    MMHeadImageView * _headImageView; // +0xb8
    MMUIImageView * _switchAccountImageView; // +0xc0
    MMNormalTipsView * _switchAccountTipsView; // +0xc8
    NSString * _previousText; // +0xd0
    NSString * _previousTextForVoiceInput; // +0xd8
    UIView * _pubbleInputView; // +0xe0
    MMGrowTextView * _growTextView; // +0xe8
    MMUILabel * _countTipLabel; // +0xf0
    UIButton * _expressionButton; // +0xf8
    NSMutableArray * _scrollViewArr; // +0x100
    NSString * _prePlaceHolderStr; // +0x108
    NSString * _lastTextViewText; // +0x110
    UIButton * _atButton; // +0x118
    UIButton * _voiceInputButton; // +0x120
    UIButton * _addButton; // +0x128
    MMFinderLiveQuickReplyView * _quickReplyView; // +0x130
    FinderLiveQuickReplyWordingInfo * _quickReplyInfo; // +0x138
    NSString * _city; // +0x140
    NSString * _locationAddContent; // +0x148
    MMLiveRoomContactSelectForHalfScreenViewController * _roomContactSelectHalfViewController; // +0x150
    MMLiveContactSelectViewController * _contactSelectHalfViewController; // +0x158
    UIView * _rightEmptyAreaView; // +0x160
    UIView * _seperatorLine; // +0x168
    MMBadgeView * _barrageRedDotView; // +0x170
    MMUIButton * _forwardSelectedButton; // +0x178
    MMUILabel * _forwardDescLabel; // +0x180
    RichTextView * _productDescView; // +0x188
    FinderWindowProductInfo * _questionProductInfo; // +0x190
    NSMutableArray * _productDescArrStyles; // +0x198
    NSString * _productDescStr; // +0x1a0
    NSArray * _floatMsgList; // +0x1a8
    NSArray * _quickReplyBarrageModels; // +0x1b0
    MMFinderLiveSFBarrageCellView * _previewBarrageCellView; // +0x1b8
    NSString * _lastValidBarragePreviewText; // +0x1c0
    NSMutableArray * _pendingCommitReplyModelList; // +0x1c8
    NSString * _lastRequestRecommendEmoticonDesc; // +0x1d0
    unsigned long long _emoticonSearchSrc; // +0x1d8
}
+ (double)inputToolViewInitialHeight;
- (void)setEventDelegate:(id)arg1;
- (id)eventDelegate;
- (id)initWithInputViewStyle:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)registerExtension;
- (void)initDefaultDatas;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)initInputController;
- (void)layoutUI;
- (void)layoutCurUserHeadImageView;
- (void)recreateQuickReplyBarrageModels;
- (BOOL)shouldShowLive;
- (BOOL)isInChina;
- (void)updateSelfHeight;
- (void)layoutPubbleInputView;
- (double)getPubbleViewHeight;
- (void)updatePubbleInputViewFrame;
- (void)layoutGrowTextView;
- (void)updateGrowTextViewMaxSize;
- (void)updateGrowTextViewFrame;
- (void)updateCurUserHeadImageWith:(id)arg1;
- (void)updateCurUserHeadImageWithURL:(id)arg1 isFinderHead:(BOOL)arg2;
- (void)layoutCountTipLabel;
- (void)updateCountTipLabelFrame;
- (void)updateCharsCountTipLabel;
- (void)layoutRightEmptyAreaView;
- (void)layoutForwardSelectedButton;
- (void)layoutForwardDescLabel;
- (void)layoutBarrageRedDotView;
- (BOOL)needDisplayBarrageRedDot;
- (void)updateForwardDescLabelText;
- (void)updateForwardSelectButtonImage;
- (id)selectedImageForSelectedButton;
- (id)unSelectedImageForSelectedButton;
- (void)layoutSeperatorLine;
- (void)layoutAtButton;
- (void)onNewAtButtonClicked:(id)arg1;
- (void)layoutVoiceInputButton;
- (void)layoutExpressionButton;
- (void)updateExpressionButtonFrame;
- (void)enableShowingLocationButton:(BOOL)arg1;
- (void)refreshRightActionWidgets;
- (void)updateRightActionWidgetsHidden;
- (void)updateRightActionWidgets;
- (void)onVoiceInputButtonClicked:(id)arg1;
- (void)onVoiceInputPermissioned;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onAtButtonClicked:(id)arg1;
- (void)reloadFunctionButtonImage:(long long)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)reloadVoiceInputButtonImage:(long long)arg1;
- (void)updateTableViewFrameWithInputViewTop:(double)arg1;
- (void)updateQuickSendEmoticonViewFrame;
- (void)clearAtInfo;
- (BOOL)checkEnableAt;
- (BOOL)isLastCharacterAlphaNumeric:(id)arg1;
- (void)becomeTextView;
- (BOOL)updateEnableForwardToFloatBarrage:(BOOL)arg1;
- (id)getFloatMsgToUse;
- (void)setBarrageInputMode:(BOOL)arg1;
- (void)setProductQuestionInputMode:(BOOL)arg1;
- (void)onRightEmptyAreaTapped:(id)arg1;
- (void)updateQuickReplyViewData;
- (void)checkEnableBarrage;
- (void)updateBarragePreview;
- (void)updateHasSendMsg:(BOOL)arg1;
- (void)onBoxIdChanged;
- (void)addPendingCommitQuickReplyModel:(id)arg1;
- (void)clearPendingCommitQuickReplyModels;
- (id)getPendingCommitReplyContent;
- (unsigned long long)pendingCommitReplyModelCnt;
- (id)anyPendingCommitReplyModel;
- (void)setMaxInputCharsCount:(unsigned long long)arg1;
- (void)setEmoticonBoardView:(id)arg1;
- (void)setVoiceInputView:(id)arg1;
- (void)setQuickSendEmoticonView:(id)arg1;
- (void)setCurrentBoxId:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)scrollViewArr;
- (void)setShowingInputView:(BOOL)arg1;
- (double)getPubbleInputViewRightMargin;
- (id)atAllDisplayName;
- (id)atUsrNameList;
- (id)liveViewController;
- (void)setAtCommentEnableState:(long long)arg1;
- (double)pubbleInputRightAreaWidth;
- (void)setIsCurrentForwardToFloatBarrage:(BOOL)arg1;
- (void)setIsInBarrageInputMode:(BOOL)arg1;
- (void)setIsInProductQuestionInputMode:(BOOL)arg1;
- (BOOL)isCurrentCanForwardToFloatBarrage;
- (BOOL)enableDisplayRightActionArea;
- (BOOL)enableShowVoiceInputButton;
- (BOOL)enableShowAtButton;
- (BOOL)isShowingCurUserHeadImageView;
- (BOOL)isShowingSwitchAccountTipsView;
- (BOOL)isInVoiceInputMode;
- (void)showInputViewAtScrollViewY:(double)arg1;
- (void)showEmoticonInputViewAtScrollViewY:(double)arg1;
- (void)closeInputView;
- (void)updateScrollViewFrameWhenShowInputView;
- (void)setPubbleInputBackColor:(id)arg1;
- (void)setPlackHolderStr:(id)arg1;
- (id)getTextViewPlaceHolder;
- (void)setText:(id)arg1;
- (void)clearInputText;
- (void)onInputTextCleared;
- (void)setTextFont:(id)arg1;
- (void)setPlaceHolderStrOnce:(id)arg1;
- (void)addScrollView:(id)arg1 withMarginBottomInputView:(double)arg2 adjustCallBack:(id /* block */)arg3 getCurrentBottomCallBack:(id /* block */)arg4;
- (void)checkAndCloseHalfScreenView;
- (void)updateForwardToFloatBarrageSwitch:(BOOL)arg1;
- (void)updateFloatMsgList:(id)arg1;
- (id)getCurrentCommentActionState;
- (void)unableForwardToFloatBarrage;
- (void)clearFloatBarrageStates;
- (void)clearProductQuestionStates;
- (void)invokeSendLocation:(id)arg1;
- (void)updateMaxInputCharsCount;
- (BOOL)updateEnableProductQuestionAnswer:(BOOL)arg1;
- (void)updateProductInfoIfNeed:(id)arg1;
- (void)forceUpdateProductInfo:(id)arg1;
- (void)updateProductInfo:(id)arg1;
- (void)fadeSubviewsForVoiceInput;
- (void)showSubviewsForVoiceInput;
- (void)onCurrExposeShortCutModelUpdated;
- (void)innerShowInputViewAtScrollViewY:(double)arg1 inputMode:(long long)arg2;
- (void)onUserSelectEmoticon:(id)arg1 externInfo:(id)arg2;
- (void)onCurUserHeadImageClicked:(id)arg1;
- (BOOL)shouldRespondToKeyBoardEvent;
- (double)getVisibleHeight;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)InputViewFrameDidChange:(id)arg1;
- (void)keyboardWillShow;
- (void)emoticonBoardViewWillShow;
- (void)keyboardDidHide;
- (void)onInputModeChangeTo:(long long)arg1 Animated:(BOOL)arg2;
- (void)recoverPreviousTextIfNeededInInputMode:(long long)arg1;
- (void)refreshEmoticonView;
- (BOOL)shouldAutoClose;
- (BOOL)shouldAutoCloseAfterSelectEmoticon;
- (void)didCommitText:(id)arg1;
- (void)didCommitText:(id)arg1 externInfo:(id)arg2;
- (void)onSelectorSelfDefinedEmotcion:(id)arg1;
- (void)onSelectEmoticonSearchItem;
- (void)showNewEmoticonSearchVCFrom:(unsigned long long)arg1;
- (void)checkWecoinForPaidBarrageIfNeededAutoClose:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)textViewTextDidChange;
- (void)textDidChanged:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)checkRecommendEmoticon;
- (void)requestEmoticonWrapByDesc:(id)arg1;
- (BOOL)checkNetWorkUnReachable;
- (void)OnEmoticonPidDidChanged:(id)arg1;
- (void)onTapTextView;
- (void)didSelectContact:(id)arg1;
- (void)onCancelSelectContact;
- (void)didSelectFriendContact:(id)arg1;
- (void)didSelectAll;
- (void)insertAtDisplayName:(id)arg1;
- (void)onCloseSelectContact:(long long)arg1;
- (void)updateIsAtContactVCShowing:(BOOL)arg1;
- (void)onInputToolViewExposeEvent;
- (void)layoutProductDescView;
- (double)productDescPreferHeight;
- (void)updateProductDescViewHidden;
- (void)refreshProductDescView;
- (id)getProductDesc:(id)arg1;
- (id)getProductDescArrStyles:(id)arg1;
- (void)layoutLiveQuickRelyView;
- (void)updateQuickReplyInfo:(id)arg1;
- (id)insertShortCutModeToListIfNeed:(id)arg1;
- (void)clearShortCutModelsFromReplyInfo;
- (id)changeData:(id)arg1;
- (id)changeContentString:(id)arg1;
- (long long)hasQuickReplyLocationModel:(id)arg1;
- (void)updateQuickReplyLocation:(id)arg1;
- (void)updateQuickReply;
- (void)updateQuickReplySendTime;
- (id)getLocationModel;
- (BOOL)isWindterOlympic;
- (void)collectionViewDidSelectWithModel:(id)arg1;
- (void)unselectAllBarrageModels;
- (void)collectionViewDidSelectEndInput;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (void)onSearchEmoticonViewControllerDidClose;
- (void)onVoiceInputStart;
- (void)onVoiceInputFinish;
- (void)onVoiceInputCtrlBtnHoldBegin;
- (void)onVoiceInputCtrlBtnHoldEnd;
- (void)onVoiceInputResultUpdate:(id)arg1;
- (void)onVoiceInputViewClose;
- (void)onVoiceInputViewSend;
- (void)onVoiceInputViewCancel;
- (void)onVoiceInputViewSendAndCancelButtonExpose;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)onMMQuickSendEmoticonViewClickEmoticonWrap:(id)arg1 index:(unsigned long long)arg2;
- (void)onMMQuickSendEmoticonViewClickSearchMoreWithWrap:(id)arg1 index:(unsigned long long)arg2;
- (void)onMergeRecommendEmoticon:(id)arg1 emoticonWrapList:(id)arg2 sessionId:(id)arg3 recSessionId:(id)arg4 remoteWordListMeta:(id)arg5;
- (long long)inputViewStyle;
- (void)setInputViewStyle:(long long)arg1;
- (BOOL)showingInputView;
- (BOOL)showCurUserHeadImageView;
- (void)setShowCurUserHeadImageView:(BOOL)arg1;
- (id /* block */)curUserHeadImageClickBlock;
- (void)setCurUserHeadImageClickBlock:(id /* block */)arg1;
- (id)emoticonBoardView;
- (id)voiceInputView;
- (id)quickSendEmoticonView;
- (unsigned long long)maxInputCharsCount;
- (id)delegate;
- (id)inputController;
- (void)setInputController:(id)arg1;
- (id)pubbleInputBackColor;
- (id)plackHolderStr;
- (id)textFont;
- (long long)atCommentEnableState;
- (void)setAtUsrNameList:(id)arg1;
- (BOOL)hasAtAll;
- (void)setHasAtAll:(BOOL)arg1;
- (id /* block */)showCustomToastCallback;
- (void)setShowCustomToastCallback:(id /* block */)arg1;
- (id)currentBoxId;
- (BOOL)enableForwardToFloatBarrage;
- (void)setEnableForwardToFloatBarrage:(BOOL)arg1;
- (BOOL)enableProductQuestionAnswer;
- (void)setEnableProductQuestionAnswer:(BOOL)arg1;
- (BOOL)isInBarrageInputMode;
- (BOOL)isInProductQuestionInputMode;
- (BOOL)hasSendMsg;
- (void)setHasSendMsg:(BOOL)arg1;
- (id /* block */)barragePreviewCallback;
- (void)setBarragePreviewCallback:(id /* block */)arg1;
- (id /* block */)notifyLayoutCallback;
- (void)setNotifyLayoutCallback:(id /* block */)arg1;
- (unsigned long long)appearCountTipsCharsCount;
- (void)setAppearCountTipsCharsCount:(unsigned long long)arg1;
- (long long)currentOrientation;
- (void)setCurrentOrientation:(long long)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)switchAccountImageView;
- (void)setSwitchAccountImageView:(id)arg1;
- (id)switchAccountTipsView;
- (void)setSwitchAccountTipsView:(id)arg1;
- (BOOL)isSwitchAccountTipsViewExposed;
- (void)setIsSwitchAccountTipsViewExposed:(BOOL)arg1;
- (id)previousText;
- (void)setPreviousText:(id)arg1;
- (id)previousTextForVoiceInput;
- (void)setPreviousTextForVoiceInput:(id)arg1;
- (id)pubbleInputView;
- (void)setPubbleInputView:(id)arg1;
- (id)growTextView;
- (void)setGrowTextView:(id)arg1;
- (id)countTipLabel;
- (void)setCountTipLabel:(id)arg1;
- (id)expressionButton;
- (void)setExpressionButton:(id)arg1;
- (void)setScrollViewArr:(id)arg1;
- (id)prePlaceHolderStr;
- (void)setPrePlaceHolderStr:(id)arg1;
- (id)lastTextViewText;
- (void)setLastTextViewText:(id)arg1;
- (id)atButton;
- (void)setAtButton:(id)arg1;
- (id)voiceInputButton;
- (void)setVoiceInputButton:(id)arg1;
- (id)addButton;
- (void)setAddButton:(id)arg1;
- (BOOL)showingLocationButton;
- (void)setShowingLocationButton:(BOOL)arg1;
- (BOOL)isRemainSeeItemEnable;
- (void)setIsRemainSeeItemEnable:(BOOL)arg1;
- (id)quickReplyView;
- (void)setQuickReplyView:(id)arg1;
- (id)quickReplyInfo;
- (void)setQuickReplyInfo:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)locationAddContent;
- (void)setLocationAddContent:(id)arg1;
- (id)roomContactSelectHalfViewController;
- (void)setRoomContactSelectHalfViewController:(id)arg1;
- (id)contactSelectHalfViewController;
- (void)setContactSelectHalfViewController:(id)arg1;
- (BOOL)isForceCloseContactSelectView;
- (void)setIsForceCloseContactSelectView:(BOOL)arg1;
- (id)rightEmptyAreaView;
- (void)setRightEmptyAreaView:(id)arg1;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (id)barrageRedDotView;
- (void)setBarrageRedDotView:(id)arg1;
- (void)setNeedDisplayBarrageRedDot:(BOOL)arg1;
- (id)forwardSelectedButton;
- (void)setForwardSelectedButton:(id)arg1;
- (id)forwardDescLabel;
- (void)setForwardDescLabel:(id)arg1;
- (id)productDescView;
- (void)setProductDescView:(id)arg1;
- (id)questionProductInfo;
- (void)setQuestionProductInfo:(id)arg1;
- (BOOL)queProductForceUpdated;
- (void)setQueProductForceUpdated:(BOOL)arg1;
- (id)productDescArrStyles;
- (void)setProductDescArrStyles:(id)arg1;
- (id)productDescStr;
- (void)setProductDescStr:(id)arg1;
- (BOOL)forwardToFloatBarrageSwitch;
- (void)setForwardToFloatBarrageSwitch:(BOOL)arg1;
- (BOOL)isCurrentForwardToFloatBarrage;
- (id)floatMsgList;
- (void)setFloatMsgList:(id)arg1;
- (id)quickReplyBarrageModels;
- (void)setQuickReplyBarrageModels:(id)arg1;
- (id)previewBarrageCellView;
- (void)setPreviewBarrageCellView:(id)arg1;
- (id)lastValidBarragePreviewText;
- (void)setLastValidBarragePreviewText:(id)arg1;
- (BOOL)isResettingTextViewText;
- (void)setIsResettingTextViewText:(BOOL)arg1;
- (BOOL)isFirstShowBarrageSwitchEntrance;
- (void)setIsFirstShowBarrageSwitchEntrance:(BOOL)arg1;
- (BOOL)hadVoiceInputText;
- (void)setHadVoiceInputText:(BOOL)arg1;
- (id)pendingCommitReplyModelList;
- (void)setPendingCommitReplyModelList:(id)arg1;
- (BOOL)isAtContactVCShowing;
- (void)setIsAtContactVCShowing:(BOOL)arg1;
- (id)lastRequestRecommendEmoticonDesc;
- (void)setLastRequestRecommendEmoticonDesc:(id)arg1;
- (unsigned long long)emoticonSearchSrc;
- (void)setEmoticonSearchSrc:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
