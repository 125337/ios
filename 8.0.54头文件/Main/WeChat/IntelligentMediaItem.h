@interface IntelligentMediaItem : MMObject <PBCoding>
{
    unsigned int _mesLocalID; // +0x8
    long long _mesSvrID; // +0x10
    NSString * _userName; // +0x18
    NSString * _mediaFilePath; // +0x20
}
+ (void)PBArrayAdd_mesLocalID;
+ (void)PBArrayAdd_mesSvrID;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_mediaFilePath;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)copyFieldFromMediaItem:(id)arg1;
- (unsigned int)mesLocalID;
- (void)setMesLocalID:(unsigned int)arg1;
- (long long)mesSvrID;
- (void)setMesSvrID:(long long)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)mediaFilePath;
- (void)setMediaFilePath:(id)arg1;
- (void).cxx_destruct;
@end

