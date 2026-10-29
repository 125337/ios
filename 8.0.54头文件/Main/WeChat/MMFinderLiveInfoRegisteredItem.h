@interface MMFinderLiveInfoRegisteredItem : NSObject
{
    WCFinderDataItem * _finderDataItem; // +0x8
    unsigned long long _registeredCount; // +0x10
}
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (unsigned long long)registeredCount;
- (void)setRegisteredCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

