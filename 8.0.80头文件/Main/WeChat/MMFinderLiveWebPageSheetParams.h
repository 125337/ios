@interface MMFinderLiveWebPageSheetParams : NSObject
{
    BOOL _showDislike; // +0x8
    BOOL _supportSharing; // +0x9
    BOOL _overrideCache; // +0xa
    BOOL _supportLandsacpe; // +0xb
    BOOL _forbidAutoUpateTitle; // +0xc
    BOOL _navHidden; // +0xd
    BOOL _showFromRightToLeftAtLandscape; // +0xe
    BOOL _fixOrientation; // +0xf
    BOOL _restrictVideoRect; // +0x10
    NSString * _uri; // +0x18
    double _screenRatio; // +0x20
    UIViewController * _fromVc; // +0x28
    UIColor * _navButtonTintColor; // +0x30
}
+ (id)paramsWithUri:(id)arg1 showDislike:(BOOL)arg2 supportSharing:(BOOL)arg3;
+ (id)paramsWithUri:(id)arg1 showDislike:(BOOL)arg2 supportSharing:(BOOL)arg3 screenRatio:(double)arg4;
+ (id)paramsWithUri:(id)arg1 showDislike:(BOOL)arg2 supportSharing:(BOOL)arg3 screenRatio:(double)arg4 overrideCache:(BOOL)arg5;
- (BOOL)isEqual:(id)arg1;
- (id)uri;
- (void)setUri:(id)arg1;
- (BOOL)showDislike;
- (void)setShowDislike:(BOOL)arg1;
- (BOOL)supportSharing;
- (void)setSupportSharing:(BOOL)arg1;
- (double)screenRatio;
- (void)setScreenRatio:(double)arg1;
- (BOOL)overrideCache;
- (void)setOverrideCache:(BOOL)arg1;
- (id)fromVc;
- (void)setFromVc:(id)arg1;
- (BOOL)supportLandsacpe;
- (void)setSupportLandsacpe:(BOOL)arg1;
- (BOOL)forbidAutoUpateTitle;
- (void)setForbidAutoUpateTitle:(BOOL)arg1;
- (BOOL)navHidden;
- (void)setNavHidden:(BOOL)arg1;
- (BOOL)showFromRightToLeftAtLandscape;
- (void)setShowFromRightToLeftAtLandscape:(BOOL)arg1;
- (id)navButtonTintColor;
- (void)setNavButtonTintColor:(id)arg1;
- (BOOL)fixOrientation;
- (void)setFixOrientation:(BOOL)arg1;
- (BOOL)restrictVideoRect;
- (void)setRestrictVideoRect:(BOOL)arg1;
- (void).cxx_destruct;
@end
