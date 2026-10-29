@interface ActionGridItem : NSObject <NSCoding>
{
    NSString * _name; // +0x8
    NSString * _iconUrl; // +0x10
    NSString * _productID; // +0x18
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)toXml;
- (id)name;
- (void)setName:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)productID;
- (void)setProductID:(id)arg1;
- (void).cxx_destruct;
@end
