@interface MMBGMSelectedTemplateTabViewModel : MMBGMSelectedTabViewModel
{
    NSString * _templateID; // +0x8
    OrderedDictionary * _musicInfoDictionary; // +0x10
}
- (id)initWithTemplateID:(id)arg1 musicInfos:(id)arg2;
- (unsigned long long)dataCount;
- (void)loadMoreData;
- (BOOL)hasMoreData;
- (id)dataAtIndex:(unsigned long long)arg1;
- (void)addMusicData:(id)arg1;
- (void)setMusicDataToFirst:(id)arg1;
- (unsigned long long)indexOfMusicInfo:(id)arg1;
- (void)addMusicInfos:(id)arg1;
- (BOOL)isReccommentdTabModel;
- (void)videoProducerViewModel:(id)arg1 didGetExtRecommendMusics:(id)arg2 forTemplateID:(id)arg3;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (id)musicInfoDictionary;
- (void)setMusicInfoDictionary:(id)arg1;
- (void).cxx_destruct;
@end

