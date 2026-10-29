@interface WCCommentViewFB : MMUIView <RichTextLayoutDelegate, WCForceTouchTriggerLongPressProtocol, IMMLanguageMgrExt, IWCMyStoryUserStateUtilExt, ILinkEventExt, ITranslateSnsMgrExt>
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
    double _firstTopHeight; // +0x88
    WCDataItem * _dataItem; // +0x90
    MMUIButton * _deleteCommentPlaceHolder; // +0x98
    MMUIButton * _emotionView; // +0xa0
    WCMomentsFireworksIconView * _springIconButton; // +0xa8
    MMUIButton * _accessibilityButtonForTruncatedTrailingLinkText; // +0xb0
}
+ (id)getDisplayCommentContent:(id)arg1 dataItem:(id)arg2;
+ (id)getDisplayCommentContentPattern:(id)arg1 dataItem:(id)arg2;
+ (id)accessibilityLabelForTimeline:(id)arg1;
+ (id)genTranslateContentStrPrefix:(id)arg1;
+ (id)genTranslateContentUserStr:(id)arg1 nickname:(id)arg2;
+ (id)genShowContentUserStr:(id)arg1 nickname:(id)arg2;
+ (double)getVisibleHeightWithCommentInfo:(id)arg1 withMaxWidth:(double)arg2 fromDataItem:(id)arg3;
+ (id)totalDisplayContentWithComment:(id)arg1 inDataItem:(id)arg2;
+ (id)richTextViewWithComment:(id)arg1 maxWidth:(double)arg2 inDataItem:(id)arg3;
+ (double)lineSpacingWithComment:(id)arg1;
+ (unsigned long long)parserTypeWithParserString:(id)arg1 inDataItem:(id)arg2;
+ (unsigned long long)parserTypeForTranslate;
+ (double)getExtentHeightEmotionView:(id)arg1 baseStyles:(id)arg2 maxWidth:(double)arg3;
+ (double)getVisibleHeightForSpecialContentWithCommentInfo:(id)arg1 withMaxWidth:(double)arg2 inDataItem:(id)arg3;
+ (id)makeDataWrapForWCTranslateOfComment:(id)arg1 andDataItemTid:(id)arg2;
- (id)dataItemTid;
- (id)GetTranslateSnsKeyID;
- (id)initWithCommentUserInfo:(id)arg1 andDataItem:(id)arg2 isAdComment:(BOOL)arg3;
- (void)initHasNewStoryLogic;
- (void)initStoryUserStateFor:(id)arg1;
- (void)dealloc;
- (void)createSubviews;
- (id)deleteCommentPlaceHolder;
- (void)addEmotionView:(id)arg1 baseStyles:(id)arg2;
- (void)onEmotionClick;
- (void)onEmotionLongPress:(id)arg1;
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
- (void)onDelete:(id)arg1;
- (void)onRestore:(id)arg1;
- (void)showAtedFriendMenuItemForNoTextWithRect:(CGRect)arg1;
- (void)showEmoitionMenuItemWithRect:(CGRect)arg1;
- (void)showMenuItemForText:(id)arg1 withRect:(CGRect)arg2;
- (void)showMenuItemForFoldText:(id)arg1 withRect:(CGRect)arg2;
- (void)showMenuItemForCrashProtectedState:(CGRect)arg1;
- (void)onLinkLongPressed:(id)arg1 withRect:(CGRect)arg2;
- (void)onSearchTopicLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onPhoneLongPressed:(id)arg1 withRect:(CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onSearchTopicClicked:(id)arg1 withRect:(CGRect)arg2;
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
- (id)emotionView;
- (void)setEmotionView:(id)arg1;
- (id)springIconButton;
- (void)setSpringIconButton:(id)arg1;
- (id)accessibilityButtonForTruncatedTrailingLinkText;
- (void)setAccessibilityButtonForTruncatedTrailingLinkText:(id)arg1;
- (void).cxx_destruct;
@end

