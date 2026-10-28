@interface WCSessionPagePathInfo : MMObject <NSCopying>
{
    NSString * _pageName; // +0x8
    unsigned long long _enterTimestampMs; // +0x10
    unsigned long long _quitTimestampMs; // +0x18
    unsigned long long _interval; // +0x20
    NSMutableArray * _businessParams; // +0x28
    NSMutableArray * _viewOperation; // +0x30
}
- (id)init;
- (id)toString;
- (id)getAttrDictionary;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (unsigned long long)enterTimestampMs;
- (void)setEnterTimestampMs:(unsigned long long)arg1;
- (unsigned long long)quitTimestampMs;
- (void)setQuitTimestampMs:(unsigned long long)arg1;
- (unsigned long long)interval;
- (void)setInterval:(unsigned long long)arg1;
- (id)businessParams;
- (void)setBusinessParams:(id)arg1;
- (id)viewOperation;
- (void)setViewOperation:(id)arg1;
- (void).cxx_destruct;
@end
