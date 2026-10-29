@interface WCPayOverseaThreePointAreaItem : NSObject <PBCoding>
{
    NSData * _name; // +0x8
    NSData * _url; // +0x10
}
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_url;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)name;
- (void)setName:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end

