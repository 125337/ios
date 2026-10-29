@interface WCCommentView : MMUIView <MMImageLoaderObserver, WCCommentEmotionViewDelegate, WCCommentBigEmoticonViewDelegate, IWCAdInfoProxyLogicExt, ILinkEventExt, ITranslateSnsMgrExt, RichTextLayoutDelegate, RichTextEmoticonExtension>
{
    MMHeadImageView * _headImageView; // +0x8
    UIImageView * _likeImageView; // +0x10
    RichTextView * _contentView; // +0x18
    BOOL _isLongPressHandled; // +0x20
    id <WCCommentViewDelegate> _commentDelegate; // +0x28
    RichTextView * _translateView; // +0x30
    UIButton * _translateStatusView; // +0x38
    UIView * _translateLineView; // +0x40
    int eTranslateStatus; // +0x48
    double fTranslateViewHeight; // +0x50
    UILabel * _timeLabel; // +0x58
    UrlLabel * _nameLabel; // +0x60
    MMCPLabel * _openIMDescLabel; // +0x68
    id <ILinkEventExt> _urlLabelDelegate; // +0x70
    WCUserComment * _commentUserInfo; // +0x78
    double _fMaxWidth; // +0x80
    WCDataItem * _dataItem; // +0x88
    id /* block */ _onHedaImageClick; // +0x90
    WCMomentsPageContext * _pageContext; // +0x98
    NSString * _snsSessionId; // +0xa0
    long long _totalCmtCnt; // +0xa8
    UIView * _mediaView; // +0xb0
    UIView * _jumpPlaceHolder; // +0xb8
}
+ (id)getDisplayCommentContent:(id)arg1 dataItem:(id)arg2 pageContext:(id)arg3;
+ (id)getDisplayCommentContentPattern:(id)arg1 dataItem:(id)arg2;
+ (id)genShowContentUserStr:(id)arg1 nickname:(id)arg2;
+ (id)genTranslateContentStrPrefix:(id)arg1;
+ (id)genTranslateContentUserStr:(id)arg1 nickname:(id)arg2;
+ (id)makeDataWrapForWCTranslateOfComment:(id)arg1 fromDataItem:(id)arg2;
- (id)initWithCommentUserInfo:(id)arg1 fromDataItem:(id)arg2;
- (void)dealloc;
- (void)initContentView;
- (BOOL)isAdPreferInfo;
- (BOOL)shouldUseAsyncAvatarInfoForDataItem:(id)arg1;
- (void)updateHeadImageWithAdAsyncAvatarInfo;
- (void)createSubviews;
- (void)manualLayoutSubViews;
- (double)getVisibleHeight;
- (void)showWC;
- (void)reloadTime;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (id)normalBackgroundColor;
- (void)onMenuControllerWillHide:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isTouchEnable;
- (void)showMenuItemForText:(id)arg1 withRect:(CGRect)arg2;
- (void)showMenuItemForCrashProtectedState:(CGRect)arg1;
- (void)onLinkLongPressed:(id)arg1 withRect:(CGRect)arg2;
- (void)onPhoneLongPressed:(id)arg1 withRect:(CGRect)arg2;
- (void)onSearchTopicLongPressed:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onSearchTopicClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onPhoneClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onRestore:(id)arg1;
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
- (id)GetTranslateSnsKeyID;
- (void)onTranslate:(id)arg1;
- (double)initContentTranslateView:(id)arg1;
- (void)makeTranslateShowAnimation;
- (double)initTranslateStatusButton:(BOOL)arg1 withTitle:(id)arg2;
- (void)onTranslateSnsFailed:(id)arg1 errTip:(id)arg2;
- (void)onTranslateSnsChanged:(id)arg1;
- (unsigned int)getCommentCreateTime;
- (void)showAdPreferUrl;
- (void)onAdInfoProxyLogicAvatarImageUpdated:(id)arg1 username:(id)arg2 url:(id)arg3;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (BOOL)isDownloadUrlForAdPreferHead:(id)arg1;
- (void)didMoveToWindow;
- (void)addEmotionView:(id)arg1;
- (void)handleImageTap:(id)arg1;
- (void)onEmotionLongPress:(id)arg1;
- (void)onImageLongPress:(id)arg1;
- (void)onWCCommentEmotionViewSizeChange;
- (BOOL)isSpringStyle;
- (void)reportCmtPicEvent:(BOOL)arg1 picCnt:(long long)arg2;
- (double)fMaxWidth;
- (void)setFMaxWidth:(double)arg1;
- (id)urlLabelDelegate;
- (void)setUrlLabelDelegate:(id)arg1;
- (id)commentDelegate;
- (void)setCommentDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id /* block */)onHedaImageClick;
- (void)setOnHedaImageClick:(id /* block */)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (id)snsSessionId;
- (void)setSnsSessionId:(id)arg1;
- (long long)totalCmtCnt;
- (void)setTotalCmtCnt:(long long)arg1;
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (id)jumpPlaceHolder;
- (void)setJumpPlaceHolder:(id)arg1;
- (void).cxx_destruct;
@end
