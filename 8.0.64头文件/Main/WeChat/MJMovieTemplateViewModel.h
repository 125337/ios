@interface MJMovieTemplateViewModel : WCVideoProducerViewModel
{
    OMJPublisherSessionMetrics * _publisherSessionMetrics; // +0x8
    MJPublisherContext * _publisherContext; // +0x10
    OrderedDictionary * _showedTemplateListMap; // +0x18
}
- (id)initWithAssetInfoList:(id)arg1 options:(id)arg2;
- (void)didShowTemplate:(id)arg1 atIndex:(long long)arg2 fromBelonger:(long long)arg3;
- (void)_reportExposeTemplate:(id)arg1 atIndex:(long long)arg2;
- (void)didSelectTemplate:(id)arg1 atIndex:(long long)arg2 fromBelonger:(long long)arg3;
- (void)didSwitchBGM:(BOOL)arg1 fromBelonger:(long long)arg2;
- (void)didSwitchOST:(BOOL)arg1 fromBelonger:(long long)arg2;
- (void)didSelectMusic:(id)arg1 atIndex:(long long)arg2 fromBelonger:(long long)arg3;
- (void)didEnterSearchingMusic;
- (void)didSelectMusicSearchResult:(id)arg1 atIndex:(long long)arg2;
- (void)didStartEditingSegmentWithTemplateInfo:(id)arg1;
- (void)didExportWithTemplateInfo:(id)arg1 musicInfo:(id)arg2;
- (id)publisherSessionMetrics;
- (void)setPublisherSessionMetrics:(id)arg1;
- (id)publisherContext;
- (void)setPublisherContext:(id)arg1;
- (id)showedTemplateListMap;
- (void)setShowedTemplateListMap:(id)arg1;
- (void).cxx_destruct;
@end
