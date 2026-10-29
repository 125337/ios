@interface MMFinderLiveGameStartParamModel : NSObject
{
    int _wxaGameLiveScene; // +0x8
    long long _entryScene; // +0x10
    NSString * _appId; // +0x18
    MMFinderLiveGameUserInfo * _gameUserInfo; // +0x20
}
- (id)initWithAppId:(id)arg1 gameLiveEntryScene:(long long)arg2;
- (long long)entryScene;
- (void)setEntryScene:(long long)arg1;
- (int)wxaGameLiveScene;
- (void)setWxaGameLiveScene:(int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)gameUserInfo;
- (void)setGameUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
