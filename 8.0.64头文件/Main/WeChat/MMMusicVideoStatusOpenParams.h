@interface MMMusicVideoStatusOpenParams : NSObject
{
    MMMusicMVSongInfo * _mvSongInfo; // +0x8
    MMMusicShareItem * _shareItem; // +0x10
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)mvSongInfo;
- (void)setMvSongInfo:(id)arg1;
- (id)shareItem;
- (void)setShareItem:(id)arg1;
- (void).cxx_destruct;
@end
