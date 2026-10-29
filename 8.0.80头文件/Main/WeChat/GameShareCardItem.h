@interface GameShareCardItem : MMObject <NSCopying>
{
    unsigned int _isExposed; // +0x8
    unsigned int _isVideo; // +0xc
    unsigned int _duration; // +0x10
    LiteAppExtInfo * _liteAppExtInfo; // +0x18
    AppBrandExtInfo * _appBrandExtInfo; // +0x20
    NSString * _gameShareId; // +0x28
    NSString * _shareData; // +0x30
    NSString * _readText; // +0x38
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)liteAppExtInfo;
- (void)setLiteAppExtInfo:(id)arg1;
- (id)appBrandExtInfo;
- (void)setAppBrandExtInfo:(id)arg1;
- (id)gameShareId;
- (void)setGameShareId:(id)arg1;
- (id)shareData;
- (void)setShareData:(id)arg1;
- (id)readText;
- (void)setReadText:(id)arg1;
- (unsigned int)isExposed;
- (void)setIsExposed:(unsigned int)arg1;
- (unsigned int)isVideo;
- (void)setIsVideo:(unsigned int)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (void).cxx_destruct;
@end
