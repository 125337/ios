@interface MPPageFastLoadReportContext : NSObject
{
    unsigned int _requestTimes; // +0x8
    unsigned long long _scene; // +0x10
    NSArray * _itemList; // +0x18
}
- (id)description;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)itemList;
- (void)setItemList:(id)arg1;
- (unsigned int)requestTimes;
- (void)setRequestTimes:(unsigned int)arg1;
- (void).cxx_destruct;
@end
