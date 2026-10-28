@interface V2TXLiveSocks5ProxyConfig : NSObject
{
    BOOL _supportHttps; // +0x8
    BOOL _supportTcp; // +0x9
    BOOL _supportUdp; // +0xa
}
- (id)init;
- (BOOL)supportHttps;
- (void)setSupportHttps:(BOOL)arg1;
- (BOOL)supportTcp;
- (void)setSupportTcp:(BOOL)arg1;
- (BOOL)supportUdp;
- (void)setSupportUdp:(BOOL)arg1;
@end
