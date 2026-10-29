@interface WATaskBarPlaceholderCache : NSObject
+ (id)sharedInstance;
- (id)mmkv;
- (long long)nowTimestamp;
- (void)savePlaceholder:(id)arg1 displayQuery:(id)arg2 mixerCommonContext:(id)arg3 guideMixerCommonContext:(id)arg4 docInfo:(id)arg5 searchId:(id)arg6 requestId:(id)arg7 cacheSeconds:(unsigned int)arg8;
- (id)query;
- (id)displayQuery;
- (id)mixerCommonContext;
- (id)guideMixerCommonContext;
- (id)docInfo;
- (id)searchId;
- (id)requestId;
- (void)updateStyleIsLight:(BOOL)arg1 isAlignLeft:(BOOL)arg2;
- (BOOL)isLight;
- (BOOL)isAlignLeft;
- (void)updateDefaultWording:(id)arg1;
- (id)defaultWording;
- (void)markConsumed;
- (BOOL)isRequestIntervalValid;
- (BOOL)isExposureValid;
- (BOOL)isConsumed;
- (void)clear;
@end
