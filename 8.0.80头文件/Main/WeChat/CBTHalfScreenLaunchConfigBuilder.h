@interface CBTHalfScreenLaunchConfigBuilder : NSObject
+ (id)configWithBusinessId:(id)arg1 reuseKey:(id)arg2 enterScene:(int)arg3;
+ (void)setReportParamsJson:(id)arg1 onConfig:(id)arg2;
+ (void)setUserLocationWithCityName:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 onConfig:(id)arg4;
+ (void)setChatHistoryAuthorization:(int)arg1 onConfig:(id)arg2;
+ (void)setInitialUplinkInputWithItems:(id)arg1 sequenceMode:(int)arg2 onConfig:(id)arg3;
+ (void)setInitialUplinkInputWithItems:(id)arg1 sequenceMode:(int)arg2 deferred:(BOOL)arg3 onConfig:(id)arg4;
+ (void)setReuseUplinkInputWithItems:(id)arg1 sequenceMode:(int)arg2 onConfig:(id)arg3;
+ (void)setReuseUplinkInputWithItems:(id)arg1 sequenceMode:(int)arg2 deferred:(BOOL)arg3 onConfig:(id)arg4;
+ (void)setShortcutsWithTexts:(id)arg1 onConfig:(id)arg2;
+ (void)setShortcutItems:(id)arg1 onConfig:(id)arg2;
+ (void)setLocalShortcutItems:(id)arg1 onConfig:(id)arg2;
+ (void)setBypassDetail:(id)arg1 onItem:(id)arg2;
+ (void)setItemId:(id)arg1 onItem:(id)arg2;
+ (id)textItemWithText:(id)arg1;
+ (id)imageItemWithLocalUris:(id)arg1;
+ (id)fileItemWithLocalUri:(id)arg1 displayName:(id)arg2;
+ (id)xmlCardItemWithMultimodalType:(int)arg1 payloadXml:(id)arg2 cardwrapType:(int)arg3;
+ (id)jsonCardItemWithMultimodalType:(int)arg1 payloadJson:(id)arg2 cardwrapType:(int)arg3;
+ (id)sortedJSONStringFromDictionary:(id)arg1 error:(id *)arg2;
@end
