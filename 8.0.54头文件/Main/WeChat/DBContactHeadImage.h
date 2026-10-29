@interface DBContactHeadImage : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int _imgHDStatus; // +0x8
    NSString * _headImgUrl; // +0x10
    NSString * _headHDImgUrl; // +0x18
    NSString * _headHDMd5; // +0x20
}
+ (void)PBArrayAdd_imgHDStatus;
+ (void)PBArrayAdd_headImgUrl;
+ (void)PBArrayAdd_headHDImgUrl;
+ (void)PBArrayAdd_headHDMd5;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (unsigned int)imgHDStatus;
- (void)setImgHDStatus:(unsigned int)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (id)headHDImgUrl;
- (void)setHeadHDImgUrl:(id)arg1;
- (id)headHDMd5;
- (void)setHeadHDMd5:(id)arg1;
- (void).cxx_destruct;
@end

