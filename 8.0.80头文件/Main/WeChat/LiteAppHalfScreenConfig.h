@interface LiteAppHalfScreenConfig : NSObject
{
    BOOL _forcePortrait; // +0x8
    BOOL _enableDragToClose; // +0x9
    BOOL _enableDragToFullScreen; // +0xa
    BOOL _hideBgMask; // +0xb
    BOOL _showDragBar; // +0xc
    double _portraitWidthPercent; // +0x10
    double _portraitHeightPercent; // +0x18
    double _landscapeWidthPercent; // +0x20
    double _landscapeHeightPercent; // +0x28
    id /* block */ _whenClosed; // +0x30
    id <MMLiteAppHalfScreenStatusChangeListener> _halfScreenStatusChangeListener; // +0x38
}
- (id)init;
- (double)portraitWidthPercent;
- (void)setPortraitWidthPercent:(double)arg1;
- (double)portraitHeightPercent;
- (void)setPortraitHeightPercent:(double)arg1;
- (double)landscapeWidthPercent;
- (void)setLandscapeWidthPercent:(double)arg1;
- (double)landscapeHeightPercent;
- (void)setLandscapeHeightPercent:(double)arg1;
- (BOOL)forcePortrait;
- (void)setForcePortrait:(BOOL)arg1;
- (BOOL)enableDragToClose;
- (void)setEnableDragToClose:(BOOL)arg1;
- (BOOL)enableDragToFullScreen;
- (void)setEnableDragToFullScreen:(BOOL)arg1;
- (BOOL)hideBgMask;
- (void)setHideBgMask:(BOOL)arg1;
- (BOOL)showDragBar;
- (void)setShowDragBar:(BOOL)arg1;
- (id /* block */)whenClosed;
- (void)setWhenClosed:(id /* block */)arg1;
- (id)halfScreenStatusChangeListener;
- (void)setHalfScreenStatusChangeListener:(id)arg1;
- (void).cxx_destruct;
@end
