@interface CBTStreamMDTextView : CBTStreamTextView <MMRichTextCoverViewDelegate, CBTStreamMDLayoutManagerDelegate, CBTAttachmentBaseViewDelegate, UITextViewDelegate, UIGestureRecognizerDelegate, CBTAttachmentStreamHeightObserver>
{
    BOOL _selectionEnabled; // +0x8
    BOOL _longPressJustTriggered; // +0x9
    BOOL _touchLongPressTriggered; // +0xa
    BOOL _isUpdatingSelectionProgrammatically; // +0xb
    BOOL _coopV2HostVisible; // +0xc
    BOOL _touchStartedOnLink; // +0xd
    id <CBTStreamMDTextViewDelegate> _mdDelegate; // +0x10
    double _contentWidth; // +0x18
    double _contentMaxWidth; // +0x20
    NSTextStorage * _mTextStorage; // +0x28
    NSMutableDictionary * _attachmentViewDic; // +0x30
    UIView * _selectionCoverView; // +0x38
    NSMutableSet * _pendingStreamFadeInAttachmentKeys; // +0x40
    UITapGestureRecognizer * _tapGesture; // +0x48
    UITapGestureRecognizer * _doubleTapGesture; // +0x50
    UILongPressGestureRecognizer * _longPressGesture; // +0x58
    NSTimer * _touchLongPressTimer; // +0x60
    NSTimer * _selectionChangeTimer; // +0x68
    CAShapeLayer * _linkHighlightLayer; // +0x70
    CGPoint _touchLongPressStartPoint; // +0x78
    _NSRange _highlightedLinkRange; // +0x88
}
- (void)setMarkdownSourceText:(id)arg1;
- (id)cbt_resolver;
- (id)cbt_shadowText;
- (id)getSelectRectsWithRange:(_NSRange)arg1;
- (id)getStringWithRange:(_NSRange)arg1;
- (BOOL)cbt_shouldPreferLegacyTextForRange:(_NSRange)arg1 shadow:(id)arg2;
- (id)legacyGetStringWithRange:(_NSRange)arg1 shadow:(id)arg2;
- (id)getTextString;
- (_NSRange)getTouchRangeWithTouchPoint:(CGPoint)arg1;
- (_NSRange)cbt_preferredShadowRangeForAttachmentSpanAtShadowIndex:(unsigned long long)arg1 span:(id)arg2 shadow:(id)arg3;
- (_NSRange)cbt_shadowRangeFromAttachmentLocalRange:(_NSRange)arg1 span:(id)arg2;
- (_NSRange)cbt_touchRangeForTextSpan:(id)arg1 shadowIndex:(unsigned long long)arg2 shadow:(id)arg3;
- (_NSRange)cbt_linkShadowRangeForPhysicalIndex:(unsigned long long)arg1 span:(id)arg2 shadow:(id)arg3;
- (_NSRange)cbt_naturalLanguageShadowRangeForPhysicalIndex:(unsigned long long)arg1 span:(id)arg2 shadow:(id)arg3;
- (_NSRange)cbt_fallbackShadowRangeForPhysicalIndex:(unsigned long long)arg1 span:(id)arg2 shadow:(id)arg3;
- (_NSRange)cbt_shadowRangeFromPhysicalRange:(_NSRange)arg1 shadow:(id)arg2 clampedToTextSpan:(id)arg3;
- (_NSRange)cbt_nearestSpanRangeForTouchPoint:(CGPoint)arg1 shadow:(id)arg2;
- (_NSRange)cbt_adjustInitialTextTouchRangeIfNeeded:(_NSRange)arg1 shadowIndex:(unsigned long long)arg2 span:(id)arg3 shadow:(id)arg4;
- (BOOL)cbt_selectionRangeHasVisibleRects:(_NSRange)arg1;
- (BOOL)cbt_isDisallowedBoundaryCharacterAtPhysicalIndex:(unsigned long long)arg1;
- (_NSRange)cbt_trimDisallowedBoundaryCharactersFromShadowRange:(_NSRange)arg1 span:(id)arg2;
- (unsigned long long)cbt_preferredSemanticPhysicalIndexForPhysicalIndex:(unsigned long long)arg1 span:(id)arg2 shadow:(id)arg3;
- (unsigned long long)cbt_nearestVisiblePhysicalIndexForPhysicalIndex:(unsigned long long)arg1 span:(id)arg2 shadow:(id)arg3;
- (_NSRange)cbt_nearestVisibleShadowRangeForPhysicalIndex:(unsigned long long)arg1 span:(id)arg2 shadow:(id)arg3;
- (long long)getTouchIndexWithTouchPoint:(CGPoint)arg1 FrontCursor:(BOOL)arg2;
- (float)getLineHeight;
- (id)delegateView;
- (BOOL)isEmojiLocation:(unsigned long long)arg1 bStart:(BOOL)arg2;
- (void)onSelectionDragDidEnd;
- (void)stopAllAttachmentAutoScroll;
- (void)cbt_refreshSelectionHighlight;
- (BOOL)cbt_isPhysicalIndexLayoutSpacer:(unsigned long long)arg1;
- (BOOL)cbt_isPhysicalIndexInEmptyLineZone:(unsigned long long)arg1;
- (BOOL)cbt_isShadowIndexInLayoutSpacer:(unsigned long long)arg1 shadow:(id)arg2;
- (long long)cbt_snapShadowIndexAwayFromLayoutSpacer:(long long)arg1 frontCursor:(BOOL)arg2 shadow:(id)arg3;
- (id)plainTextForAttachment:(id)arg1;
- (id)markdownTextForTableDataController:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupGestures;
- (void)addDoubleTapGesture;
- (void)disableSystemGestures;
- (void)didMoveToWindow;
- (id)layout;
- (void)setContentWidth:(double)arg1;
- (void)updateContentMaxWidth:(double)arg1;
- (void)appendStreamText:(id)arg1;
- (void)removeTrailingText:(unsigned long long)arg1;
- (id)getCurrentLayoutedContent;
- (void)setAllText:(id)arg1;
- (void)markPendingStreamFadeInAttachments:(id)arg1;
- (BOOL)consumePendingStreamFadeInAttachment:(id)arg1;
- (void)checkAttachmentSize:(id)arg1;
- (void)cleanupDetachedAttachmentViews;
- (void)cleanupPendingStreamFadeInAttachmentKeys;
- (void)removeAttachmentViewForKey:(id)arg1;
- (id)longPressGestureRecognizer;
- (void)checkSize;
- (void)onAttachmentView:(id)arg1 longPressAtPoint:(CGPoint)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onLongPressGesture:(id)arg1;
- (void)onTapGesture:(id)arg1;
- (void)cbt_cancelTouchLongPressTimer;
- (void)cbt_touchLongPressTimerFired;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_resetLongPressJustTriggeredNextRunloop;
- (id)linkHighlightLayer;
- (void)highlightLinkBackgroundAtPoint:(CGPoint)arg1;
- (void)unhighlightLinkBackground;
- (void)onDoubleTapGesture:(id)arg1;
- (id)linkUrlAtPoint:(CGPoint)arg1;
- (BOOL)hasLinkAtPoint:(CGPoint)arg1;
- (id)businessJumpCardWrapAtPoint:(CGPoint)arg1;
- (BOOL)tryHandleLinkTapAtPoint:(CGPoint)arg1;
- (void)handleLinkTap:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)selectAllContent;
- (void)resetLongPressJustTriggered;
- (void)resetSelection;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)selectionChangeTimerFired;
- (void)drawGlyphsForGlyphRect:(CGRect)arg1 atPoint:(CGPoint)arg2 baselineY:(double)arg3 attachment:(id)arg4;
- (id)createAttachmentViewForAttachment:(id)arg1;
- (BOOL)isLocationInGestureResponderView:(CGPoint)arg1;
- (void)attachment:(id)arg1 didChangeContentHeight:(double)arg2;
- (void)onAttachmentViewUpdateSize:(id)arg1;
- (void)onAttachmentView:(id)arg1 clickLink:(id)arg2;
- (void)onAttachmentView:(id)arg1 didTriggerCardAction:(id)arg2;
- (void)reloadAttachment:(id)arg1;
- (void)removeAllAttachment;
- (void)coopV2HostDidAppear;
- (void)coopV2HostDidDisappear;
- (void)coopV2RefreshEmbeddedContentCardExposure;
- (void)richLinkRefreshExposure;
- (void)chatBotLinkRefreshExposure;
- (void)reportChatBotLinkEvent:(id)arg1 linkUrl:(id)arg2 isStreamingLink:(BOOL)arg3;
- (void)reportRichLinkEvent:(id)arg1 cardWrap:(id)arg2;
- (id)getBackgroundColor;
- (id)footnoteDefInfoListForAttachmentView:(id)arg1;
- (id)hostTraceInfoForAttachmentView:(id)arg1;
- (id)reportCommonParamsForAttachmentView:(id)arg1;
- (id)richLinkExposureRegistryForAttachmentView:(id)arg1;
- (void)onAttachmentView:(id)arg1 didTapImage:(id)arg2;
- (BOOL)cbt_openImageGalleryFromAttachment:(id)arg1 cardWrap:(id)arg2 imageIndex:(unsigned long long)arg3 originView:(id)arg4;
- (id)cbt_hostTraceInfo;
- (long long)cbt_hostMessageSvrId;
- (void)cbt_enableCloudPagingForViewer:(id)arg1;
- (id)mdDelegate;
- (void)setMdDelegate:(id)arg1;
- (double)contentWidth;
- (double)contentMaxWidth;
- (void)setContentMaxWidth:(double)arg1;
- (BOOL)selectionEnabled;
- (void)setSelectionEnabled:(BOOL)arg1;
- (BOOL)longPressJustTriggered;
- (void)setLongPressJustTriggered:(BOOL)arg1;
- (id)mTextStorage;
- (void)setMTextStorage:(id)arg1;
- (id)attachmentViewDic;
- (void)setAttachmentViewDic:(id)arg1;
- (id)selectionCoverView;
- (void)setSelectionCoverView:(id)arg1;
- (id)pendingStreamFadeInAttachmentKeys;
- (void)setPendingStreamFadeInAttachmentKeys:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)doubleTapGesture;
- (void)setDoubleTapGesture:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (id)touchLongPressTimer;
- (void)setTouchLongPressTimer:(id)arg1;
- (CGPoint)touchLongPressStartPoint;
- (void)setTouchLongPressStartPoint:(CGPoint)arg1;
- (BOOL)touchLongPressTriggered;
- (void)setTouchLongPressTriggered:(BOOL)arg1;
- (BOOL)isUpdatingSelectionProgrammatically;
- (void)setIsUpdatingSelectionProgrammatically:(BOOL)arg1;
- (id)selectionChangeTimer;
- (void)setSelectionChangeTimer:(id)arg1;
- (BOOL)coopV2HostVisible;
- (void)setCoopV2HostVisible:(BOOL)arg1;
- (_NSRange)highlightedLinkRange;
- (void)setHighlightedLinkRange:(_NSRange)arg1;
- (void)setLinkHighlightLayer:(id)arg1;
- (BOOL)touchStartedOnLink;
- (void)setTouchStartedOnLink:(BOOL)arg1;
- (void).cxx_destruct;
@end
