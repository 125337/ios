@interface FavSightInfo : NSObject
{
    BOOL _needLazyDownload; // +0x8
    int _duration; // +0xc
    int _type; // +0x10
    int _illegalType; // +0x14
    NSString * _dataPath; // +0x18
    NSString * _thumbPath; // +0x20
    FavStreamVideoItem * _streamVideoItem; // +0x28
    NSString * _statExtStr; // +0x30
    long long _dataSize; // +0x38
    NSString * _videoUrl; // +0x40
    NSString * _thumbUrl; // +0x48
    FavoritesItem * _favItem; // +0x50
    FavoritesItemDataField * _favData; // +0x58
}
+ (id)createSightInfoWithData:(id)arg1 AndItem:(id)arg2;
- (id)dataPath;
- (void)setDataPath:(id)arg1;
- (id)thumbPath;
- (void)setThumbPath:(id)arg1;
- (id)streamVideoItem;
- (void)setStreamVideoItem:(id)arg1;
- (int)duration;
- (void)setDuration:(int)arg1;
- (id)statExtStr;
- (void)setStatExtStr:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)illegalType;
- (void)setIllegalType:(int)arg1;
- (long long)dataSize;
- (void)setDataSize:(long long)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)favItem;
- (void)setFavItem:(id)arg1;
- (id)favData;
- (void)setFavData:(id)arg1;
- (BOOL)needLazyDownload;
- (void)setNeedLazyDownload:(BOOL)arg1;
- (void).cxx_destruct;
@end

