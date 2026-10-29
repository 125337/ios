@interface WCCommentViewFB : MMUIView <RichTextLayoutDelegate, WCForceTouchTriggerLongPressProtocol, IMMLanguageMgrExt, IWCMyStoryUserStateUtilExt, ILinkEventExt, ITranslateSnsMgrExt, RichTextEmoticonExtension>
{
    RichTextView * _contentView; // +0x8
    id <ILinkEventExt> _urlLabelDelegate; // +0x10
    RichTextView * _translateView; // +0x18
    UIButton * _translateStatusView; // +0x20
    UIView * _translateLineView; // +0x28
    int eTranslateStatus; // +0x30
    NSString * _copyedText; // +0x38
    BOOL _isLongPressHandled; // +0x40
    id <WCCommentViewFBDelegate> _commentDelegate; // +0x48
    WCUserComment * _commentUserInfo; // +0x50
    double _fMaxWidth; // +0x58
    BOOL _shouldConfirmDelete; // +0x60
    UINavigationController * navigationController; // +0x68
    BOOL _isRedType; // +0x70
    BOOL _isAdComment; // +0x71
    UIButton * fulltextButton; // +0x78
    NSMutableArray * hasNewStoryArray; // +0x80
    UIView * _foldLinkProxyView; // +0x88
    BOOL _foldReportIsShowDetail; // +0x90
    double _firstTopHeight; // +0x98
    WCDataItem * _dataItem; // +0xa0
    MMUIButton * _deleteCommentPlaceHolder; // +0xa8
    double _extraTopMargin; // +0xb0
    double _extraBottomMargin; // +0xb8
    WCMomentsPageContext * _pageContext; // +0xc0
    long long _totalCmtCnt; // +0xc8
    EmoticonCustomManageAddLogic * _addEmoticonLogic; // +0xd0
    UIView * _jumpPlaceHolder; // +0xd8
    MMUIButton * _accessibilityButtonForTruncatedTrailingLinkText; // +0xe0
    NSString * _snsSessionId; // +0xe8
}
+ (id)getDisplayCommentContent:(id)arg1 dataItem:(id)arg2 pageContext:(id)arg3;
+ (id)getDisplayCommentContentPattern:(id)arg1 dataItem:(id)arg2;
+ (id)accessibilityLabelForTimeline:(id)arg1;
+ (id)genTranslateContentStrPrefix:(id)arg1;
+ (id)genTranslateContentUserStr:(id)arg1 nickname:(id)arg2;
+ (id)genShowContentUserStr:(id)arg1 nickname:(id)arg2;
+ (double)getVisibleHeightWithCommentInfo:(id)arg1 withMaxWidth:(double)arg2 fromDataItem:(id)arg3 pageContext:(id)arg4;
+ (double)getExpandableVisibleHeightWithCommentInfo:(id)arg1 withMaxWidth:(double)arg2 fromDataItem:(id)arg3 pageContext:(id)arg4;
+ (id)totalDisplayContentWithComment:(id)arg1 inDataItem:(id)arg2 pageContext:(id)arg3;
+ (id)richTextViewWithComment:(id)arg1 maxWidth:(double)arg2 inDataItem:(id)arg3 pageContext:(id)arg4;
+ (id)expandableRichTextViewWithComment:(id)arg1 maxWidth:(double)arg2 inDataItem:(id)arg3 pageContext:(id)arg4 showDetail:(BOOL)arg5 canShowFullText:(BOOL)arg6;
+ (BOOL)shouldShowFullTextButtonWithComment:(id)arg1 maxWidth:(double)arg2 inDataItem:(id)arg3 pageContext:(id)arg4;
+ (id)layoutCacheIdentifierForComment:(id)arg1 tid:(id)arg2;
+ (void)clearAllCommentLayoutCache;
+ (void)removeKeysWithPrefix:(id)arg1 inCache:(id)arg2;
+ (void)clearLayoutCacheForComment:(id)arg1 tid:(id)arg2;
+ (void)clearShouldShowFullTextButtonCache;
+ (void)clearTranslateStateCacheForComment:(id)arg1 tid:(id)arg2;
+ (BOOL)canShowDetailWithComment:(id)arg1 maxWidth:(double)arg2 inDataItem:(id)arg3 pageContext:(id)arg4;
+ (unsigned long long)numberOfCommentLines:(id)arg1 showDetail:(BOOL)arg2 maxWidth:(double)arg3 inDataItem:(id)arg4 pageContext:(id)arg5;
+ (double)commentContentHeight:(id)arg1 showDetail:(BOOL)arg2 maxWidth:(double)arg3 inDataItem:(id)arg4 pageContext:(id)arg5;
+ (double)commentContentHeight:(id)arg1 showDetail:(BOOL)arg2 maxWidth:(double)arg3 inDataItem:(id)arg4 pageContext:(id)arg5 canShowFullText:(BOOL)arg6;
+ (void)calculateComment:(id)arg1 showDetail:(BOOL)arg2 maxWidth:(double)arg3 contentHeight:(double *)arg4 numberOfLines:(unsigned long long *)arg5 inDataItem:(id)arg6 pageContext:(id)arg7 canShowFullText:(BOOL)arg8 bWriteCache:(BOOL)arg9;
+ (double)lineSpacingWithComment:(id)arg1;
+ (unsigned long long)parserTypeWithParserString:(id)arg1 inDataItem:(id)arg2;
+ (unsigned long long)parserTypeForTranslate;
+ (double)getExtentHeightEmotionView:(id)arg1 baseStyles:(id)arg2 maxWidth:(double)arg3;
+ (double)getVisibleHeightForSpecialContentWithCommentInfo:(id)arg1 withMaxWidth:(double)arg2 inDataItem:(id)arg3 pageContext:(id)arg4;
+ (id)makeDataWrapForWCTranslateOfComment:(id)arg1 andDataItemTid:(id)arg2;
+ (BOOL)isSpringStyleForDataItem:(id)arg1;
+ (BOOL)shouldAdjustMarginForComment:(id)arg1 pageContext:(id)arg2;
+ (double)getBigEmoticonHeight;
- (id)dataItemTid;
- (id)GetTranslateSnsKeyID;
- (id)initWithCommentUserInfo:(id)arg1 andDataItem:(id)arg2 isAdComment:(BOOL)arg3;
- (void)initHasNewStoryLogic;
- (void)initStoryUserStateFor:(id)arg1;
- (void)dealloc;
- (void)createSubviews;
- (void)didMoveToWindow;
- (id)deleteCommentPlaceHolder;
- (void)manualLayoutSubViews;
- (double)getVisibleHeight;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)onMenuControllerWillHide:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canCommentDelete;
- (void)onCopy:(id)arg1;
- (void)onSearch:(id)arg1;
- (void)onAskXiaoWei:(id)arg1;
- (void)onAddEmotion:(id)arg1;
- (void)onSaveImageToPhotosAlbum:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)onRestore:(id)arg1;
- (void)showAtedFriendMenuItemForNoTextWithRect:(CGRect)arg1;
- (BOOL)shouldShowCommentMenuItemForText:(id)arg1;
- (void)showMenuItemForText:(id)arg1 withRect:(CGRect)arg2;
- (void)showMenuItemForFoldText:(id)arg1 withRect:(CGRect)arg2;
- (void)showMenuItemForCrashProtectedState:(CGRect)arg1;
- (void)onLinkLongPressed:(id)arg1 withRect:(CGRect)arg2;
- (void)onSearchTopicLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onPhoneLongPressed:(id)arg1 withRect:(CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onSearchTopicClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTextLongPressed:(id)arg1 withRect:(CGRect)arg2;
- (void)onClickRichTextViewImageIcon:(id)arg1 imageIconSrc:(id)arg2 imageIconFrame:(CGRect)arg3 richTextView:(id)arg4;
- (void)onClickRichTextViewEmoticonThumb:(id)arg1 thumbFrame:(CGRect)arg2 richTextView:(id)arg3;
- (id)emojiInfoForMd5:(id)arg1;
- (void)onEmoticonThumbLoadFailedForMd5:(id)arg1;
- (void)onViewLongPressed;
- (void)resetNormal;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)delayedTouchesEnded:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onTranslateText:(id)arg1;
- (void)onTranslateOrigin:(id)arg1;
- (void)onTranslate:(id)arg1;
- (void)onChangeTranslateLanguage:(id)arg1;
- (double)initContentTranslateView:(id)arg1;
- (void)makeTranslateShowAnimation;
- (double)initTranslateStatusButton:(BOOL)arg1 withTitle:(id)arg2;
- (void)onTranslateSnsFailed:(id)arg1 errTip:(id)arg2;
- (void)onTranslateSnsChanged:(id)arg1;
- (void)triggerLongPressFor3DTouchAtLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)onLanguageChange;
- (void)onSetUnreadStoryMarkWithUserName:(id)arg1;
- (void)onClearUnreadStoryMarkWithUserName:(id)arg1;
- (void)reportMenuAction:(long long)arg1;
- (void)initAccessibilityButtonForTruncatedTrailingLinkText;
- (void)onClickAccessibilityButtonForTruncatedTrailingLinkText;
- (void)onVoiceOverStatusChanged;
- (void)reportSnsEmoAddClickEvent:(id)arg1;
- (void)configFoldLinkProxyViewWithShowDetail:(BOOL)arg1;
- (void)layoutFoldLinkProxyView;
- (void)reportCmtPicEvent:(BOOL)arg1 picCnt:(long long)arg2;
- (double)fMaxWidth;
- (void)setFMaxWidth:(double)arg1;
- (id)urlLabelDelegate;
- (void)setUrlLabelDelegate:(id)arg1;
- (id)commentDelegate;
- (void)setCommentDelegate:(id)arg1;
- (BOOL)shouldConfirmDelete;
- (void)setShouldConfirmDelete:(BOOL)arg1;
- (BOOL)isRedType;
- (void)setIsRedType:(BOOL)arg1;
- (id)commentUserInfo;
- (void)setCommentUserInfo:(id)arg1;
- (double)firstTopHeight;
- (void)setFirstTopHeight:(double)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void)setDeleteCommentPlaceHolder:(id)arg1;
- (double)extraTopMargin;
- (void)setExtraTopMargin:(double)arg1;
- (double)extraBottomMargin;
- (void)setExtraBottomMargin:(double)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (long long)totalCmtCnt;
- (void)setTotalCmtCnt:(long long)arg1;
- (id)addEmoticonLogic;
- (void)setAddEmoticonLogic:(id)arg1;
- (id)jumpPlaceHolder;
- (void)setJumpPlaceHolder:(id)arg1;
- (id)accessibilityButtonForTruncatedTrailingLinkText;
- (void)setAccessibilityButtonForTruncatedTrailingLinkText:(id)arg1;
- (id)snsSessionId;
- (void)setSnsSessionId:(id)arg1;
- (void).cxx_destruct;
@end
