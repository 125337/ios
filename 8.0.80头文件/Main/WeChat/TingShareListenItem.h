@interface TingShareListenItem : WXPBGeneratedMessage <NSCopying, NSCoding>
+ (id)xmlTagCustomFromXMLProcesslistForConfigTag:(id)arg1;
+ (id)xmlTagCustomToXMLProcesslistForConfigTag:(id)arg1;
+ (id)itemFromXML:(XmlReaderNode_t *)arg1;
+ (void)initialize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)toXML:(id)arg1;
- (id)toTingItem;
- (BOOL)hasSourceList;
- (id)finderSingerInfo;
- (BOOL)isFinderSinger;
- (id)finderSingerUsername;
- (id)finderSingerNickname;
- (id)displayTextForFinderSinger;
@end
