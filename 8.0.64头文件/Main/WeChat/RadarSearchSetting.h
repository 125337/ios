@interface RadarSearchSetting : NSObject <NSCoding>
{
    int _usrEduTimes; // +0x8
    int _enterRadarTimes; // +0xc
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)usrEduTimes;
- (void)setUsrEduTimes:(int)arg1;
- (int)enterRadarTimes;
- (void)setEnterRadarTimes:(int)arg1;
@end
