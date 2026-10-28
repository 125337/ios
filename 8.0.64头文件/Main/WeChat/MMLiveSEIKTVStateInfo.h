@interface MMLiveSEIKTVStateInfo : NSObject
{
    unsigned int _version; // +0x8
    MMLiveSEIKTVSongItem * _cs; // +0x10
}
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)cs;
- (void)setCs:(id)arg1;
- (void).cxx_destruct;
@end
