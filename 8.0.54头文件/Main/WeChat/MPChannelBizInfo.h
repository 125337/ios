@interface MPChannelBizInfo : NSObject <PBCoding>
{
    unsigned int _bizUin; // +0x8
    NSString * _bizHeadImgUrl; // +0x10
    NSString * _bizUsrName; // +0x18
}
+ (void)PBArrayAdd_bizHeadImgUrl;
+ (void)PBArrayAdd_bizUin;
+ (void)PBArrayAdd_bizUsrName;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)bizHeadImgUrl;
- (void)setBizHeadImgUrl:(id)arg1;
- (id)bizUsrName;
- (void)setBizUsrName:(id)arg1;
- (unsigned int)bizUin;
- (void)setBizUin:(unsigned int)arg1;
- (void).cxx_destruct;
@end

