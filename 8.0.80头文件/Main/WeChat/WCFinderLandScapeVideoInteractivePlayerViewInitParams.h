@interface WCFinderLandScapeVideoInteractivePlayerViewInitParams : NSObject
{
    BOOL _canShowOuterProgressBar; // +0x8
    BOOL _canShowContinuePlayTips; // +0x9
    BOOL _allowScaleAspectFit; // +0xa
    BOOL _enterFromMinimize; // +0xb
    long long _autoPip; // +0x10
}
- (BOOL)canShowOuterProgressBar;
- (void)setCanShowOuterProgressBar:(BOOL)arg1;
- (BOOL)canShowContinuePlayTips;
- (void)setCanShowContinuePlayTips:(BOOL)arg1;
- (BOOL)allowScaleAspectFit;
- (void)setAllowScaleAspectFit:(BOOL)arg1;
- (BOOL)enterFromMinimize;
- (void)setEnterFromMinimize:(BOOL)arg1;
- (long long)autoPip;
- (void)setAutoPip:(long long)arg1;
@end
