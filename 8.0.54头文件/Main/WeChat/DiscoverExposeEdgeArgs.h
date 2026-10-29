@interface DiscoverExposeEdgeArgs : NSObject
{
    unsigned int _finderCtrlType; // +0x8
    unsigned int _finderShowType; // +0xc
    unsigned int _finderExposeCount; // +0x10
    unsigned int _isShowFinderBool; // +0x14
    unsigned int _isShowFinderRedDotBool; // +0x18
    unsigned int _liveCtrlType; // +0x1c
    unsigned int _liveShowType; // +0x20
    unsigned int _liveExposeCount; // +0x24
    unsigned int _isShowLiveBool; // +0x28
    unsigned int _isShowLiveRedDotBool; // +0x2c
    unsigned int _newMsgOpenWechatBool; // +0x30
    unsigned int _finderCacheSize; // +0x34
    unsigned int _liveCacheSize; // +0x38
    unsigned int _calendarFinderSyncCount; // +0x3c
    unsigned int _calendarLiveSyncCount; // +0x40
    unsigned int _calendarMixSyncCount; // +0x44
    unsigned int _calendarTotalSyncCount; // +0x48
    unsigned int _calendarDiscoverExposeCount; // +0x4c
    unsigned int _calendarFinderRedDotFirstExposeCtrlType; // +0x50
    unsigned int _calendarFinderRedDotExposeCount; // +0x54
    unsigned int _calendarFinderRedDotTipsIdExposeCount; // +0x58
    unsigned int _calendarFinderEnterCount; // +0x5c
    unsigned int _calendarFinderEnterCountWithRedDot; // +0x60
    unsigned int _calendarFinderStayTimeSec; // +0x64
    unsigned int _calendarLiveRedDotFirstExposeCtrlType; // +0x68
    unsigned int _calendarLiveRedDotExposeCount; // +0x6c
    unsigned int _calendarLiveRedDotTipsIdExposeCount; // +0x70
    unsigned int _calendarLiveEnterCount; // +0x74
    unsigned int _calendarLiveEnterCountWithRedDot; // +0x78
    unsigned int _calendarLiveStayTimeSec; // +0x7c
    unsigned int _finderPushType; // +0x80
    unsigned int _finderIgnoreFreq; // +0x84
    unsigned int _liveSubRecallType; // +0x88
    unsigned int _liveIgnoreFreq; // +0x8c
    unsigned int _isHeadset; // +0x90
    unsigned int _currBattery; // +0x94
    unsigned int _finderDropRedDotCount; // +0x98
    unsigned int _finderDeepReadCount; // +0x9c
    NSString * _finderTipsId; // +0xa0
    unsigned long long _finderReceTimeMs; // +0xa8
    unsigned long long _finderExposeFirstSec; // +0xb0
    unsigned long long _lastReceFinderRedDotMs; // +0xb8
    unsigned long long _lastFinderRedDotExposeMs; // +0xc0
    unsigned long long _lastEnterFinderMs; // +0xc8
    unsigned long long _lastExitFinderMs; // +0xd0
    NSString * _liveTipsId; // +0xd8
    unsigned long long _liveReceTimeMs; // +0xe0
    unsigned long long _liveExposeFirstSec; // +0xe8
    unsigned long long _lastReceLiveRedDotMs; // +0xf0
    unsigned long long _lastLiveRedDotExposeMs; // +0xf8
    unsigned long long _lastEnterLiveMs; // +0x100
    unsigned long long _lastExitLiverMs; // +0x108
    NSString * _fromSid; // +0x110
    unsigned long long _fromSidStayTimeMs; // +0x118
    unsigned long long _enterMs; // +0x120
    NSString * _findFriendsEntryRedDot; // +0x128
    NSString * _netType; // +0x130
    unsigned long long _lastFinderSyncMs; // +0x138
    unsigned long long _calendarDiscoverFirstExposeTimeMs; // +0x140
    unsigned long long _calendarFinderRedDotFirstExposeTimeMs; // +0x148
    unsigned long long _calendarLiveRedDotFirstExposeTimeMs; // +0x150
    NSString * _finderPushScene; // +0x158
}
- (unsigned int)isShowFinderBool;
- (unsigned int)isShowFinderRedDotBool;
- (unsigned int)isShowLiveBool;
- (unsigned int)isShowLiveRedDotBool;
- (unsigned long long)lastEnterFinderMs;
- (unsigned long long)lastExitFinderMs;
- (unsigned long long)lastEnterLiveMs;
- (unsigned long long)lastExitLiverMs;
- (id)findFriendsEntryRedDot;
- (unsigned int)newMsgOpenWechatBool;
- (unsigned long long)lastFinderRedDotExposeMs;
- (unsigned long long)lastLiveRedDotExposeMs;
- (unsigned long long)lastReceFinderRedDotMs;
- (unsigned long long)lastReceLiveRedDotMs;
- (unsigned int)isHeadset;
- (unsigned int)currBattery;
- (id)netType;
- (void)collectByEvent:(id)arg1 andStayTimeMs:(unsigned long long)arg2;
- (id)toArgs;
- (id)debugInfo;
- (id)finderTipsId;
- (void)setFinderTipsId:(id)arg1;
- (unsigned int)finderCtrlType;
- (void)setFinderCtrlType:(unsigned int)arg1;
- (unsigned int)finderShowType;
- (void)setFinderShowType:(unsigned int)arg1;
- (unsigned long long)finderReceTimeMs;
- (void)setFinderReceTimeMs:(unsigned long long)arg1;
- (unsigned int)finderExposeCount;
- (void)setFinderExposeCount:(unsigned int)arg1;
- (unsigned long long)finderExposeFirstSec;
- (void)setFinderExposeFirstSec:(unsigned long long)arg1;
- (void)setLastReceFinderRedDotMs:(unsigned long long)arg1;
- (void)setLastFinderRedDotExposeMs:(unsigned long long)arg1;
- (void)setLastEnterFinderMs:(unsigned long long)arg1;
- (void)setLastExitFinderMs:(unsigned long long)arg1;
- (void)setIsShowFinderBool:(unsigned int)arg1;
- (void)setIsShowFinderRedDotBool:(unsigned int)arg1;
- (id)liveTipsId;
- (void)setLiveTipsId:(id)arg1;
- (unsigned int)liveCtrlType;
- (void)setLiveCtrlType:(unsigned int)arg1;
- (unsigned int)liveShowType;
- (void)setLiveShowType:(unsigned int)arg1;
- (unsigned long long)liveReceTimeMs;
- (void)setLiveReceTimeMs:(unsigned long long)arg1;
- (unsigned int)liveExposeCount;
- (void)setLiveExposeCount:(unsigned int)arg1;
- (unsigned long long)liveExposeFirstSec;
- (void)setLiveExposeFirstSec:(unsigned long long)arg1;
- (void)setLastReceLiveRedDotMs:(unsigned long long)arg1;
- (void)setLastLiveRedDotExposeMs:(unsigned long long)arg1;
- (void)setLastEnterLiveMs:(unsigned long long)arg1;
- (void)setLastExitLiverMs:(unsigned long long)arg1;
- (void)setIsShowLiveBool:(unsigned int)arg1;
- (void)setIsShowLiveRedDotBool:(unsigned int)arg1;
- (id)fromSid;
- (void)setFromSid:(id)arg1;
- (unsigned long long)fromSidStayTimeMs;
- (void)setFromSidStayTimeMs:(unsigned long long)arg1;
- (unsigned long long)enterMs;
- (void)setEnterMs:(unsigned long long)arg1;
- (void)setFindFriendsEntryRedDot:(id)arg1;
- (void)setNetType:(id)arg1;
- (void)setNewMsgOpenWechatBool:(unsigned int)arg1;
- (unsigned int)finderCacheSize;
- (void)setFinderCacheSize:(unsigned int)arg1;
- (unsigned int)liveCacheSize;
- (void)setLiveCacheSize:(unsigned int)arg1;
- (unsigned long long)lastFinderSyncMs;
- (void)setLastFinderSyncMs:(unsigned long long)arg1;
- (unsigned int)calendarFinderSyncCount;
- (void)setCalendarFinderSyncCount:(unsigned int)arg1;
- (unsigned int)calendarLiveSyncCount;
- (void)setCalendarLiveSyncCount:(unsigned int)arg1;
- (unsigned int)calendarMixSyncCount;
- (void)setCalendarMixSyncCount:(unsigned int)arg1;
- (unsigned int)calendarTotalSyncCount;
- (void)setCalendarTotalSyncCount:(unsigned int)arg1;
- (unsigned long long)calendarDiscoverFirstExposeTimeMs;
- (void)setCalendarDiscoverFirstExposeTimeMs:(unsigned long long)arg1;
- (unsigned int)calendarDiscoverExposeCount;
- (void)setCalendarDiscoverExposeCount:(unsigned int)arg1;
- (unsigned long long)calendarFinderRedDotFirstExposeTimeMs;
- (void)setCalendarFinderRedDotFirstExposeTimeMs:(unsigned long long)arg1;
- (unsigned int)calendarFinderRedDotFirstExposeCtrlType;
- (void)setCalendarFinderRedDotFirstExposeCtrlType:(unsigned int)arg1;
- (unsigned int)calendarFinderRedDotExposeCount;
- (void)setCalendarFinderRedDotExposeCount:(unsigned int)arg1;
- (unsigned int)calendarFinderRedDotTipsIdExposeCount;
- (void)setCalendarFinderRedDotTipsIdExposeCount:(unsigned int)arg1;
- (unsigned int)calendarFinderEnterCount;
- (void)setCalendarFinderEnterCount:(unsigned int)arg1;
- (unsigned int)calendarFinderEnterCountWithRedDot;
- (void)setCalendarFinderEnterCountWithRedDot:(unsigned int)arg1;
- (unsigned int)calendarFinderStayTimeSec;
- (void)setCalendarFinderStayTimeSec:(unsigned int)arg1;
- (unsigned long long)calendarLiveRedDotFirstExposeTimeMs;
- (void)setCalendarLiveRedDotFirstExposeTimeMs:(unsigned long long)arg1;
- (unsigned int)calendarLiveRedDotFirstExposeCtrlType;
- (void)setCalendarLiveRedDotFirstExposeCtrlType:(unsigned int)arg1;
- (unsigned int)calendarLiveRedDotExposeCount;
- (void)setCalendarLiveRedDotExposeCount:(unsigned int)arg1;
- (unsigned int)calendarLiveRedDotTipsIdExposeCount;
- (void)setCalendarLiveRedDotTipsIdExposeCount:(unsigned int)arg1;
- (unsigned int)calendarLiveEnterCount;
- (void)setCalendarLiveEnterCount:(unsigned int)arg1;
- (unsigned int)calendarLiveEnterCountWithRedDot;
- (void)setCalendarLiveEnterCountWithRedDot:(unsigned int)arg1;
- (unsigned int)calendarLiveStayTimeSec;
- (void)setCalendarLiveStayTimeSec:(unsigned int)arg1;
- (unsigned int)finderPushType;
- (void)setFinderPushType:(unsigned int)arg1;
- (id)finderPushScene;
- (void)setFinderPushScene:(id)arg1;
- (unsigned int)finderIgnoreFreq;
- (void)setFinderIgnoreFreq:(unsigned int)arg1;
- (unsigned int)liveSubRecallType;
- (void)setLiveSubRecallType:(unsigned int)arg1;
- (unsigned int)liveIgnoreFreq;
- (void)setLiveIgnoreFreq:(unsigned int)arg1;
- (void)setIsHeadset:(unsigned int)arg1;
- (void)setCurrBattery:(unsigned int)arg1;
- (unsigned int)finderDropRedDotCount;
- (void)setFinderDropRedDotCount:(unsigned int)arg1;
- (unsigned int)finderDeepReadCount;
- (void)setFinderDeepReadCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

