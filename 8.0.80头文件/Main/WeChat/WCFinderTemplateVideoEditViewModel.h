@interface WCFinderTemplateVideoEditViewModel : NSObject
{
    BOOL _onlyImageEdit; // +0x8
    MJTemplateMovieSession * _templateSession; // +0x10
    NSString * _firstVideoPath; // +0x18
    OMJMovieOptions * _movieOptions; // +0x20
    NSMutableArray * _musicInfos; // +0x28
    NSArray * _assetInfos; // +0x30
    NSArray * _templateInfos; // +0x38
}
+ (id)genOutputParmsWithTemplateInfo:(id)arg1 musicInfo:(id)arg2;
+ (id)movieOptionsWithLyricEnable:(BOOL)arg1 ostMuted:(BOOL)arg2 bgmMuted:(BOOL)arg3;
- (id)initWithMaterialInfos:(id)arg1 firstVideoPath:(id)arg2;
- (id)templateSession;
- (void)destroyTemplateSession;
- (BOOL)hasStartUpMaasSession;
- (void)startUpMaasSessionWithCompletionBlock:(id /* block */)arg1;
- (void)startBlankMoiveCreationAndFetchFromWeChatSvrWithProgressBlock:(id /* block */)arg1 movieCompletionBlock:(id /* block */)arg2 recommendTemplateFetchCompletionBlock:(id /* block */)arg3;
- (void)startBlankMoiveCreationAndFetchRecTemplateProgressBlock:(id /* block */)arg1 movieCompletionBlock:(id /* block */)arg2 needRecommendTemplate:(BOOL)arg3 recommendTemplateFetchCompletionBlock:(id /* block */)arg4;
- (void)startMoiveCreationAndFetchRecTemplateProgressBlock:(id /* block */)arg1 recommendTemplateFetchCompletionBlock:(id /* block */)arg2;
- (void)genNotUseVideoTemplateAndLoadingTemplateWithCompletionBlock:(id /* block */)arg1;
- (BOOL)hasLoadingTemplate;
- (void)startMoiveCreationWithTemplateId:(id)arg1 musicId:(id)arg2 progressBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (void)startMoiveCreationWithTemplateId:(id)arg1 musicIds:(id)arg2 progressBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (id)renderView;
- (void)startPlayWithCompletionBlock:(id /* block */)arg1;
- (void)startExportingWithProgressBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)cancelExportingWithCompletion:(id /* block */)arg1;
- (void)stopPlayWithCompletionBlock:(id /* block */)arg1;
- (void)cleanUpWithCompletionBlock:(id /* block */)arg1;
- (id)currentMovieOptions;
- (id)emptyTemplateMovieOptions;
- (id)finderDefaultTemplateMovieOptions;
- (void)updateMovieOptions:(id)arg1;
- (void)setBGMMuted:(BOOL)arg1;
- (void)setStateOfOST:(BOOL)arg1 bgm:(BOOL)arg2 lyricEnable:(BOOL)arg3;
- (BOOL)isLyricEnable;
- (BOOL)isOSTMuted;
- (BOOL)isBGMMuted;
- (id)musicInfos;
- (id)genMutableArrayWithArray:(id)arg1;
- (unsigned long long)musicCount;
- (id)musicInfoAtIndex:(unsigned long long)arg1;
- (void)safeInsertMusicToFront:(id)arg1;
- (unsigned long long)templateCount;
- (id)templateInfoAtIndex:(unsigned long long)arg1;
- (id)templateIdAtIndex:(unsigned long long)arg1;
- (long long)musicIndexOfMusicId:(id)arg1;
- (void)changeMusicInfo:(id)arg1 progressBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)changeMusicInfo:(id)arg1 isBgmMuted:(BOOL)arg2 progressBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)changeMusicInfo:(id)arg1 option:(id)arg2 progressBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)changeTemplateWithTemplate:(id)arg1 progressBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)changeTemplateWithTemplate:(id)arg1 musicID:(id)arg2 progressBlock:(id /* block */)arg3 completion:(id /* block */)arg4;
- (id)assetInfosWithMaterialInfos:(id)arg1;
- (void)setTemplateSession:(id)arg1;
- (id)firstVideoPath;
- (void)setFirstVideoPath:(id)arg1;
- (id)movieOptions;
- (void)setMovieOptions:(id)arg1;
- (void)setMusicInfos:(id)arg1;
- (id)assetInfos;
- (void)setAssetInfos:(id)arg1;
- (id)templateInfos;
- (void)setTemplateInfos:(id)arg1;
- (BOOL)onlyImageEdit;
- (void)setOnlyImageEdit:(BOOL)arg1;
- (void).cxx_destruct;
@end
