@interface WCOPackageItem : NSObject
{
    unsigned int _flag; // +0x8
    NSString * _ProductID; // +0x10
    NSString * _Title; // +0x18
    NSString * _Price; // +0x20
    NSString * _Wording; // +0x28
    NSString * _Desc; // +0x30
    NSString * _CountryFlagImgUrl; // +0x38
}
- (id)ProductID;
- (void)setProductID:(id)arg1;
- (id)Title;
- (void)setTitle:(id)arg1;
- (id)Price;
- (void)setPrice:(id)arg1;
- (id)Wording;
- (void)setWording:(id)arg1;
- (id)Desc;
- (void)setDesc:(id)arg1;
- (id)CountryFlagImgUrl;
- (void)setCountryFlagImgUrl:(id)arg1;
- (unsigned int)flag;
- (void)setFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end
