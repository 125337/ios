@interface WAReportMainFrameTaskBarActionItem : WAReportBaseItem
{
    unsigned int _openTime; // +0x8
    unsigned int _appCountWhenOpen; // +0xc
    unsigned int _appCountWhenClose; // +0x10
    unsigned int _closeReason; // +0x14
    unsigned int _scrollCount; // +0x18
    unsigned int _deleteAppCount; // +0x1c
    unsigned int _whyDragMeCountWhenClose; // +0x20
    unsigned int _starCountWhenOpen; // +0x24
    unsigned int _starCountWhenClose; // +0x28
    unsigned int _starScrollCount; // +0x2c
    unsigned int _deleteStarAppCount; // +0x30
    unsigned int _moveStarToTopCount; // +0x34
    unsigned int _addToStarAppCount; // +0x38
    unsigned int _isFullScreen; // +0x3c
    unsigned int _moveStarToFrontCount; // +0x40
    unsigned int _moveStarToAfterCount; // +0x44
    unsigned int _slideUpDownCount; // +0x48
    unsigned int _searchAppearCount; // +0x4c
    unsigned int _searchActiveCount; // +0x50
    unsigned int _isUsingDynamicBackground; // +0x54
    unsigned int _recentMaxShowLines; // +0x58
    unsigned int _countPerLine; // +0x5c
    unsigned long long _duration; // +0x60
    unsigned long long _lastStartTime; // +0x68
    NSString * _openAppIdList; // +0x70
    NSString * _deleteAppIdList; // +0x78
    NSString * _openStarAppIdList; // +0x80
    NSString * _deleteStarAppIdList; // +0x88
    NSString * _appClickPositionList; // +0x90
    NSString * _starAppClickPositionList; // +0x98
    NSString * _moveStarToTopAppIdList; // +0xa0
    NSString * _addToStarAppIdList; // +0xa8
    NSString * _moveStarToFrontAppIdList; // +0xb0
    NSString * _moveStarToAfterAppIdList; // +0xb8
    unsigned long long _recentCurrentShowLines; // +0xc0
    NSString * _openSession; // +0xc8
}
- (id)reportString;
- (unsigned int)openTime;
- (void)setOpenTime:(unsigned int)arg1;
- (unsigned long long)duration;
- (void)setDuration:(unsigned long long)arg1;
- (unsigned long long)lastStartTime;
- (void)setLastStartTime:(unsigned long long)arg1;
- (unsigned int)appCountWhenOpen;
- (void)setAppCountWhenOpen:(unsigned int)arg1;
- (unsigned int)appCountWhenClose;
- (void)setAppCountWhenClose:(unsigned int)arg1;
- (unsigned int)closeReason;
- (void)setCloseReason:(unsigned int)arg1;
- (unsigned int)scrollCount;
- (void)setScrollCount:(unsigned int)arg1;
- (id)openAppIdList;
- (void)setOpenAppIdList:(id)arg1;
- (unsigned int)deleteAppCount;
- (void)setDeleteAppCount:(unsigned int)arg1;
- (id)deleteAppIdList;
- (void)setDeleteAppIdList:(id)arg1;
- (unsigned int)whyDragMeCountWhenClose;
- (void)setWhyDragMeCountWhenClose:(unsigned int)arg1;
- (unsigned int)starCountWhenOpen;
- (void)setStarCountWhenOpen:(unsigned int)arg1;
- (unsigned int)starCountWhenClose;
- (void)setStarCountWhenClose:(unsigned int)arg1;
- (unsigned int)starScrollCount;
- (void)setStarScrollCount:(unsigned int)arg1;
- (id)openStarAppIdList;
- (void)setOpenStarAppIdList:(id)arg1;
- (unsigned int)deleteStarAppCount;
- (void)setDeleteStarAppCount:(unsigned int)arg1;
- (id)deleteStarAppIdList;
- (void)setDeleteStarAppIdList:(id)arg1;
- (unsigned int)moveStarToTopCount;
- (void)setMoveStarToTopCount:(unsigned int)arg1;
- (id)appClickPositionList;
- (void)setAppClickPositionList:(id)arg1;
- (id)starAppClickPositionList;
- (void)setStarAppClickPositionList:(id)arg1;
- (id)moveStarToTopAppIdList;
- (void)setMoveStarToTopAppIdList:(id)arg1;
- (unsigned int)addToStarAppCount;
- (void)setAddToStarAppCount:(unsigned int)arg1;
- (id)addToStarAppIdList;
- (void)setAddToStarAppIdList:(id)arg1;
- (unsigned int)isFullScreen;
- (void)setIsFullScreen:(unsigned int)arg1;
- (id)moveStarToFrontAppIdList;
- (void)setMoveStarToFrontAppIdList:(id)arg1;
- (id)moveStarToAfterAppIdList;
- (void)setMoveStarToAfterAppIdList:(id)arg1;
- (unsigned int)moveStarToFrontCount;
- (void)setMoveStarToFrontCount:(unsigned int)arg1;
- (unsigned int)moveStarToAfterCount;
- (void)setMoveStarToAfterCount:(unsigned int)arg1;
- (unsigned int)slideUpDownCount;
- (void)setSlideUpDownCount:(unsigned int)arg1;
- (unsigned int)searchAppearCount;
- (void)setSearchAppearCount:(unsigned int)arg1;
- (unsigned int)searchActiveCount;
- (void)setSearchActiveCount:(unsigned int)arg1;
- (unsigned int)isUsingDynamicBackground;
- (void)setIsUsingDynamicBackground:(unsigned int)arg1;
- (unsigned int)recentMaxShowLines;
- (void)setRecentMaxShowLines:(unsigned int)arg1;
- (unsigned long long)recentCurrentShowLines;
- (void)setRecentCurrentShowLines:(unsigned long long)arg1;
- (unsigned int)countPerLine;
- (void)setCountPerLine:(unsigned int)arg1;
- (id)openSession;
- (void)setOpenSession:(id)arg1;
- (void).cxx_destruct;
@end

