@interface DBContactCard : NSObject <PBCoding>
{
    NSString * _url; // +0x8
    NSString * _aeskey; // +0x10
}
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_aeskey;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)aeskey;
- (void)setAeskey:(id)arg1;
- (void).cxx_destruct;
@end

