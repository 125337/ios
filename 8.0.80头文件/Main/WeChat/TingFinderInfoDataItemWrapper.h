@interface TingFinderInfoDataItemWrapper : MMObject
{
    WCFinderDataItem * _dataItem; // +0x8
    NSError * _error; // +0x10
    MMListenFinderInfo * _finderInfo; // +0x18
}
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (id)finderInfo;
- (void)setFinderInfo:(id)arg1;
- (void).cxx_destruct;
@end
