@interface WCFinderMusicEventHeaderRecommendListVM : NSObject
{
    FinderMusicTopicInfo * _musicTopicInfo; // +0x8
}
+ (unsigned long long)dataCountOfMusicTopicInfo:(id)arg1;
+ (unsigned long long)recommendMusicListCountOfMusicTopicInfo:(id)arg1;
+ (unsigned long long)templateListCountOfMusicTopicInfo:(id)arg1;
- (void)updateWithMusicTopicInfo:(id)arg1;
- (unsigned long long)dataCount;
- (unsigned long long)recommendMusicListCount;
- (unsigned long long)templateListCount;
- (id)dataAtIndex:(unsigned long long)arg1;
- (BOOL)isRecommendMusicIndex:(unsigned long long)arg1;
- (id)recommendMusicOfIndex:(unsigned long long)arg1;
- (BOOL)isTemplateIndex:(unsigned long long)arg1;
- (id)musicTopicInfo;
- (void)setMusicTopicInfo:(id)arg1;
- (void).cxx_destruct;
@end

