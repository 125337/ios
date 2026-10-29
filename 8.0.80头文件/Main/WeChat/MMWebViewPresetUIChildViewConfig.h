@interface MMWebViewPresetUIChildViewConfig : MMObject
{
    BOOL _isShowProgress; // +0x8
    BOOL _isAccessAllJsApiInvocation; // +0x9
    BOOL _isAllowWebviewLongPressGesture; // +0xa
    BOOL _disableNavigationErrorView; // +0xb
    BOOL _isWebviewHandleTopBarEvent; // +0xc
    BOOL _disableFixWebviewY; // +0xd
    BOOL _forbidSetTailBgView; // +0xe
    BOOL _useDefaultTitleAndSubTitleHost; // +0xf
    BOOL _useBottomBar; // +0x10
    id <MMWebViewPresetUIChildViewDelegate> _delegate; // +0x18
}
- (BOOL)isShowProgress;
- (void)setIsShowProgress:(BOOL)arg1;
- (BOOL)isAccessAllJsApiInvocation;
- (void)setIsAccessAllJsApiInvocation:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isAllowWebviewLongPressGesture;
- (void)setIsAllowWebviewLongPressGesture:(BOOL)arg1;
- (BOOL)disableNavigationErrorView;
- (void)setDisableNavigationErrorView:(BOOL)arg1;
- (BOOL)isWebviewHandleTopBarEvent;
- (void)setIsWebviewHandleTopBarEvent:(BOOL)arg1;
- (BOOL)disableFixWebviewY;
- (void)setDisableFixWebviewY:(BOOL)arg1;
- (BOOL)forbidSetTailBgView;
- (void)setForbidSetTailBgView:(BOOL)arg1;
- (BOOL)useDefaultTitleAndSubTitleHost;
- (void)setUseDefaultTitleAndSubTitleHost:(BOOL)arg1;
- (BOOL)useBottomBar;
- (void)setUseBottomBar:(BOOL)arg1;
- (void).cxx_destruct;
@end
