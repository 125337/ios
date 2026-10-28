@interface WCAdGamePlayableInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    BOOL _needPrerender; // +0x8
    unsigned int _weappVersion; // +0xc
    unsigned int _weAppType; // +0x10
    int _miniProgramType; // +0x14
    NSString * _weappUserName; // +0x18
    NSString * _weappPath; // +0x20
    NSString * _prerenderWeappPath; // +0x28
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)weappUserName;
- (void)setWeappUserName:(id)arg1;
- (id)weappPath;
- (void)setWeappPath:(id)arg1;
- (id)prerenderWeappPath;
- (void)setPrerenderWeappPath:(id)arg1;
- (unsigned int)weappVersion;
- (void)setWeappVersion:(unsigned int)arg1;
- (unsigned int)weAppType;
- (void)setWeAppType:(unsigned int)arg1;
- (int)miniProgramType;
- (void)setMiniProgramType:(int)arg1;
- (BOOL)needPrerender;
- (void)setNeedPrerender:(BOOL)arg1;
- (void).cxx_destruct;
@end
