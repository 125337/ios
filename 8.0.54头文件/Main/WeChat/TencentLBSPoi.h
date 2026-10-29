@interface TencentLBSPoi : NSObject <NSSecureCoding, NSCopying>
{
    NSString * _uid; // +0x8
    NSString * _name; // +0x10
    NSString * _address; // +0x18
    NSString * _catalog; // +0x20
    double _longitude; // +0x28
    double _latitude; // +0x30
    double _distance; // +0x38
}
+ (BOOL)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)uid;
- (void)setUid:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (id)catalog;
- (void)setCatalog:(id)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)distance;
- (void)setDistance:(double)arg1;
- (void).cxx_destruct;
@end

