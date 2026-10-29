@interface WCAdExpressionCanvasHalfScreenJumpInfo : NSObject
{
    BOOL _isHalfScreen; // +0x8
    BOOL _shouldCheckHalfScreenDelegate; // +0x9
    BOOL _shouldForbidPanUpGesture; // +0xa
    BOOL _bulletCommentSwitch; // +0xb
    UIViewController * _halfScreenFromVC; // +0x10
    id <WCCanvasHalfScreenViewControllerDelegate> _halfScreenDelegate; // +0x18
    WCFinderFeedContentVM * _halfScreenFinderFeedContentVM; // +0x20
    double _halfScreenHeightRatio; // +0x28
}
- (double)halfScreenHeightRatio;
- (BOOL)isHalfScreen;
- (void)setIsHalfScreen:(BOOL)arg1;
- (id)halfScreenFromVC;
- (void)setHalfScreenFromVC:(id)arg1;
- (id)halfScreenDelegate;
- (void)setHalfScreenDelegate:(id)arg1;
- (BOOL)shouldCheckHalfScreenDelegate;
- (void)setShouldCheckHalfScreenDelegate:(BOOL)arg1;
- (id)halfScreenFinderFeedContentVM;
- (void)setHalfScreenFinderFeedContentVM:(id)arg1;
- (void)setHalfScreenHeightRatio:(double)arg1;
- (BOOL)shouldForbidPanUpGesture;
- (void)setShouldForbidPanUpGesture:(BOOL)arg1;
- (BOOL)bulletCommentSwitch;
- (void)setBulletCommentSwitch:(BOOL)arg1;
- (void).cxx_destruct;
@end

