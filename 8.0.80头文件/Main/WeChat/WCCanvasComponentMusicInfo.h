@interface WCCanvasComponentMusicInfo : MMObject <NSCoding, WCAdParserProtocol>
{
    int _displayType; // +0x8
    WCCanvasComponentMusicItem * _musicItem; // +0x10
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)displayType;
- (void)setDisplayType:(int)arg1;
- (id)musicItem;
- (void)setMusicItem:(id)arg1;
- (void).cxx_destruct;
@end
