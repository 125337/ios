@interface MVPlayerPluginFetchRecommendList : MVPlayerBasePlugin <MMMusicLiveCGIMgrDelegate>
{
    MMMusicLiveCGIMgr * _musicLiveCgiManager; // +0x8
}
- (void)executeWithEvent:(unsigned long long)arg1;
- (void)fetchRecommendMvList;
- (void)onMusicLiveGetMVRecommentList:(id)arg1 continueFlag:(BOOL)arg2 requestId:(id)arg3;
- (id)musicLiveCgiManager;
- (void)setMusicLiveCgiManager:(id)arg1;
- (void).cxx_destruct;
@end

