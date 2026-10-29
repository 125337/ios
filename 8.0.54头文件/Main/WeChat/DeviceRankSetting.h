@interface DeviceRankSetting : NSObject <NSCoding>
{
    unsigned int _rankSettingFlag; // +0x8
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)rankSettingFlag;
- (void)setRankSettingFlag:(unsigned int)arg1;
@end

