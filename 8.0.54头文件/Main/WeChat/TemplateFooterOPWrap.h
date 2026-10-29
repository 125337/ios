@interface TemplateFooterOPWrap : NSObject
{
    unsigned int _opType; // +0x8
    unsigned int _minClientVersion; // +0xc
}
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (unsigned int)minClientVersion;
- (void)setMinClientVersion:(unsigned int)arg1;
@end

