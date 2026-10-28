@interface WCFinderArbitraryPageScrollProcess : NSObject
{
    BOOL _needReloadAfterScroll; // +0x8
    long long _type; // +0x10
    long long _fromIdx; // +0x18
    long long _toIdx; // +0x20
    double _fromOffset; // +0x28
    long long _otherPageIdx; // +0x30
    NSMutableArray * _pendingSwitchTab; // +0x38
    ConfigOffset _offset; // +0x40
}
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)fromIdx;
- (void)setFromIdx:(long long)arg1;
- (long long)toIdx;
- (void)setToIdx:(long long)arg1;
- (double)fromOffset;
- (void)setFromOffset:(double)arg1;
- (ConfigOffset)offset;
- (void)setOffset:(ConfigOffset)arg1;
- (long long)otherPageIdx;
- (void)setOtherPageIdx:(long long)arg1;
- (BOOL)needReloadAfterScroll;
- (void)setNeedReloadAfterScroll:(BOOL)arg1;
- (id)pendingSwitchTab;
- (void)setPendingSwitchTab:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
