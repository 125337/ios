@interface MMFinderLiveKtvSelfWaitSongCountInfo : NSObject
{
    unsigned int _selfWaitSongCnt; // +0x8
    unsigned long long _version; // +0x10
}
+ (id)genSelfWaitSongCountInfoWithWaitCnt:(unsigned int)arg1 version:(unsigned long long)arg2;
- (id)description;
- (unsigned int)selfWaitSongCnt;
- (void)setSelfWaitSongCnt:(unsigned int)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
@end

