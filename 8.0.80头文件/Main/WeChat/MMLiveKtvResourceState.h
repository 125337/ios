@interface MMLiveKtvResourceState : NSObject
{
    NSArray * _themes; // +0x8
    NSArray * _reverbs; // +0x10
    MMLiveKtvThemeItem * _currentTheme; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    MMLiveStorageCleanupPinningToken * _themeResourcesPinToken; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)setCurrentTheme:(id)arg1;
- (id)liveTask;
- (id)themes;
- (void)setThemes:(id)arg1;
- (id)reverbs;
- (void)setReverbs:(id)arg1;
- (id)currentTheme;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)themeResourcesPinToken;
- (void)setThemeResourcesPinToken:(id)arg1;
- (void).cxx_destruct;
@end
