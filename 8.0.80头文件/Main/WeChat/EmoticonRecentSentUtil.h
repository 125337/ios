@interface EmoticonRecentSentUtil : NSObject
+ (unsigned int)_softWindowStartTimeWithSec:(double)arg1;
+ (id)_favMd5Set;
+ (BOOL)_isSelfSentEmojiMsg:(id)arg1;
+ (id)_sampleFromMsg:(id)arg1;
+ (id)_newestFirstSamples:(id)arg1 cap:(unsigned long long)arg2;
+ (id)_cachedSessionCacheForChatName:(id)arg1 owner:(id)arg2;
+ (void)_storeSessionCache:(id)arg1 forChatName:(id)arg2 owner:(id)arg3;
+ (id)_fullScanSessionCache:(id)arg1 deep:(BOOL)arg2 softWindowStartTime:(unsigned int)arg3;
+ (id)_incrementalSessionCache:(id)arg1 chatName:(id)arg2;
+ (id)_sentSamplesInSession:(id)arg1 deep:(BOOL)arg2 softWindowStartTime:(unsigned int)arg3;
+ (id)_rankedFavMd5sFromSamples:(id)arg1 favMd5s:(id)arg2 softWindowStartTime:(unsigned int)arg3;
+ (id)_latestFavMd5sFromSamples:(id)arg1 favMd5s:(id)arg2;
+ (void)sentFavMd5sInSession:(id)arg1 softWindowSec:(double)arg2 outHighFrequencyMd5s:(id *)arg3 outRecentMd5s:(id *)arg4;
+ (id)globalHighFrequencyFavMd5sWithSoftWindowSec:(double)arg1 minSamples:(long long)arg2 chatNames:(id)arg3;
+ (id)lastSentFavMd5sGloballyExcludingMd5s:(id)arg1 limit:(unsigned long long)arg2;
+ (id)recentTextAndEmojiMsgsInSession:(id)arg1 limit:(long long)arg2;
@end
