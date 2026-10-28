@interface QStatisticer : NSObject
{
    BOOL _loadSuccess; // +0x8
    int _configUpdateFailCount; // +0xc
    NSString * _tag; // +0x10
    double _create; // +0x18
    NSNumber * _loadSuccessTime; // +0x20
    NSNumber * _firstLoadTime; // +0x28
    long long _lastWorldTileCount; // +0x30
    NSMutableDictionary * _root; // +0x38
    NSMutableDictionary * _mapLoad; // +0x40
    NSMutableDictionary * _configUpdate; // +0x48
    NSMutableDictionary * _oversea; // +0x50
    NSMutableDictionary * _ugc; // +0x58
    NSMutableDictionary * _indoorLog; // +0x60
    TBIndoorUserBehaviourStat * _indoorUserBehaviourStat; // +0x68
    NSMutableDictionary * _darkMode; // +0x70
    NSMutableDictionary * _pointEvent; // +0x78
    NSMutableDictionary * _vectorHeat; // +0x80
    NSMutableDictionary * _heatMap; // +0x88
    NSMutableDictionary * _arcLine; // +0x90
    NSMutableDictionary * _trail; // +0x98
    NSMutableDictionary * _dotScatter; // +0xa0
    NSMutableDictionary * _bitmapScatter; // +0xa8
    NSMutableDictionary * _groundOverlay; // +0xb0
    NSMutableDictionary * _aoi; // +0xb8
    NSMutableDictionary * _customStyle; // +0xc0
    NSMutableDictionary * _offline; // +0xc8
    NSMutableDictionary * _promote; // +0xd0
    TBPromoteIconBehaviourStat * _promoteIconBehaviourStat; // +0xd8
    QAuthenStateError * _auth; // +0xe0
}
- (id)init;
- (void)dealloc;
- (void)setSeneWithTag:(id)arg1;
- (void)recordMapLoadCallbackEvent;
- (void)recordMapLoadConfigUpdate:(BOOL)arg1;
- (id)addTimeForUserInfo:(id)arg1;
- (void)recordMaploadTileError:(id)arg1;
- (void)recordMaploadConfigError:(id)arg1 userInfo:(id)arg2;
- (void)recordOverseaEvent:(id)arg1 value:(long long)arg2;
- (void)setupLegacyOversea;
- (void)recordCustomLayerEvent:(id)arg1 value:(long long)arg2;
- (void)recordDarkModeCount:(id)arg1 value:(long long)arg2;
- (void)recordPointEventCount:(id)arg1 value:(long long)arg2;
- (void)recordHoneyCombHeatCount:(id)arg1 value:(long long)arg2;
- (void)recordHeatMapCount:(id)arg1 value:(long long)arg2;
- (void)recordarcLineCount:(id)arg1 value:(long long)arg2;
- (void)recordTrailCount:(id)arg1 value:(long long)arg2;
- (void)recordDotScatterCount:(id)arg1 value:(long long)arg2;
- (void)recordScatterBitMapCount:(id)arg1 value:(long long)arg2;
- (void)recordGroundOverlayCount:(id)arg1 value:(long long)arg2;
- (void)recordAoiLayerCount:(id)arg1 value:(long long)arg2;
- (void)recordCustomStyleCount:(id)arg1 styleID:(id)arg2;
- (void)recordOfflineMapCount:(id)arg1 value:(long long)arg2;
- (void)recordIndoorEvent:(id)arg1 indoorInfo:(id)arg2;
- (id)getAllIndoorEvents;
- (void)setUpIndoorLog;
- (void)recordAuthenErrorCode:(int)arg1;
- (void)appendUniqueInfo:(id)arg1 to:(id)arg2 forKey:(id)arg3 maxCount:(int)arg4 equalPredicator:(id /* block */)arg5;
- (id)currentRelativeTime;
- (id)relativeTime:(double)arg1;
- (void)beginRecord;
- (void)finishRecord;
- (id)tag;
- (void)setTag:(id)arg1;
- (double)create;
- (void)setCreate:(double)arg1;
- (BOOL)loadSuccess;
- (void)setLoadSuccess:(BOOL)arg1;
- (id)loadSuccessTime;
- (void)setLoadSuccessTime:(id)arg1;
- (id)firstLoadTime;
- (void)setFirstLoadTime:(id)arg1;
- (int)configUpdateFailCount;
- (void)setConfigUpdateFailCount:(int)arg1;
- (long long)lastWorldTileCount;
- (void)setLastWorldTileCount:(long long)arg1;
- (id)root;
- (void)setRoot:(id)arg1;
- (id)mapLoad;
- (void)setMapLoad:(id)arg1;
- (id)configUpdate;
- (void)setConfigUpdate:(id)arg1;
- (id)oversea;
- (void)setOversea:(id)arg1;
- (id)ugc;
- (void)setUgc:(id)arg1;
- (id)indoorLog;
- (void)setIndoorLog:(id)arg1;
- (id)indoorUserBehaviourStat;
- (void)setIndoorUserBehaviourStat:(id)arg1;
- (id)darkMode;
- (void)setDarkMode:(id)arg1;
- (id)pointEvent;
- (void)setPointEvent:(id)arg1;
- (id)vectorHeat;
- (void)setVectorHeat:(id)arg1;
- (id)heatMap;
- (void)setHeatMap:(id)arg1;
- (id)arcLine;
- (void)setArcLine:(id)arg1;
- (id)trail;
- (void)setTrail:(id)arg1;
- (id)dotScatter;
- (void)setDotScatter:(id)arg1;
- (id)bitmapScatter;
- (void)setBitmapScatter:(id)arg1;
- (id)groundOverlay;
- (void)setGroundOverlay:(id)arg1;
- (id)aoi;
- (void)setAoi:(id)arg1;
- (id)customStyle;
- (void)setCustomStyle:(id)arg1;
- (id)offline;
- (void)setOffline:(id)arg1;
- (id)promote;
- (void)setPromote:(id)arg1;
- (id)promoteIconBehaviourStat;
- (void)setPromoteIconBehaviourStat:(id)arg1;
- (id)auth;
- (void)setAuth:(id)arg1;
- (void).cxx_destruct;
@end
