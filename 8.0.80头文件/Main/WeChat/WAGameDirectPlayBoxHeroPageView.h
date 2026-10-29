@interface WAGameDirectPlayBoxHeroPageView : UIView
{
    BOOL _isDisplayContentPrepared; // +0x8
    BOOL _isMaskVisible; // +0x9
    BOOL _nativeMaskSuppressed; // +0xa
    UIView * _projectionHost; // +0x10
    NSString * _appId; // +0x18
    WAGameDirectPlayBoxMaskPlaceholderConfig * _maskPlaceholderConfig; // +0x20
    UIView * _placeholderView; // +0x28
    WAGameDirectPlayBoxLoadingIndicatorView * _loadingIndicatorView; // +0x30
    UILabel * _placeholderLabel; // +0x38
    WAGameDirectPlayBoxMaskOverlayView * _maskOverlayView; // +0x40
    long long _status; // +0x48
    NSString * _pendingAppName; // +0x50
    NSString * _pendingIconUrl; // +0x58
    NSString * _lastFailReason; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)configWithAppId:(id)arg1 appName:(id)arg2 iconUrl:(id)arg3;
- (BOOL)shouldShowMaskOverlay;
- (void)setNativeMaskSuppressed:(BOOL)arg1;
- (void)setMaskVisible:(BOOL)arg1 reason:(id)arg2;
- (void)setPageStatus:(long long)arg1;
- (void)setTransitionVisible:(BOOL)arg1 reason:(id)arg2;
- (void)ensureDisplayUI;
- (void)destroyDisplayUI;
- (void)prepareForDisplayWithContentReady:(BOOL)arg1;
- (void)recycleOffscreenContent;
- (void)setPageStatus:(long long)arg1 failReason:(id)arg2;
- (void)applyStatusToUI:(long long)arg1 failReason:(id)arg2;
- (id)projectionHost;
- (void)setProjectionHost:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)maskPlaceholderConfig;
- (void)setMaskPlaceholderConfig:(id)arg1;
- (BOOL)isDisplayContentPrepared;
- (void)setIsDisplayContentPrepared:(BOOL)arg1;
- (BOOL)isMaskVisible;
- (void)setIsMaskVisible:(BOOL)arg1;
- (BOOL)nativeMaskSuppressed;
- (id)placeholderView;
- (void)setPlaceholderView:(id)arg1;
- (id)loadingIndicatorView;
- (void)setLoadingIndicatorView:(id)arg1;
- (id)placeholderLabel;
- (void)setPlaceholderLabel:(id)arg1;
- (id)maskOverlayView;
- (void)setMaskOverlayView:(id)arg1;
- (long long)status;
- (void)setStatus:(long long)arg1;
- (id)pendingAppName;
- (void)setPendingAppName:(id)arg1;
- (id)pendingIconUrl;
- (void)setPendingIconUrl:(id)arg1;
- (id)lastFailReason;
- (void)setLastFailReason:(id)arg1;
- (void).cxx_destruct;
@end
