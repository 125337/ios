@interface MJCaptionManager : NSObject
+ (BOOL)saveCaptionGroups:(id)arg1 withAudioID:(id)arg2;
+ (id)loadCaptionGroupsWithAudioID:(id)arg1;
+ (void)clearCaptionCache;
@end
