@interface VideoRingNetProvider : NSObject
- (id)searchMusicRingWithQuery:(id)arg1 offset:(unsigned int)arg2 searchID:(unsigned long long)arg3;
- (id)setRingToneWithType:(unsigned long long)arg1 ring:(id)arg2 userName:(id)arg3 op:(unsigned long long)arg4 scene:(unsigned long long)arg5 extraInfo:(id)arg6;
- (id)setMessageRingType:(unsigned int)arg1;
- (id)promiseAllExclusiveRingsWithSequence:(unsigned long long)arg1;
- (id)fetchRingToneDetailForFriend:(id)arg1 selfIsCaller:(BOOL)arg2;
- (id)fillUpFinderItemForRing:(id)arg1 useCache:(BOOL)arg2;
- (id)getMyGlobalRingTone;
- (id)applyRingToneProcess:(unsigned long long)arg1 withRing:(id)arg2;
@end
