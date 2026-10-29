@interface WCFinderOrderShareItem : NSObject <YYModel, NSCoding, NSCopying, PBCoding>
{
    unsigned int _productsCount; // +0x8
    NSString * _orderID; // +0x10
    NSString * _products; // +0x18
    NSString * _priceWording; // +0x20
    NSString * _stateWording; // +0x28
    NSString * _productImageURL; // +0x30
    NSString * _appID; // +0x38
    NSString * _path; // +0x40
}
+ (void)PBArrayAdd_orderID;
+ (void)PBArrayAdd_products;
+ (void)PBArrayAdd_productsCount;
+ (void)PBArrayAdd_priceWording;
+ (void)PBArrayAdd_stateWording;
+ (void)PBArrayAdd_productImageURL;
+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_path;
+ (void)initialize;
+ (id)shareItemWith:(id)arg1;
- (id)getPBPropertyTable;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)initWith:(id)arg1;
- (id)orderID;
- (void)setOrderID:(id)arg1;
- (id)products;
- (void)setProducts:(id)arg1;
- (unsigned int)productsCount;
- (void)setProductsCount:(unsigned int)arg1;
- (id)priceWording;
- (void)setPriceWording:(id)arg1;
- (id)stateWording;
- (void)setStateWording:(id)arg1;
- (id)productImageURL;
- (void)setProductImageURL:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
@end

