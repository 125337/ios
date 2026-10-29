@interface MMFinderLiveLastTaskModel : NSObject
{
    BOOL _shouldEnterLiveRoomAfterClose; // +0x8
    int _commentScene; // +0xc
    NSMutableArray * _liveContentVMs; // +0x10
    long long _currentIndex; // +0x18
    long long _tabType; // +0x20
    MMFinderLiveRouterParams * _routeParam; // +0x28
}
- (BOOL)shouldEnterLiveRoomAfterClose;
- (void)setShouldEnterLiveRoomAfterClose:(BOOL)arg1;
- (id)liveContentVMs;
- (void)setLiveContentVMs:(id)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (long long)tabType;
- (void)setTabType:(long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)routeParam;
- (void)setRouteParam:(id)arg1;
- (void).cxx_destruct;
@end
