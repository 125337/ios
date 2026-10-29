@interface TencentLBSLocation : NSObject <NSSecureCoding, NSCopying>
{
    CLLocation * _location; // +0x8
    long long _areaStat; // +0x10
    NSString * _provider; // +0x18
    NSNumber * _steps; // +0x20
    NSNumber * _indoorPdrSteps; // +0x28
    NSString * _buildingId; // +0x30
    NSString * _buildingFloor; // +0x38
    long long _indoorLocationType; // +0x40
    NSString * _name; // +0x48
    NSString * _address; // +0x50
    long long _nationCode; // +0x58
    NSString * _code; // +0x60
    NSString * _nation; // +0x68
    NSString * _province; // +0x70
    NSString * _city; // +0x78
    NSString * _district; // +0x80
    NSString * _town; // +0x88
    NSString * _village; // +0x90
    NSString * _street; // +0x98
    NSString * _street_no; // +0xa0
    NSArray * _poiList; // +0xa8
}
+ (BOOL)supportsSecureCoding;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (double)distanceFromLocation:(id)arg1;
- (id)description;
- (id)location;
- (void)setLocation:(id)arg1;
- (long long)areaStat;
- (void)setAreaStat:(long long)arg1;
- (id)provider;
- (void)setProvider:(id)arg1;
- (id)steps;
- (void)setSteps:(id)arg1;
- (id)indoorPdrSteps;
- (void)setIndoorPdrSteps:(id)arg1;
- (id)buildingId;
- (void)setBuildingId:(id)arg1;
- (id)buildingFloor;
- (void)setBuildingFloor:(id)arg1;
- (long long)indoorLocationType;
- (void)setIndoorLocationType:(long long)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (long long)nationCode;
- (void)setNationCode:(long long)arg1;
- (id)code;
- (void)setCode:(id)arg1;
- (id)nation;
- (void)setNation:(id)arg1;
- (id)province;
- (void)setProvince:(id)arg1;
- (id)city;
- (void)setCity:(id)arg1;
- (id)district;
- (void)setDistrict:(id)arg1;
- (id)town;
- (void)setTown:(id)arg1;
- (id)village;
- (void)setVillage:(id)arg1;
- (id)street;
- (void)setStreet:(id)arg1;
- (id)street_no;
- (void)setStreet_no:(id)arg1;
- (id)poiList;
- (void)setPoiList:(id)arg1;
- (void).cxx_destruct;
@end

