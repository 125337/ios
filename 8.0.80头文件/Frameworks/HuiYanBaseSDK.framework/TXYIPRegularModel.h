@interface TXYIPRegularModel : NSObject
{
    BOOL _isIPV4; // +0x8
    BOOL _isIPV6; // +0x9
    BOOL _isIP; // +0xa
}
- (BOOL)isIPV4;
- (void)setIsIPV4:(BOOL)arg1;
- (BOOL)isIPV6;
- (void)setIsIPV6:(BOOL)arg1;
- (BOOL)isIP;
- (void)setIsIP:(BOOL)arg1;
@end
