@interface BSBusinessServiceInfo : NSObject
{
    NSString * _title; // +0x8
    NSString * _serviceUrl; // +0x10
    NSDictionary * _itemFieldDict; // +0x18
}
+ (id)fromServerObj:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)serviceUrl;
- (void)setServiceUrl:(id)arg1;
- (id)itemFieldDict;
- (void)setItemFieldDict:(id)arg1;
- (void).cxx_destruct;
@end
