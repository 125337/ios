@interface WCAdSupportCapabilityInfo : NSObject
{
    unsigned int _supportH265; // +0x8
    unsigned int _supportWebP; // +0xc
    unsigned int _supportAVIF; // +0x10
}
+ (id)defaultInfo;
+ (id)compatibleInfo;
- (id)toJsonString;
- (id)fetchCacheKey;
- (unsigned int)supportH265;
- (void)setSupportH265:(unsigned int)arg1;
- (unsigned int)supportWebP;
- (void)setSupportWebP:(unsigned int)arg1;
- (unsigned int)supportAVIF;
- (void)setSupportAVIF:(unsigned int)arg1;
@end
