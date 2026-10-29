@interface BannerBaseMsg : NSObject <PBCoding>
{
    unsigned int _type; // +0x8
    unsigned int _showType; // +0xc
    unsigned int _valid; // +0x10
    NSString * _data; // +0x18
}
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_showType;
+ (void)PBArrayAdd_valid;
+ (void)PBArrayAdd_data;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)decodeMsgXml:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)showType;
- (void)setShowType:(unsigned int)arg1;
- (unsigned int)valid;
- (void)setValid:(unsigned int)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
