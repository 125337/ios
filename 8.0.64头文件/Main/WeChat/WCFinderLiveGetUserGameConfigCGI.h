@interface WCFinderLiveGetUserGameConfigCGI : WCFinderLiveBaseCgi
{
    BOOL _onlyNeedPlayTogetherInfo; // +0x8
    unsigned int _opensdkVersion; // +0xc
    unsigned int _platformId; // +0x10
    int _liveScene; // +0x14
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
    NSString * _finderUsername; // +0x28
    NSString * _appId; // +0x30
    NSString * _extraAntiInfo; // +0x38
    NSString * _gameUserId; // +0x40
    PagingGetGamePlayTogetherDynamicItem * _pagingGetDynamicItem; // +0x48
    FinderLiveGetUserGameConfigRequest_GameCategoryInfo * _gameCategoryInfo; // +0x50
}
- (id)initWithFinderUsername:(id)arg1 appId:(id)arg2 liveScene:(int)arg3 extraAntiInfo:(id)arg4 opensdkVersion:(unsigned int)arg5 platformId:(unsigned int)arg6 gameUserId:(id)arg7 onlyNeedPlayTogetherInfo:(BOOL)arg8 pagingGetDynamicItem:(id)arg9 gameCategoryInfo:(id)arg10 successBlock:(id /* block */)arg11 failBlock:(id /* block */)arg12;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)extraAntiInfo;
- (void)setExtraAntiInfo:(id)arg1;
- (unsigned int)opensdkVersion;
- (void)setOpensdkVersion:(unsigned int)arg1;
- (unsigned int)platformId;
- (void)setPlatformId:(unsigned int)arg1;
- (id)gameUserId;
- (void)setGameUserId:(id)arg1;
- (int)liveScene;
- (void)setLiveScene:(int)arg1;
- (BOOL)onlyNeedPlayTogetherInfo;
- (void)setOnlyNeedPlayTogetherInfo:(BOOL)arg1;
- (id)pagingGetDynamicItem;
- (void)setPagingGetDynamicItem:(id)arg1;
- (id)gameCategoryInfo;
- (void)setGameCategoryInfo:(id)arg1;
- (void).cxx_destruct;
@end
