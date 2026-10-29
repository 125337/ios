@interface MMLocationPoiDetailModel : NSObject <WCTTableCoding>
{
    unsigned int _adCode; // +0x8
    NSString * _poiId; // +0x10
    NSString * _categoryTips; // +0x18
    NSString * _businessHour; // +0x20
    NSString * _phoneNumber; // +0x28
    NSString * _priceTips; // +0x30
    NSString * _noticeWording; // +0x38
    double _longitude; // +0x40
    double _latitude; // +0x48
    unsigned long long _source; // +0x50
    NSString * _cityName; // +0x58
    NSString * _address; // +0x60
    NSString * _fullAddress; // +0x68
    NSString * _country; // +0x70
    NSString * _province; // +0x78
    NSString * _region; // +0x80
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)poiId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_poiId;
+ (const void *)categoryTips;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_categoryTips;
+ (const void *)businessHour;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_businessHour;
+ (const void *)phoneNumber;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_phoneNumber;
+ (const void *)priceTips;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_priceTips;
+ (const void *)noticeWording;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_noticeWording;
+ (const void *)longitude;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_longitude;
+ (const void *)latitude;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_latitude;
+ (const void *)source;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_source;
+ (const void *)cityName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_cityName;
+ (const void *)adCode;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_adCode;
+ (const void *)address;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_address;
+ (const void *)country;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (id)swift_country;
+ (const void *)province;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (id)swift_province;
+ (const void *)region;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (id)swift_region;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
- (id)initWith:(id)arg1;
- (id)getCategoryTips;
- (id)getBusinessHour;
- (id)getPhoneNumber;
- (id)getPriceTips;
- (id)getNoticeWording;
- (id)getFullAddressString;
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (id)categoryTips;
- (void)setCategoryTips:(id)arg1;
- (id)businessHour;
- (void)setBusinessHour:(id)arg1;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg1;
- (id)priceTips;
- (void)setPriceTips:(id)arg1;
- (id)noticeWording;
- (void)setNoticeWording:(id)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (id)cityName;
- (void)setCityName:(id)arg1;
- (unsigned int)adCode;
- (void)setAdCode:(unsigned int)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (id)fullAddress;
- (void)setFullAddress:(id)arg1;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)region;
- (void)setRegion:(id)arg1;
- (void).cxx_destruct;
@end

