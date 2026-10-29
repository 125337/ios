@interface WCPayOverseaWalletNotice : NSObject <PBCoding>
{
    NSData * _conent; // +0x8
    NSData * _url; // +0x10
}
+ (void)PBArrayAdd_conent;
+ (void)PBArrayAdd_url;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)conent;
- (void)setConent:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end
