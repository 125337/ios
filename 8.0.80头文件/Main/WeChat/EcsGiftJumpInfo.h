@interface EcsGiftJumpInfo : MMObject <NSCopying>
{
    unsigned int _jumpBizType; // +0x8
    EcsJumpMiniAppInfo * _miniAppInfo; // +0x10
    EcsJumpLiteAppInfo * _liteAppInfo; // +0x18
    EcsJumpHtml5Info * _html5Info; // +0x20
    EcsJumpNativeInfo * _nativeInfo; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (unsigned int)jumpBizType;
- (void)setJumpBizType:(unsigned int)arg1;
- (id)miniAppInfo;
- (void)setMiniAppInfo:(id)arg1;
- (id)liteAppInfo;
- (void)setLiteAppInfo:(id)arg1;
- (id)html5Info;
- (void)setHtml5Info:(id)arg1;
- (id)nativeInfo;
- (void)setNativeInfo:(id)arg1;
- (void).cxx_destruct;
@end
