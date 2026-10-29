@interface WCContactCacheOptimizeInfo : NSObject <PBCoding>
{
    unsigned int _lastCalculateBestLoadTime; // +0x8
    unsigned int _lastRecordCacheOptimizeInfoToDBTime; // +0xc
    float _bestLoadlistScale; // +0x10
    unsigned int _allChatRoomStrangerCount; // +0x14
    unsigned int _firstRecordCacheOptimizeInfoTime; // +0x18
    NSMutableArray * _bestLoadArrUserName; // +0x20
    WCContactCacheOptimizeFeature * _currentStrategyFeature; // +0x28
    WCContactCacheOptimizeFeature * _onlineSearchMaxGroupFeature; // +0x30
}
+ (void)PBArrayAdd_lastCalculateBestLoadTime;
+ (void)PBArrayAdd_bestLoadArrUserName;
+ (void)PBArrayAdd_lastRecordCacheOptimizeInfoToDBTime;
+ (void)PBArrayAdd_currentStrategyFeature;
+ (void)PBArrayAdd_onlineSearchMaxGroupFeature;
+ (void)PBArrayAdd_bestLoadlistScale;
+ (void)PBArrayAdd_allChatRoomStrangerCount;
+ (void)PBArrayAdd_firstRecordCacheOptimizeInfoTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)lastCalculateBestLoadTime;
- (void)setLastCalculateBestLoadTime:(unsigned int)arg1;
- (id)bestLoadArrUserName;
- (void)setBestLoadArrUserName:(id)arg1;
- (unsigned int)lastRecordCacheOptimizeInfoToDBTime;
- (void)setLastRecordCacheOptimizeInfoToDBTime:(unsigned int)arg1;
- (id)currentStrategyFeature;
- (void)setCurrentStrategyFeature:(id)arg1;
- (id)onlineSearchMaxGroupFeature;
- (void)setOnlineSearchMaxGroupFeature:(id)arg1;
- (float)bestLoadlistScale;
- (void)setBestLoadlistScale:(float)arg1;
- (unsigned int)allChatRoomStrangerCount;
- (void)setAllChatRoomStrangerCount:(unsigned int)arg1;
- (unsigned int)firstRecordCacheOptimizeInfoTime;
- (void)setFirstRecordCacheOptimizeInfoTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
