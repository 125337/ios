@interface SharePreConfirmView : MMUIWindow <IUiUtilExt, MMKernelExt, WCGroupUndoneEduViewDelegate, IShortCutExt, MMSceneDelegateExt, MMGrowTextViewDelegate, IMsgExt, InputControllerDelegate, IMMGrowTextViewExt>
{
    UIImageView * _inputView; // +0x8
    EmoticonBoardView * _emoticonBoardView; // +0x10
    UIButton * _expressionButton; // +0x18
    MMGrowTextView * _textView; // +0x20
    WCInputController * _inputController; // +0x28
    UIImage * _thumbImage; // +0x30
    NSString * _source; // +0x38
    NSString * _thumbImageUrl; // +0x40
    NSString * _defaultInputText; // +0x48
    NSString * _defaultShowText; // +0x50
    BOOL _isShowTextView; // +0x58
    BOOL _hasInputSth; // +0x59
    long long _currentOrientation; // +0x60
    id <SharePreConfirmViewDelegate> _scvDelegate; // +0x68
    WCPasteTextLengthLogic * pastelogic; // +0x70
    NSString * _successText; // +0x78
    UIView * m_textBackgroundImage; // +0x80
    UIView * m_bottomView; // +0x88
    SharePreConfirmDynamicContainer * m_backgroundView; // +0x90
    UIView * m_backgroundBlurView; // +0x98
    UILabel * m_titleView; // +0xa0
    UIView * m_headView; // +0xa8
    UIView * m_contentView; // +0xb0
    UIView * m_contentBlurView; // +0xb8
    UIView * m_preView; // +0xc0
    NamePreLabel * m_namePreView; // +0xc8
    UIView * m_barView; // +0xd0
    UIButton * m_chatroomInfoBtn; // +0xd8
    UIButton * m_preBackbutton; // +0xe0
    UIView * m_contentPreView; // +0xe8
    UIViewController * m_preViewController; // +0xf0
    BaseMsgContentLogicController * m_preViewMultiMsgLogic; // +0xf8
    ChatroomProfileView * m_chatroomTableViewInfo; // +0x100
    long long m_statusBarOrientation; // +0x108
    DotLoadingView * _loadingIndicator; // +0x110
    UIView * _groupUndoneContentView; // +0x118
    UISwitch * _gudSwitch; // +0x120
    UILabel * _gudLabel; // +0x128
    MMUIButton * _gudTipsBtn; // +0x130
    NSMutableSet * m_accessViews; // +0x138
    long long m_previousOrientation; // +0x140
    MMLoadingIndicatorView * m_sendLoadingView; // +0x148
    MMUILabel * m_sendLoadingLabel; // +0x150
    NSString * m_nsLastTextViewText; // +0x158
    BOOL _hideTitleView; // +0x160
    BOOL _isFakeContact; // +0x161
    BOOL _isTitleCenterWithouHeadImg; // +0x162
    BOOL _canShowMsgList; // +0x163
    BOOL _bShowGroupUndoneConfig; // +0x164
    BOOL _bGroupUndoneFlag; // +0x165
    BOOL _bShowWithRichtext; // +0x166
    BOOL _isClickedSend; // +0x167
    BOOL _bShouldHideContentArea; // +0x168
    BOOL _enableContentScrolling; // +0x169
    NSString * _title; // +0x170
    NSArray * _m_msgRecordOriginList; // +0x178
    NSString * _m_contentTitle; // +0x180
    NSArray * _m_arrMsgs; // +0x188
    NSArray * _m_arrToContacts; // +0x190
    NSString * _fromAppName; // +0x198
    NSString * _stayAtString; // +0x1a0
    NSString * _confirmButtonTitle; // +0x1a8
    NSString * _confirmButtonTips; // +0x1b0
    NSString * _emoticonSource; // +0x1b8
    WCGroupUndoneShareReport * _groupUndoneShareReport; // +0x1c0
    unsigned long long _customRichtextParseType; // +0x1c8
    UIImageView * _thumbImageView; // +0x1d0
    unsigned long long _supportedOrientationMask; // +0x1d8
    double _componentsHeight; // +0x1e0
    UIScrollView * _componentScrollView; // +0x1e8
    double _componentsHeightWithoutBottomButtons; // +0x1f0
    NSArray * _subviewsExceptPreview; // +0x1f8
    WCFinderLiveDisplayWindowShareViewBuilder * _shopShareBuilder; // +0x200
}
- (void)registerEvent;
- (void)unregisterEvent;
- (void)setHidden:(BOOL)arg1;
- (void)internalInit;
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (id)initWithWindowScene:(id)arg1;
- (id)initWithWindowScene:(id)arg1 supportedInterfaceOrientationMask:(unsigned long long)arg2;
- (id)initWithCurrentWindow:(id)arg1;
- (id)initWithCurrentWindow:(id)arg1 supportedInterfaceOrientationMask:(unsigned long long)arg2;
- (void)dealloc;
- (void)showView:(BOOL)arg1;
- (void)doAnimation:(BOOL)arg1;
- (void)hideView:(BOOL)arg1;
- (id)getInputText;
- (id)getOriginalInputText;
- (double)getVisibleHeight;
- (void)layoutSubviews;
- (void)layoutLoadingView:(id)arg1;
- (void)layoutSubviewToOrientation:(long long)arg1;
- (void)rotateToOrientation:(long long)arg1;
- (void)rotateToCurrentOrientation;
- (void)onPressBackBtn;
- (id)getBlurView;
- (void)addBlurView:(id)arg1 atPoint:(CGPoint)arg2;
- (id)subviewsExceptPreview;
- (void)initPreViewAndBarView:(id)arg1 ContentView:(id)arg2;
- (void)showPreViewAnimate:(BOOL)arg1 View:(id)arg2 completion:(id /* block */)arg3;
- (void)onRoomInfoBack;
- (void)initOrUpdatePreViewMultiMsgLogicWithContact:(id)arg1;
- (void)initChatroomProfileView:(id)arg1;
- (void)viewChatroomProfile:(id)arg1;
- (void)viewMsg:(id)arg1;
- (void)initMsgView:(id)arg1;
- (void)showPreViewController:(id)arg1;
- (void)viewLink:(id)arg1;
- (void)viewFile:(id)arg1;
- (void)viewMediaWidthMsg:(id)arg1 Path:(id)arg2;
- (void)viewImageWidthMsg:(id)arg1 img:(id)arg2;
- (void)viewAuthorizeRequestDisplayMsg:(id)arg1;
- (void)viewBecomeGuardianDisplayMsg:(id)arg1;
- (void)viewFileImageMsg:(id)arg1;
- (void)viewImageMsg:(id)arg1;
- (void)viewMediaMsg:(id)arg1;
- (void)viewFileMediaMsg:(id)arg1;
- (void)viewProductMsg:(id)arg1;
- (void)viewRecordMsg:(id)arg1;
- (void)viewNoteMsg:(id)arg1;
- (void)viewMultiMsg:(id)arg1;
- (void)viewTextMsg:(id)arg1;
- (void)viewLocationMsg:(id)arg1;
- (void)initTitleView;
- (void)initHeadView;
- (id)genHeadViewWithSingleContract;
- (id)genHeadViewWithMultiContract;
- (id)genHeadImageViewWithContract:(id)arg1;
- (void)initHeadViewBottomSperator:(id)arg1 margin:(double)arg2;
- (void)initContentView;
- (void)formTingAudioContentView:(id)arg1;
- (void)formTingListContentView:(id)arg1;
- (void)setForwardThumbData:(id)arg1;
- (void)formWeAppView:(id)arg1;
- (void)formNativeWeAppView:(id)arg1;
- (void)formGameVideoView:(id)arg1;
- (void)initGroupUndoneView;
- (void)initInputView;
- (void)formContentViewByText:(id)arg1 lineNum:(long long)arg2 width:(double)arg3;
- (void)formContentViewByText:(id)arg1 desc:(id)arg2 lineNum:(long long)arg3 width:(double)arg4 hideVoiceOver:(BOOL)arg5;
- (void)formContentViewByText:(id)arg1 lineNum:(long long)arg2 width:(double)arg3 hideVoiceOver:(BOOL)arg4;
- (void)formContentViewByText:(id)arg1 lineNum:(long long)arg2;
- (void)formContentViewByText:(id)arg1 previewSel:(SEL)arg2;
- (void)formContentViewByText:(id)arg1 desc:(id)arg2 previewSel:(SEL)arg3;
- (void)formNoteContentView:(id)arg1;
- (void)formLocationMsgContentView:(id)arg1;
- (void)formMultiMsgContentView;
- (void)formRecordMsgContentView:(id)arg1;
- (void)formCardContentView:(id)arg1;
- (void)formFinderShareContentView:(id)arg1;
- (void)formFinderLongVideoShareContentView:(id)arg1;
- (void)formFinderSharePureTextView:(id)arg1;
- (void)formFinderNameCardContentView:(id)arg1;
- (void)formFinderEndorsementContentView:(id)arg1;
- (void)formFinderGuaranteeContentView:(id)arg1;
- (void)formFinderTopicShareContentView:(id)arg1;
- (void)formFinderLiveShareContentView:(id)arg1;
- (void)formFinderGoodsShareContentView:(id)arg1;
- (void)formFinderShopDisplayWindowShareContentView:(id)arg1;
- (void)formFinderLiveConnectInviteShareContentView:(id)arg1;
- (void)formFinderLiveBookShareContentView:(id)arg1;
- (void)formFinderColumnShareContentView:(id)arg1;
- (void)formFinderSharePOIRelatedContentView:(id)arg1;
- (id)formFinderTopicShareContentViewCreateFeedView:(CGSize)arg1;
- (void)formLinkContentView:(id)arg1;
- (void)formEmoticonContentView:(id)arg1;
- (void)formImageContentView:(id)arg1;
- (void)formFinderFeedContentView:(id)arg1;
- (void)formGameLifeNameCardContentView:(id)arg1;
- (void)formMusicMVCardContentView:(id)arg1;
- (void)formBigPicReaderContentView:(id)arg1;
- (id)blurEffectAlbumImage:(id)arg1 blurBgImageViewSize:(CGSize)arg2;
- (id)genBackgroundView;
- (void)initLoadingViews:(id)arg1;
- (void)updateConfirmButtonState:(BOOL)arg1;
- (void)recoverConfirmButton;
- (void)initBottomButtons;
- (void)initInputToolView;
- (void)initEmoticonView;
- (void)initInputController;
- (id)getBackgroundView;
- (void)becomeInput;
- (void)resignInput;
- (void)showSendSuccessView;
- (void)notifySendMsgOK;
- (void)stayAtWeChat;
- (id)getTextView;
- (void)didCommitText:(id)arg1;
- (void)didCommitEmptyText;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)keyboardWillShow;
- (void)textViewTextDidChange;
- (void)keyboardDidHide;
- (BOOL)shouldRespondToKeyBoardEvent;
- (void)emoticonBoardViewDidShow;
- (void)onConfirm;
- (void)onCancel;
- (void)reportForwardTopicWithResult:(unsigned long long)arg1;
- (void)reportFinderShareProduct;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)reloadExpressionButtonImage:(long long)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)hideKeyBoard;
- (id)getWebThumbImage;
- (void)onKickQuit;
- (void)onLoadImageOK:(id)arg1;
- (void)moveAboveInputView;
- (void)moveToDefault;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)onTextViewChange:(id)arg1 selectedRange:(_NSRange)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)svgIconName:(id)arg1 isHighlight:(BOOL)arg2;
- (void)onSubSceneSizeChangedFrom:(CGSize)arg1 to:(CGSize)arg2;
- (id)groupUndoneShareReport;
- (void)onClickGroupUndoneTip:(id)arg1;
- (void)onGUDSwitchChanged:(id)arg1;
- (void)onGUEClose:(id)arg1;
- (void)onGUEConfirm:(id)arg1;
- (void)onPerformShortCut:(id)arg1;
- (void)closeAccessbilityBeforeEnterPreview;
- (void)findAccessibilityViewAndClose:(id)arg1;
- (void)openAccessibilityAfterQuitPreview;
- (void)updateBottomSpacing;
- (void)genComponentScrollView;
- (id)getComponentSuperview;
- (void)increaseComponentTotalHeightBy:(double)arg1;
- (void)setComponentTotalHeight:(double)arg1;
- (double)getComponentsHeight;
- (double)getMaxBackgroundHeight;
- (void)scrollContentScrollViewToBottom;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (id)source;
- (void)setSource:(id)arg1;
- (id)thumbImageUrl;
- (void)setThumbImageUrl:(id)arg1;
- (id)defaultInputText;
- (void)setDefaultInputText:(id)arg1;
- (id)defaultShowText;
- (void)setDefaultShowText:(id)arg1;
- (BOOL)isShowTextView;
- (void)setIsShowTextView:(BOOL)arg1;
- (id)scvDelegate;
- (void)setScvDelegate:(id)arg1;
- (BOOL)hasInputSth;
- (void)setHasInputSth:(BOOL)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)successText;
- (void)setSuccessText:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)m_msgRecordOriginList;
- (void)setM_msgRecordOriginList:(id)arg1;
- (id)m_contentTitle;
- (void)setM_contentTitle:(id)arg1;
- (id)m_arrMsgs;
- (void)setM_arrMsgs:(id)arg1;
- (id)m_arrToContacts;
- (void)setM_arrToContacts:(id)arg1;
- (id)fromAppName;
- (void)setFromAppName:(id)arg1;
- (id)stayAtString;
- (void)setStayAtString:(id)arg1;
- (id)confirmButtonTitle;
- (void)setConfirmButtonTitle:(id)arg1;
- (id)confirmButtonTips;
- (void)setConfirmButtonTips:(id)arg1;
- (id)emoticonSource;
- (void)setEmoticonSource:(id)arg1;
- (BOOL)hideTitleView;
- (void)setHideTitleView:(BOOL)arg1;
- (BOOL)isFakeContact;
- (void)setIsFakeContact:(BOOL)arg1;
- (BOOL)isTitleCenterWithouHeadImg;
- (void)setIsTitleCenterWithouHeadImg:(BOOL)arg1;
- (BOOL)canShowMsgList;
- (void)setCanShowMsgList:(BOOL)arg1;
- (BOOL)bShowGroupUndoneConfig;
- (void)setBShowGroupUndoneConfig:(BOOL)arg1;
- (BOOL)bGroupUndoneFlag;
- (void)setBGroupUndoneFlag:(BOOL)arg1;
- (void)setGroupUndoneShareReport:(id)arg1;
- (BOOL)bShowWithRichtext;
- (void)setBShowWithRichtext:(BOOL)arg1;
- (unsigned long long)customRichtextParseType;
- (void)setCustomRichtextParseType:(unsigned long long)arg1;
- (BOOL)isClickedSend;
- (void)setIsClickedSend:(BOOL)arg1;
- (BOOL)bShouldHideContentArea;
- (void)setBShouldHideContentArea:(BOOL)arg1;
- (BOOL)enableContentScrolling;
- (void)setEnableContentScrolling:(BOOL)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (unsigned long long)supportedOrientationMask;
- (void)setSupportedOrientationMask:(unsigned long long)arg1;
- (double)componentsHeight;
- (void)setComponentsHeight:(double)arg1;
- (id)componentScrollView;
- (void)setComponentScrollView:(id)arg1;
- (double)componentsHeightWithoutBottomButtons;
- (void)setComponentsHeightWithoutBottomButtons:(double)arg1;
- (void)setSubviewsExceptPreview:(id)arg1;
- (id)shopShareBuilder;
- (void)setShopShareBuilder:(id)arg1;
- (void).cxx_destruct;
@end

