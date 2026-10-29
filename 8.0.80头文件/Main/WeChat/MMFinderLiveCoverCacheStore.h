@interface MMFinderLiveCoverCacheStore : NSObject
+ (id)coverImage4Vs3ForTask:(id)arg1;
+ (id)coverImageOriginalForTask:(id)arg1;
+ (void)saveCoverImage4Vs3:(id)arg1 forTask:(id)arg2;
+ (void)saveCoverImageOriginal:(id)arg1 forTask:(id)arg2;
+ (void)clearCoverForTask:(id)arg1;
+ (BOOL)isAudioModeForTask:(id)arg1;
+ (BOOL)isKTVModeForTask:(id)arg1;
+ (id)cover4Vs3PathForIsAudioMode:(BOOL)arg1 isKTVMode:(BOOL)arg2;
+ (id)coverOriginalPathForIsAudioMode:(BOOL)arg1 isKTVMode:(BOOL)arg2;
@end
