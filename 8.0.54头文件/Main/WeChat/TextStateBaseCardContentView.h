@interface TextStateBaseCardContentView : UIView <UIGestureRecognizerDelegate, PAGViewListener, TextStateMgrExt, WCTextStateDBExt, IStoreEmotionSingleDownloadMgrExt, ILinkEventExt>
{
    BOOL _isSelf; // +0x8
    BOOL _enableFriendSquareRedDot; // +0x9
    BOOL _disableIconButton; // +0xa
    BOOL _showGeneralIconButton; // +0xb
    BOOL _shouldHandleTap; // +0xc
    BOOL _enableDoubleTapFavorite; // +0xd
    BOOL _enableFavoriteEffect; // +0xe
    BOOL _showResendWhenPublishFailed; // +0xf
    unsigned int _interactionCount; // +0x10
    unsigned int _notifyCount; // +0x14
    unsigned int _likeSource; // +0x18
    id <TextStateBaseCardContentViewDelegate> _delegate; // +0x20
    id <TextStateCardContentViewFocusDelegate> _focusDelegate; // +0x28
    TextStateModel * _textState; // +0x30
    id _userInfo; // +0x38
    TextStateCardReporter * _reporter; // +0x40
    RichTextView * _descriptionTextView; // +0x48
    RichTextView * _mediaDescriptionTextView; // +0x50
    MMEmoticonView * _emoticonView; // +0x58
    MMUIButton * _positionButton; // +0x60
    TextStatePublishIconButton * _iconButton; // +0x68
    TextStatePublishSourceView * _defaultSourceView; // +0x70
    TextStatePublishSourceView * _headImageSourceView; // +0x78
    TextStateFavoriteButton * _favoriteButton; // +0x80
    TextStateFavoriteButton * _commentButton; // +0x88
    MMUIButton * _resendButton; // +0x90
    MMUIButton * _redEnvelopeButton; // +0x98
    MMUIButton * _moreButton; // +0xa0
    TextStateFeverTapGestureRecognizer * _feverTapGesture; // +0xa8
    CGSize _redEnvelopeButtonTargetSize; // +0xb0
}
+ (UIEdgeInsets)getRedEnvelopeButtonEdgeInsets;
+ (double)getRedEnvelopeButtonIconSize;
+ (id)imageButtonForSVGImageName:(id)arg1;
+ (id)verticalSeparator;
+ (id)textView;
- (id)redEnvelopeButton;
- (BOOL)shouldShowRedEnvelopeButton;
- (void)onTapRedEnvelopeButton;
- (CGSize)calculateRedEnvelopeButtonTargetSize:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initReporter;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)setDelegate:(id)arg1;
- (void)setTextState:(id)arg1;
- (void)setEnableFriendSquareRedDot:(BOOL)arg1;
- (void)updateFriendSquareRedDotExtension;
- (void)updateFriendSquareRedDot;
- (BOOL)isShowingFriendSquareRedDot;
- (BOOL)isSelf;
- (void)setInteractionCount:(unsigned int)arg1;
- (unsigned int)interactionCount;
- (void)setNotifyCount:(unsigned int)arg1;
- (void)setDisableIconButton:(BOOL)arg1;
- (void)setShowGeneralIconButton:(BOOL)arg1;
- (void)setEnableDoubleTapFavorite:(BOOL)arg1;
- (void)handlePositionButtonClick;
- (void)updateFeverGesture;
- (id)feverTapGesture;
- (void)setShouldHandleTap:(BOOL)arg1;
- (BOOL)handleTapView:(id)arg1 point:(CGPoint)arg2;
- (BOOL)shouldStartDoubleTapFavorite;
- (BOOL)enablePositionButtonClick;
- (id)getPositionButtonTitle;
- (void)updatePositionButton;
- (void)updateMediaDescriptionTextView;
- (void)updateDescriptionTextView;
- (void)updateTextView:(id)arg1;
- (void)updateTextView:(id)arg1 suffix:(id)arg2;
- (void)updateEmoticonView;
- (BOOL)shouldHideDefaultSourceView;
- (void)updateDefaultSourceView;
- (void)updateHeadImageSourceView;
- (void)updateFavoriteState;
- (void)updateIconButton;
- (id)descriptionTextView;
- (id)mediaDescriptionTextView;
- (id)emoticonView;
- (id)positionButton;
- (id)iconButton;
- (id)defaultSourceView;
- (id)headImageSourceView;
- (id)favoriteButton;
- (id)commentButton;
- (id)resendButton;
- (id)moreButton;
- (void)initSubviews;
- (void)onContentUpdate;
- (void)shouldUpdateLayout;
- (double)emoticonSideLength;
- (void)showFavoriteEffectAtPoint:(CGPoint)arg1 randomRotate:(BOOL)arg2;
- (void)onTriggerFeverTap;
- (void)onTapFavoriteButton;
- (void)onTapCommentButton;
- (void)onTapDefaultSourceView;
- (void)onTapHeadImageSourceView;
- (void)onTapIconButton;
- (void)onTapBackground;
- (void)onTapMoreButton;
- (void)onTapResendButton;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)onAnimationEnd:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (void)onTextStateRedDotDisposed:(unsigned int)arg1;
- (void)onTextStateFriendTopicConstruct;
- (void)onReceiveInteractionCount:(unsigned int)arg1 withTextStateId:(id)arg2;
- (void)setIsSelf:(BOOL)arg1;
- (id)delegate;
- (id)focusDelegate;
- (void)setFocusDelegate:(id)arg1;
- (id)textState;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (unsigned int)notifyCount;
- (BOOL)enableFriendSquareRedDot;
- (BOOL)disableIconButton;
- (BOOL)showGeneralIconButton;
- (unsigned int)likeSource;
- (void)setLikeSource:(unsigned int)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (BOOL)shouldHandleTap;
- (BOOL)enableDoubleTapFavorite;
- (BOOL)enableFavoriteEffect;
- (void)setEnableFavoriteEffect:(BOOL)arg1;
- (BOOL)showResendWhenPublishFailed;
- (void)setShowResendWhenPublishFailed:(BOOL)arg1;
- (void)setDescriptionTextView:(id)arg1;
- (void)setMediaDescriptionTextView:(id)arg1;
- (void)setEmoticonView:(id)arg1;
- (void)setPositionButton:(id)arg1;
- (void)setIconButton:(id)arg1;
- (void)setDefaultSourceView:(id)arg1;
- (void)setHeadImageSourceView:(id)arg1;
- (void)setFavoriteButton:(id)arg1;
- (void)setCommentButton:(id)arg1;
- (void)setResendButton:(id)arg1;
- (id)redEnvelopeButton;
- (void)setRedEnvelopeButton:(id)arg1;
- (void)setMoreButton:(id)arg1;
- (void)setFeverTapGesture:(id)arg1;
- (CGSize)redEnvelopeButtonTargetSize;
- (void)setRedEnvelopeButtonTargetSize:(CGSize)arg1;
- (void).cxx_destruct;
@end

