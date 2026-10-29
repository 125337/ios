@interface MMWebViewBackgroundAlbumInfo : NSObject <PBCoding>
{
    NSString * _albumId; // +0x8
    NSString * _curAudioId; // +0x10
    NSMutableDictionary * _dictAlbumAudioListInfo; // +0x18
    NSString * _domain; // +0x20
}
+ (void)PBArrayAdd_albumId;
+ (void)PBArrayAdd_dictAlbumAudioListInfo;
+ (void)PBArrayAdd_curAudioId;
+ (void)PBArrayAdd_domain;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)albumId;
- (void)setAlbumId:(id)arg1;
- (id)curAudioId;
- (void)setCurAudioId:(id)arg1;
- (id)dictAlbumAudioListInfo;
- (void)setDictAlbumAudioListInfo:(id)arg1;
- (id)domain;
- (void)setDomain:(id)arg1;
- (void).cxx_destruct;
@end

