@interface MMLiteAppPageSheetHalfScreenStatus : NSObject
{
    BOOL _show; // +0x8
    BOOL _didPushSelfInPageSheet; // +0x9
    BOOL _halfOrFullAnimation; // +0xa
    unsigned int _fromLiteAppUuid; // +0xc
    MMPageSheetAdapter * _adapter; // +0x10
    MMLiteAppPageSheetWrapViewController * _pageSheetWrapVC; // +0x18
    MMLiteAppViewController * _liteAppVC; // +0x20
    id <MMLiteAppHalfScreenStatusChangeListener> _statusChangeListener; // +0x28
    UIPanGestureRecognizer * _flutterPanGestureRecognizer; // +0x30
    id /* block */ _halfScreenClosed; // +0x38
    unsigned long long _fromLitePageId; // +0x40
}
- (BOOL)show;
- (void)setShow:(BOOL)arg1;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (id)pageSheetWrapVC;
- (void)setPageSheetWrapVC:(id)arg1;
- (id)liteAppVC;
- (void)setLiteAppVC:(id)arg1;
- (id)statusChangeListener;
- (void)setStatusChangeListener:(id)arg1;
- (id)flutterPanGestureRecognizer;
- (void)setFlutterPanGestureRecognizer:(id)arg1;
- (BOOL)didPushSelfInPageSheet;
- (void)setDidPushSelfInPageSheet:(BOOL)arg1;
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
