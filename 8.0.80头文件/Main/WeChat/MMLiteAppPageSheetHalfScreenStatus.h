@interface MMLiteAppPageSheetHalfScreenStatus : NSObject <MMPageSheetAdapterDelegate>
{
    BOOL _show; // +0x8
    BOOL _closedLiteApp; // +0x9
    BOOL _didPushSelfInPageSheet; // +0xa
    BOOL _closingPageSheet; // +0xb
    BOOL _closingLiteAppContent; // +0xc
    BOOL _halfOrFullAnimation; // +0xd
    unsigned int _fromLiteAppUuid; // +0x10
    MMPageSheetAdapter * _adapter; // +0x18
    MMLiteAppPageSheetWrapViewController * _pageSheetWrapVC; // +0x20
    MMLiteAppViewController * _liteAppVC; // +0x28
    LiteAppHalfScreenConfig * _halfScreenConfig; // +0x30
    id <MMLiteAppHalfScreenStatusChangeListener> _statusChangeListener; // +0x38
    UIPanGestureRecognizer * _flutterPanGestureRecognizer; // +0x40
    id /* block */ _halfScreenClosed; // +0x48
    unsigned long long _fromLitePageId; // +0x50
}
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetPresentAnimateWillBegin:(id)arg1;
- (void)pageSheetPresentAnimateDidEnd:(id)arg1;
- (void)pageSheetDidChangeVisibleHeight:(id)arg1 toHeight:(double)arg2;
- (void)pageSheetDidRotation:(id)arg1;
- (double)pageSheetContentWidth;
- (BOOL)show;
- (void)setShow:(BOOL)arg1;
- (BOOL)closedLiteApp;
- (void)setClosedLiteApp:(BOOL)arg1;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (id)pageSheetWrapVC;
- (void)setPageSheetWrapVC:(id)arg1;
- (id)liteAppVC;
- (void)setLiteAppVC:(id)arg1;
- (id)halfScreenConfig;
- (void)setHalfScreenConfig:(id)arg1;
- (id)statusChangeListener;
- (void)setStatusChangeListener:(id)arg1;
- (id)flutterPanGestureRecognizer;
- (void)setFlutterPanGestureRecognizer:(id)arg1;
- (BOOL)didPushSelfInPageSheet;
- (void)setDidPushSelfInPageSheet:(BOOL)arg1;
- (BOOL)closingPageSheet;
- (void)setClosingPageSheet:(BOOL)arg1;
- (BOOL)closingLiteAppContent;
- (void)setClosingLiteAppContent:(BOOL)arg1;
- (id /* block */)halfScreenClosed;
- (void)setHalfScreenClosed:(id /* block */)arg1;
- (BOOL)halfOrFullAnimation;
- (void)setHalfOrFullAnimation:(BOOL)arg1;
- (unsigned int)fromLiteAppUuid;
- (void)setFromLiteAppUuid:(unsigned int)arg1;
- (unsigned long long)fromLitePageId;
- (void)setFromLitePageId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
