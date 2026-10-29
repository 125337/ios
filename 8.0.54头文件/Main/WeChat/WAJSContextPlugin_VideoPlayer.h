@interface WAJSContextPlugin_VideoPlayer : WAJSContextPluginBase
{
    WAPluginComponent_VideoPlayer * _sysCoverViewVideoComponent; // +0x8
    WAPluginComponent_VideoPlayer * _splashAdVideoComponent; // +0x10
}
- (id)init;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (id)insertVideo:(id)arg1 pos:(CGRect)arg2 videoId:(unsigned int)arg3 parentId:(unsigned int)arg4 referrerPolicyType:(unsigned long long)arg5 backgroundColor:(id)arg6 dest:(long long)arg7;
- (id)getVideoPlayer:(unsigned int)arg1 dest:(long long)arg2;
- (id)getVolumeSliderWithDest:(long long)arg1;
- (BOOL)operateVideoPlayer:(id)arg1 videoId:(unsigned int)arg2;
- (id)getCurrentSnapshotWithDest:(long long)arg1;
- (void)disableFullScreenWithDest:(long long)arg1;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2 dest:(long long)arg3;
- (BOOL)removeVideoPlayer:(unsigned int)arg1 dest:(long long)arg2;
- (id)getVideoComponentWithDest:(long long)arg1;
- (id)sysCoverViewVideoComponent;
- (void)setSysCoverViewVideoComponent:(id)arg1;
- (id)splashAdVideoComponent;
- (void)setSplashAdVideoComponent:(id)arg1;
- (void).cxx_destruct;
@end

