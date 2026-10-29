@interface WCFinderJumpInfoAsyncLoadRecord : NSObject
{
    WCFinderDataItem * _dataItem; // +0x8
    WCFinderJumpInfo * _jumpInfo; // +0x10
    NSDate * _lastFetchingTime; // +0x18
    NSArray * _styles; // +0x20
    NSString * _stylesIdentifier; // +0x28
}
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)lastFetchingTime;
- (void)setLastFetchingTime:(id)arg1;
- (id)styles;
- (void)setStyles:(id)arg1;
- (id)stylesIdentifier;
- (void)setStylesIdentifier:(id)arg1;
- (void).cxx_destruct;
@end

