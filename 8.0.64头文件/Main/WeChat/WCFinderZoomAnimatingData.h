@interface WCFinderZoomAnimatingData : NSObject
{
    BOOL _closeDirectly; // +0x8
    WCFinderTransitionUserInfo * _userInfo; // +0x10
    UIView * _snapView; // +0x18
    double _snapCornerRadius; // +0x20
    UIView * _snapContainer; // +0x28
    UIView * _maskView; // +0x30
    CGRect _snapOriginFrame; // +0x38
}
- (void)dealloc;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)snapView;
- (void)setSnapView:(id)arg1;
- (CGRect)snapOriginFrame;
- (void)setSnapOriginFrame:(CGRect)arg1;
- (double)snapCornerRadius;
- (void)setSnapCornerRadius:(double)arg1;
- (id)snapContainer;
- (void)setSnapContainer:(id)arg1;
- (id)maskView;
- (void)setMaskView:(id)arg1;
- (BOOL)closeDirectly;
- (void)setCloseDirectly:(BOOL)arg1;
- (void).cxx_destruct;
@end
