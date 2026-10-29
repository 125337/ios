@interface ScanCodeHistoryItem : MMObject
{
    BOOL _isFromAlbum; // +0x8
    BOOL _isFromCombineTab; // +0x9
    int _fromScene; // +0xc
    int _version; // +0x10
    int _networkType; // +0x14
    NSString * _codeUrl; // +0x18
    NSString * _timeString; // +0x20
    NSString * _type; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)codeUrl;
- (void)setCodeUrl:(id)arg1;
- (id)timeString;
- (void)setTimeString:(id)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (int)version;
- (void)setVersion:(int)arg1;
- (BOOL)isFromAlbum;
- (void)setIsFromAlbum:(BOOL)arg1;
- (int)networkType;
- (void)setNetworkType:(int)arg1;
- (BOOL)isFromCombineTab;
- (void)setIsFromCombineTab:(BOOL)arg1;
- (void).cxx_destruct;
@end

