@interface MMLiveGamePrepareVisibilityCell : MMLiveGamePrepareOptionCell
{
    int _liveMode; // +0x30
    long long _lastSelectMode; // +0x38
    NSArray * _visibleRoomIds; // +0x40
    NSArray * _visibleUserNames; // +0x48
}
- (void)updateWithVisibleRoomIds:(id)arg1 visibleUserNames:(id)arg2 firstVisibleUserName:(id)arg3 selectMode:(long long)arg4 liveMode:(int)arg5;
- (long long)lastSelectMode;
- (void)setLastSelectMode:(long long)arg1;
- (id)visibleRoomIds;
- (void)setVisibleRoomIds:(id)arg1;
- (id)visibleUserNames;
- (void)setVisibleUserNames:(id)arg1;
- (int)liveMode;
- (void)setLiveMode:(int)arg1;
- (void).cxx_destruct;
@end

