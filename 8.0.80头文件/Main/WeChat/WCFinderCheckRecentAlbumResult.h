@interface WCFinderCheckRecentAlbumResult : NSObject
{
    unsigned long long _imageType; // +0x8
    UIImage * _fakeSnapshot; // +0x10
    MMAsset * _asset; // +0x18
    UIImage * _thumbnail; // +0x20
}
- (id)initWithFakeSnapshot:(id)arg1 thumbnail:(id)arg2;
- (id)initWithAsset:(id)arg1 thumbnail:(id)arg2;
- (BOOL)isValid;
- (unsigned long long)imageType;
- (void)setImageType:(unsigned long long)arg1;
- (id)fakeSnapshot;
- (void)setFakeSnapshot:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)thumbnail;
- (void)setThumbnail:(id)arg1;
- (void).cxx_destruct;
@end
