@interface MMFinderLiveModeGameSubItem : MMFinderLiveModeItem <PBCoding>
{
    NSString * _appId; // +0x20
    long long _gameEntryScene; // +0x28
    MMFinderLiveGameUserInfo * _gameUserInfo; // +0x30
}
+ (void)PBArrayAdd_liveMode;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_gameEntryScene;
+ (void)PBArrayAdd_gameUserInfo;
+ (void)initialize;
+ (id)getGameSubModeItems;
+ (id)getGameSubModeItemWithAppId:(id)arg1 gameEntryScene:(long long)arg2;
- (id)getPBPropertyTable;
- (BOOL)isSwitchValid;
- (id)appId;
- (void)setAppId:(id)arg1;
- (long long)gameEntryScene;
- (void)setGameEntryScene:(long long)arg1;
- (id)gameUserInfo;
- (void)setGameUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
