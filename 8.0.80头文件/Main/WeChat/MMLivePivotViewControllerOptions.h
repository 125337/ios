@interface MMLivePivotViewControllerOptions : NSObject
{
    BOOL _useAnchoredBypass; // +0x8
    BOOL _inMainScene; // +0x9
    BOOL _disableHistoryLives; // +0xa
    BOOL _useVerticalFullscreenMinimization; // +0xb
    int _commentScene; // +0xc
    NSArray * _contentVms; // +0x10
    NSArray * _exportIds; // +0x18
    MMFinderLiveRouterParams * _routeParam; // +0x20
    unsigned long long _selectedIndex; // +0x28
    long long _tabType; // +0x30
    unsigned long long _scrollDisabledReasons; // +0x38
}
- (id)init;
- (id)initWithContentVms:(id)arg1 selectedIndex:(unsigned long long)arg2;
- (id)initWithExportIds:(id)arg1 primaryContentVm:(id)arg2 primaryContentVmIndex:(unsigned long long)arg3;
- (id)contentVms;
- (void)setContentVms:(id)arg1;
- (id)exportIds;
- (void)setExportIds:(id)arg1;
- (id)routeParam;
- (void)setRouteParam:(id)arg1;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (BOOL)useAnchoredBypass;
- (void)setUseAnchoredBypass:(BOOL)arg1;
- (BOOL)inMainScene;
- (void)setInMainScene:(BOOL)arg1;
- (long long)tabType;
- (void)setTabType:(long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (BOOL)disableHistoryLives;
- (void)setDisableHistoryLives:(BOOL)arg1;
- (BOOL)useVerticalFullscreenMinimization;
- (void)setUseVerticalFullscreenMinimization:(BOOL)arg1;
- (unsigned long long)scrollDisabledReasons;
- (void)setScrollDisabledReasons:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
