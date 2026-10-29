@interface MMGameUIViewController : GameCenterNativeVc
{
    BOOL _bTopWhiteStyle; // +0x68
    BOOL _noNeedReport; // +0x69
    unsigned int _sourceScene; // +0x6c
    unsigned int _currentScene; // +0x70
    NSMutableArray * _visibleStateArray; // +0x78
}
- (id)initWithSourceScene:(unsigned int)arg1 CurrentScene:(unsigned int)arg2;
- (void)dealloc;
- (void)initNotificationObservers;
- (void)removeNotificationObservers;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)applicationWillResignActive;
- (BOOL)addVisibleState:(BOOL)arg1 Reason:(id)arg2;
- (BOOL)pageTimeReport;
- (id)getStatStr:(unsigned long long)arg1 ForegroundTime:(unsigned long long)arg2;
- (unsigned long long)calcForegroundTimeDuration;
- (void)OnReturn;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (BOOL)bTopWhiteStyle;
- (void)setBTopWhiteStyle:(BOOL)arg1;
- (BOOL)noNeedReport;
- (void)setNoNeedReport:(BOOL)arg1;
- (unsigned int)sourceScene;
- (void)setSourceScene:(unsigned int)arg1;
- (unsigned int)currentScene;
- (void)setCurrentScene:(unsigned int)arg1;
- (id)visibleStateArray;
- (void)setVisibleStateArray:(id)arg1;
- (void).cxx_destruct;
@end

