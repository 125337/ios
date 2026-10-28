@interface WCVideoProducerTemplateOperationContext : NSObject
{
    long long _belonger; // +0x8
    NSMutableArray * _providedTemplateList; // +0x10
    OrderedDictionary * _showedTemplateListMap; // +0x18
    NSMutableArray * _templateOperationList; // +0x20
    WCVideoProducerTemplatePlayingOperation * _currentTemplateOperation; // +0x28
}
- (id)initWithBelonger:(long long)arg1;
- (void)dealloc;
- (BOOL)isActive;
- (void)didProvideTemplate:(id)arg1;
- (void)didShowTemplate:(id)arg1 atIndex:(long long)arg2;
- (void)didSelectTemplate:(id)arg1 atIndex:(long long)arg2;
- (void)didStartPlayingSelectedTemplateWithDuration:(struct)arg1;
- (void)didStopPlayingSelectedTemplate;
- (void)didSwitchBGM:(BOOL)arg1;
- (void)didSwitchOST:(BOOL)arg1;
- (void)didCheckJumpToMJAppRegular:(long long)arg1;
- (void)didClickLaunchMJApp;
- (void)didLaunchMJApp;
- (void)didShowMusic:(id)arg1 atIndex:(long long)arg2;
- (void)didSelectMusic:(id)arg1 atIndex:(long long)arg2;
- (void)didStartPlayingSelectedMusic;
- (void)didFetchExtRecommendMusicWithRequestID:(unsigned long long)arg1;
- (void)didEnterSearchingMusic;
- (void)didExitSearchingMusic;
- (void)didSearchMusicByKey:(id)arg1;
- (void)didShowMusicSearchResult:(id)arg1 atIndex:(long long)arg2;
- (void)didSelectMusicSearchResult:(id)arg1 atIndex:(long long)arg2;
- (void)didStartPlayingSelectedSearchResultMusic;
- (void)didStopPlayingMusicSearchResult;
- (void)didStartEditingSegmentWithTemplateInfo:(id)arg1;
- (void)didStopEditingSegment;
- (void)didFinishEditingAsset:(id)arg1 withClipSegment:(id)arg2 atIndex:(long long)arg3;
- (void)didCancelEditingAsset:(id)arg1 withClipSegment:(id)arg2 atIndex:(long long)arg3;
- (long long)belonger;
- (void)setBelonger:(long long)arg1;
- (id)providedTemplateList;
- (void)setProvidedTemplateList:(id)arg1;
- (id)showedTemplateListMap;
- (void)setShowedTemplateListMap:(id)arg1;
- (id)templateOperationList;
- (void)setTemplateOperationList:(id)arg1;
- (id)currentTemplateOperation;
- (void)setCurrentTemplateOperation:(id)arg1;
- (void).cxx_destruct;
@end
