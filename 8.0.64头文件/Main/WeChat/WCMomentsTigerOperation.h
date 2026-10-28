@interface WCMomentsTigerOperation : NSObject
{
    WCDataItem * _dataItem; // +0x8
    unsigned long long _displayCount; // +0x10
    double _lastDisplayTime; // +0x18
    unsigned long long _clickCount; // +0x20
    double _lastClickTime; // +0x28
}
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)displayCount;
- (void)setDisplayCount:(unsigned long long)arg1;
- (double)lastDisplayTime;
- (void)setLastDisplayTime:(double)arg1;
- (unsigned long long)clickCount;
- (void)setClickCount:(unsigned long long)arg1;
- (double)lastClickTime;
- (void)setLastClickTime:(double)arg1;
- (void).cxx_destruct;
@end
