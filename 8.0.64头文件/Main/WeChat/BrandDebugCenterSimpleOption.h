@interface BrandDebugCenterSimpleOption : NSObject
{
    unsigned int _option; // +0x8
    NSString * _wording; // +0x10
}
- (unsigned int)option;
- (void)setOption:(unsigned int)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (void).cxx_destruct;
@end
