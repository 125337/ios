@interface WCFinderLikeEasterEggDataService : NSObject
+ (BOOL)hadShownEducation;
+ (void)setHadShownEducation:(BOOL)arg1;
+ (id)lastUsedEmoticon;
+ (void)setLastUsedEmoticon:(id)arg1;
+ (id)lastUsedEmoticonFeedID;
+ (void)setLastUsedEmoticonFeedID:(id)arg1;
+ (id)config;
+ (id)createLoader;
+ (void)preloadEmoticonForContentVM:(id)arg1;
+ (id)emoticonInfoForContentVM:(id)arg1;
@end
