@interface BrandPaySubcribePayInfo : MMObject
{
    BOOL _isPaid; // +0x8
    NSString * _pageIdentifier; // +0x10
    NSString * _fullUrl; // +0x18
}
- (BOOL)isPaid;
- (void)setIsPaid:(BOOL)arg1;
- (id)pageIdentifier;
- (void)setPageIdentifier:(id)arg1;
- (id)fullUrl;
- (void)setFullUrl:(id)arg1;
- (void).cxx_destruct;
@end

