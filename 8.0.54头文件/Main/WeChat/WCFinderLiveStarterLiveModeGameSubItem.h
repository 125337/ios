@interface WCFinderLiveStarterLiveModeGameSubItem : WCFinderLiveStarterLiveModeSubItem <PBCoding>
{
    NSString * _appId; // +0x68
    long long _gameEntryScene; // +0x70
    MMFinderLiveGameUserInfo * _gameUserInfo; // +0x78
}
+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_subDetail;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_gameEntryScene;
+ (void)PBArrayAdd_gameUserInfo;
+ (void)PBArrayAdd_redDotPath;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)appId;
- (void)setAppId:(id)arg1;
- (long long)gameEntryScene;
- (void)setGameEntryScene:(long long)arg1;
- (id)gameUserInfo;
- (void)setGameUserInfo:(id)arg1;
- (void).cxx_destruct;
@end

