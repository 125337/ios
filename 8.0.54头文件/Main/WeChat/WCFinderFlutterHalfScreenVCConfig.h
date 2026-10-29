@interface WCFinderFlutterHalfScreenVCConfig : NSObject
{
    NSString * _router; // +0x8
    NSDictionary * _params; // +0x10
    NSArray * _plugins; // +0x18
    long long _closeBtnStyle; // +0x20
    UIColor * _backgroundColor; // +0x28
    double _halfScreenHeight; // +0x30
    double _halfScreenHeightRatio; // +0x38
    double _halfScreenMaxHeightRatio; // +0x40
    id /* block */ _afterFlutterUISetup; // +0x48
}
- (id)init;
- (id)router;
- (void)setRouter:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)plugins;
- (void)setPlugins:(id)arg1;
- (long long)closeBtnStyle;
- (void)setCloseBtnStyle:(long long)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (double)halfScreenHeight;
- (void)setHalfScreenHeight:(double)arg1;
- (double)halfScreenHeightRatio;
- (void)setHalfScreenHeightRatio:(double)arg1;
- (double)halfScreenMaxHeightRatio;
- (void)setHalfScreenMaxHeightRatio:(double)arg1;
- (id /* block */)afterFlutterUISetup;
- (void)setAfterFlutterUISetup:(id /* block */)arg1;
- (void).cxx_destruct;
@end

