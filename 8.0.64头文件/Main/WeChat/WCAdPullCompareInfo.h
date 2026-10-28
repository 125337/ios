@interface WCAdPullCompareInfo : NSObject
{
    BOOL _timelinePullResponseFlag; // +0x8
    BOOL _adPullResponseFlag; // +0x9
    unsigned long long _requestTime; // +0x10
    WCDataItem * _timelinePullDataItem; // +0x18
    WCDataItem * _adPullDataItem; // +0x20
}
- (unsigned long long)requestTime;
- (void)setRequestTime:(unsigned long long)arg1;
- (BOOL)timelinePullResponseFlag;
- (void)setTimelinePullResponseFlag:(BOOL)arg1;
- (id)timelinePullDataItem;
- (void)setTimelinePullDataItem:(id)arg1;
- (BOOL)adPullResponseFlag;
- (void)setAdPullResponseFlag:(BOOL)arg1;
- (id)adPullDataItem;
- (void)setAdPullDataItem:(id)arg1;
- (void).cxx_destruct;
@end
