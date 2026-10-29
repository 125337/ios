@interface TBRoadEventCity : NSObject <NSCoding>
{
    int _cityId; // +0x8
    int _version; // +0xc
    double _time; // +0x10
}
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (int)cityId;
- (void)setCityId:(int)arg1;
- (int)version;
- (void)setVersion:(int)arg1;
- (double)time;
- (void)setTime:(double)arg1;
@end

