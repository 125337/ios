@interface CustomPlayerConfig : NSObject
{
    BOOL _isHDRLive; // +0x8
    BOOL _isFlvIpv6First; // +0x9
    unsigned int _customRenderVal; // +0xc
    unsigned int _flvGopCache; // +0x10
    NSString * _backDomain; // +0x18
}
- (BOOL)isHDRLive;
- (void)setIsHDRLive:(BOOL)arg1;
- (unsigned int)customRenderVal;
- (void)setCustomRenderVal:(unsigned int)arg1;
- (id)backDomain;
- (void)setBackDomain:(id)arg1;
- (unsigned int)flvGopCache;
- (void)setFlvGopCache:(unsigned int)arg1;
- (BOOL)isFlvIpv6First;
- (void)setIsFlvIpv6First:(BOOL)arg1;
- (void).cxx_destruct;
@end
