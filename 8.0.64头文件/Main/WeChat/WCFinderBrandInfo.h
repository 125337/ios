@interface WCFinderBrandInfo : NSObject <PBCoding, WCTColumnCoding>
{
    NSString * _username; // +0x8
    NSString * _nickname; // +0x10
    NSString * _imgUrl; // +0x18
    NSString * _serviceTypeName; // +0x20
}
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_imgUrl;
+ (void)PBArrayAdd_serviceTypeName;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)imgUrl;
- (void)setImgUrl:(id)arg1;
- (id)serviceTypeName;
- (void)setServiceTypeName:(id)arg1;
- (void).cxx_destruct;
@end
