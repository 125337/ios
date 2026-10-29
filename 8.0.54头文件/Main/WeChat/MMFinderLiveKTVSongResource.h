@interface MMFinderLiveKTVSongResource : NSObject
{
    unsigned int _type; // +0x8
    int _compressType; // +0xc
    NSData * _content; // +0x10
    long long _updateTime; // +0x18
    NSString * _version; // +0x20
}
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (int)compressType;
- (void)setCompressType:(int)arg1;
- (long long)updateTime;
- (void)setUpdateTime:(long long)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (void).cxx_destruct;
@end

