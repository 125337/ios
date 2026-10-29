@interface WCFinderMusicInfoModel : NSObject <PBCoding>
{
    unsigned int _chorusBegin; // +0x8
    unsigned int _docType; // +0xc
    NSString * _docId; // +0x10
    NSString * _albumThumbUrl; // +0x18
    NSString * _name; // +0x20
    NSString * _artist; // +0x28
    NSString * _albumName; // +0x30
    NSString * _mediaStreamingUrl; // +0x38
    NSString * _webUrl; // +0x40
    NSString * _miniappInfo; // +0x48
    NSString * _floatThumbUrl; // +0x50
    NSString * _songId; // +0x58
    double _duration; // +0x60
}
+ (void)PBArrayAdd_docId;
+ (void)PBArrayAdd_albumThumbUrl;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_artist;
+ (void)PBArrayAdd_albumName;
+ (void)PBArrayAdd_mediaStreamingUrl;
+ (void)PBArrayAdd_chorusBegin;
+ (void)PBArrayAdd_webUrl;
+ (void)PBArrayAdd_miniappInfo;
+ (void)PBArrayAdd_floatThumbUrl;
+ (void)PBArrayAdd_docType;
+ (void)PBArrayAdd_songId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithFinderMusicInfo:(id)arg1;
- (id)initWithRecommendMusicInfo:(id)arg1;
- (id)genMusicInfo;
- (id)genRecommendedMusicInfo;
- (id)genMMMusicInfo;
- (id)docId;
- (void)setDocId:(id)arg1;
- (id)albumThumbUrl;
- (void)setAlbumThumbUrl:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)artist;
- (void)setArtist:(id)arg1;
- (id)albumName;
- (void)setAlbumName:(id)arg1;
- (id)mediaStreamingUrl;
- (void)setMediaStreamingUrl:(id)arg1;
- (unsigned int)chorusBegin;
- (void)setChorusBegin:(unsigned int)arg1;
- (id)webUrl;
- (void)setWebUrl:(id)arg1;
- (id)miniappInfo;
- (void)setMiniappInfo:(id)arg1;
- (id)floatThumbUrl;
- (void)setFloatThumbUrl:(id)arg1;
- (unsigned int)docType;
- (void)setDocType:(unsigned int)arg1;
- (id)songId;
- (void)setSongId:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void).cxx_destruct;
@end

