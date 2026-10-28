@interface MMFinderLiveKtvAllWaitSongCountInfo : NSObject
{
    unsigned int _allWaitSongCnt; // +0x8
    unsigned long long _version; // +0x10
}
+ (id)genAllWaitSongCountInfoWithWaitCnt:(unsigned int)arg1 version:(unsigned long long)arg2;
- (id)description;
- (unsigned int)allWaitSongCnt;
- (void)setAllWaitSongCnt:(unsigned int)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
@end
