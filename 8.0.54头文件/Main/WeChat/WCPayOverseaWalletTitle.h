@interface WCPayOverseaWalletTitle : NSObject <PBCoding>
{
    NSData * _main; // +0x8
    NSData * _sub; // +0x10
}
+ (void)PBArrayAdd_main;
+ (void)PBArrayAdd_sub;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)main;
- (void)setMain:(id)arg1;
- (id)sub;
- (void)setSub:(id)arg1;
- (void).cxx_destruct;
@end

