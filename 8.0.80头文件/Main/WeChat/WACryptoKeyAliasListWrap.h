@interface WACryptoKeyAliasListWrap : NSObject <PBCoding>
{
    NSMutableArray * _keyAliasList; // +0x8
}
+ (void)PBArrayAdd_keyAliasList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)keyAliasList;
- (void)setKeyAliasList:(id)arg1;
- (void).cxx_destruct;
@end
