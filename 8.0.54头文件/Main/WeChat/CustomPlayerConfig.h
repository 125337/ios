@interface CustomPlayerConfig : NSObject
{
    BOOL _isHDRLive; // +0x8
    unsigned int _customRenderVal; // +0xc
}
- (BOOL)isHDRLive;
- (void)setIsHDRLive:(BOOL)arg1;
- (unsigned int)customRenderVal;
- (void)setCustomRenderVal:(unsigned int)arg1;
@end

