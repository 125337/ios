@interface RingToneSettingCellHandler : WCTableViewCellHandler
{
    AnyPromise * _globalRingPromise; // +0x8
    AnyPromise * _friendsRingPromise; // +0x10
    unsigned long long _cellType; // +0x18
}
- (id)genCellManager;
- (void)showRingTonePage;
- (id)globalRingPromise;
- (void)setGlobalRingPromise:(id)arg1;
- (id)friendsRingPromise;
- (void)setFriendsRingPromise:(id)arg1;
- (unsigned long long)cellType;
- (void)setCellType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
