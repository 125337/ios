@interface GameCenterCountryInfo : MMObject <PBCoding>
{
    unsigned int _lastFetchTime; // +0x8
    NSString * _productID; // +0x10
    NSString * _countryCode; // +0x18
}
+ (void)PBArrayAdd_productID;
+ (void)PBArrayAdd_countryCode;
+ (void)PBArrayAdd_lastFetchTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)productID;
- (void)setProductID:(id)arg1;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (unsigned int)lastFetchTime;
- (void)setLastFetchTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

