@interface WAAppOpenSheetModeParameter : MMObject
{
    BOOL _m_bEmbedModeAllowFullScreen; // +0x8
    BOOL _m_bShouldForbidExitWhenTapBackground; // +0x9
    BOOL _m_bShouldPassEventToViewUnderneathWhenTapBackground; // +0xa
    BOOL _m_bShouldBlurBackground; // +0xb
    BOOL _m_bEnableExpandToStatusBarTop; // +0xc
    BOOL _m_bEnableExpandGesture; // +0xd
    BOOL _m_bForbidExpandDragUpGesture; // +0xe
    BOOL _m_bForbidPageContentExpandDragUpGesture; // +0xf
    BOOL _m_bForbidExpandTapGesture; // +0x10
    BOOL _m_bEnableRecoverGestureAfterExpand; // +0x11
    BOOL _m_bEnableExpandGestureOnEveryPage; // +0x12
    BOOL _m_bShowDraggingBar; // +0x13
    BOOL _m_bForceShowCapsuleMenuWhileShowingDraggingBar; // +0x14
    unsigned long long _m_uDismissTypeWhenTapBackground; // +0x18
    double _m_fHeight; // +0x20
    double _m_fExpandedHeight; // +0x28
    unsigned long long _m_uRectCorner; // +0x30
    double _m_fCornerRadius; // +0x38
    UIColor * _m_oSheetBackgroundColor; // +0x40
    NSString * _m_nsHeaderTipsText; // +0x48
    id /* block */ _m_headerTipsDidShowBlock; // +0x50
    id /* block */ _m_headerTipsDidClickCloseBlock; // +0x58
    CGSize _m_fSize; // +0x60
    CGSize _m_fSizeInLandscape; // +0x70
}
- (BOOL)m_bEmbedModeAllowFullScreen;
- (void)setM_bEmbedModeAllowFullScreen:(BOOL)arg1;
- (BOOL)m_bShouldForbidExitWhenTapBackground;
- (void)setM_bShouldForbidExitWhenTapBackground:(BOOL)arg1;
- (unsigned long long)m_uDismissTypeWhenTapBackground;
- (void)setM_uDismissTypeWhenTapBackground:(unsigned long long)arg1;
- (BOOL)m_bShouldPassEventToViewUnderneathWhenTapBackground;
- (void)setM_bShouldPassEventToViewUnderneathWhenTapBackground:(BOOL)arg1;
- (BOOL)m_bShouldBlurBackground;
- (void)setM_bShouldBlurBackground:(BOOL)arg1;
- (double)m_fHeight;
- (void)setM_fHeight:(double)arg1;
- (CGSize)m_fSize;
- (void)setM_fSize:(CGSize)arg1;
- (double)m_fExpandedHeight;
- (void)setM_fExpandedHeight:(double)arg1;
- (BOOL)m_bEnableExpandToStatusBarTop;
- (void)setM_bEnableExpandToStatusBarTop:(BOOL)arg1;
- (CGSize)m_fSizeInLandscape;
- (void)setM_fSizeInLandscape:(CGSize)arg1;
- (unsigned long long)m_uRectCorner;
- (void)setM_uRectCorner:(unsigned long long)arg1;
- (double)m_fCornerRadius;
- (void)setM_fCornerRadius:(double)arg1;
- (BOOL)m_bEnableExpandGesture;
- (void)setM_bEnableExpandGesture:(BOOL)arg1;
- (BOOL)m_bForbidExpandDragUpGesture;
- (void)setM_bForbidExpandDragUpGesture:(BOOL)arg1;
- (BOOL)m_bForbidPageContentExpandDragUpGesture;
- (void)setM_bForbidPageContentExpandDragUpGesture:(BOOL)arg1;
- (BOOL)m_bForbidExpandTapGesture;
- (void)setM_bForbidExpandTapGesture:(BOOL)arg1;
- (BOOL)m_bEnableRecoverGestureAfterExpand;
- (void)setM_bEnableRecoverGestureAfterExpand:(BOOL)arg1;
- (BOOL)m_bEnableExpandGestureOnEveryPage;
- (void)setM_bEnableExpandGestureOnEveryPage:(BOOL)arg1;
- (id)m_oSheetBackgroundColor;
- (void)setM_oSheetBackgroundColor:(id)arg1;
- (BOOL)m_bShowDraggingBar;
- (void)setM_bShowDraggingBar:(BOOL)arg1;
- (BOOL)m_bForceShowCapsuleMenuWhileShowingDraggingBar;
- (void)setM_bForceShowCapsuleMenuWhileShowingDraggingBar:(BOOL)arg1;
- (id)m_nsHeaderTipsText;
- (void)setM_nsHeaderTipsText:(id)arg1;
- (id /* block */)m_headerTipsDidShowBlock;
- (void)setM_headerTipsDidShowBlock:(id /* block */)arg1;
- (id /* block */)m_headerTipsDidClickCloseBlock;
- (void)setM_headerTipsDidClickCloseBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

