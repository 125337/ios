@interface DeepLinkDef : NSObject
{
    unsigned int flag; // +0x8
    id /* block */ linkBlock; // +0x10
    NSString * link; // +0x18
    NSString * linkName; // +0x20
    DeepLinkBitSet * dlBitset; // +0x28
}
+ (id)DeepLinkDefWithName:(id)arg1 Link:(id)arg2 PermissionBitSet:(unsigned long long)arg3 LinkBlock:(id /* block */)arg4 Flag:(unsigned int)arg5;
- (id)init;
- (void)dealloc;
- (id)getLink;
- (BOOL)isCallDelegate;
- (BOOL)isCallExtension;
- (id /* block */)linkBlock;
- (void)setLinkBlock:(id /* block */)arg1;
- (void)setLink:(id)arg1;
- (id)linkName;
- (void)setLinkName:(id)arg1;
- (id)dlBitset;
- (void)setDlBitset:(id)arg1;
- (unsigned int)flag;
- (void)setFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end

