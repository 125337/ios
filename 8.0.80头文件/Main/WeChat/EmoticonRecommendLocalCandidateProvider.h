@interface EmoticonRecommendLocalCandidateProvider : NSObject
- (id)candidatesForChatName:(id)arg1 chatNames:(id)arg2;
- (unsigned long long)remainCountWithPickedMd5s:(id)arg1;
- (id)pickMd5s:(id)arg1 count:(unsigned long long)arg2 excludedMd5s:(id)arg3;
@end
