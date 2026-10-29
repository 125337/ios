@interface MJShootReferenceVideoConfig : NSObject
{
    unsigned long long _entryType; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
}
- (id)description;
- (unsigned long long)entryType;
- (void)setEntryType:(unsigned long long)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end
