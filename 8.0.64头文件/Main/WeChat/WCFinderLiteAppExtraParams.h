@interface WCFinderLiteAppExtraParams : NSObject
{
    BOOL _enableDragToFullScreenInHalfScreen; // +0x8
    BOOL _m_bEnableExpandToStatusBarTop; // +0x9
    id /* block */ _onDispatch; // +0x10
    id /* block */ _onHalfCloseAction; // +0x18
    NSDictionary * _liteAppStoreDataDict; // +0x20
    id /* block */ _openResultBlock; // +0x28
    id <MMLiteAppHalfScreenStatusChangeListener> _halfScreenStatusChangeListener; // +0x30
}
- (id /* block */)onDispatch;
- (void)setOnDispatch:(id /* block */)arg1;
- (id /* block */)onHalfCloseAction;
- (void)setOnHalfCloseAction:(id /* block */)arg1;
- (id)liteAppStoreDataDict;
- (void)setLiteAppStoreDataDict:(id)arg1;
- (id /* block */)openResultBlock;
- (void)setOpenResultBlock:(id /* block */)arg1;
- (BOOL)enableDragToFullScreenInHalfScreen;
- (void)setEnableDragToFullScreenInHalfScreen:(BOOL)arg1;
- (BOOL)m_bEnableExpandToStatusBarTop;
- (void)setM_bEnableExpandToStatusBarTop:(BOOL)arg1;
- (id)halfScreenStatusChangeListener;
- (void)setHalfScreenStatusChangeListener:(id)arg1;
- (void).cxx_destruct;
@end
