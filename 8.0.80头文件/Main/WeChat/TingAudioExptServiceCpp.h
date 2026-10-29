@interface TingAudioExptServiceCpp : UnitRCObjcBaseProxyClass <TingAudioExptService>
+ (id)sharedInstance;
+ (id)sharedInstanceForAudioRadio;
- (void)initOrReload;
- (void)debugSettingValue:(id)arg1 value:(id)arg2;
- (void)debugSettingClear;
- (BOOL)enableAudioRadioSquare;
- (BOOL)enableChannel2DTo1D;
- (BOOL)enableTopLines;
- (BOOL)tingAudioSquareRemove;
- (int)enableRadioTopLineTitle;
- (int)topLinePlayStrategy;
- (int)enableBannerMode;
- (id)getBaseRequest;
@end
