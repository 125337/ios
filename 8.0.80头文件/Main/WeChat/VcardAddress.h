@interface VcardAddress : NSObject
{
    NSString * _postOfficeBox; // +0x8
    NSString * _extendedAddress; // +0x10
    NSString * _street; // +0x18
    NSString * _locality; // +0x20
    NSString * _region; // +0x28
    NSString * _postalCode; // +0x30
    NSString * _country; // +0x38
}
+ (BOOL)isValidAddress:(id)arg1;
+ (BOOL)isChineseAddress:(id)arg1;
- (void)print;
- (id)postOfficeBox;
- (void)setPostOfficeBox:(id)arg1;
- (id)extendedAddress;
- (void)setExtendedAddress:(id)arg1;
- (id)street;
- (void)setStreet:(id)arg1;
- (id)locality;
- (void)setLocality:(id)arg1;
- (id)region;
- (void)setRegion:(id)arg1;
- (id)postalCode;
- (void)setPostalCode:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (void).cxx_destruct;
@end
