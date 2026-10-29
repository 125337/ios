@interface MMWebViewBackgroundAlbumAudioInfo : NSObject <PBCoding>
{
    unsigned int _durantion; // +0x8
    unsigned int _offset; // +0xc
    NSString * _domain; // +0x10
    NSString * _albumId; // +0x18
    NSString * _audioId; // +0x20
    MMWebViewBackgroundAlbumAudioExtInfo * _extInfo; // +0x28
}
+ (void)PBArrayAdd_albumId;
+ (void)PBArrayAdd_audioId;
+ (void)PBArrayAdd_durantion;
+ (void)PBArrayAdd_offset;
+ (void)PBArrayAdd_domain;
+ (void)PBArrayAdd_extInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)domain;
- (void)setDomain:(id)arg1;
- (id)albumId;
- (void)setAlbumId:(id)arg1;
- (id)audioId;
- (void)setAudioId:(id)arg1;
- (unsigned int)durantion;
- (void)setDurantion:(unsigned int)arg1;
- (unsigned int)offset;
- (void)setOffset:(unsigned int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

