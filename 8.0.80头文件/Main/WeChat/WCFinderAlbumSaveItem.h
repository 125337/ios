@interface WCFinderAlbumSaveItem : NSObject
{
    BOOL _isLivePhoto; // +0x8
    BOOL _ready; // +0x9
    BOOL _downloadSuccess; // +0xa
    long long _index; // +0x10
    UIImage * _image; // +0x18
    NSString * _videoPath; // +0x20
}
- (long long)index;
- (void)setIndex:(long long)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (BOOL)isLivePhoto;
- (void)setIsLivePhoto:(BOOL)arg1;
- (BOOL)ready;
- (void)setReady:(BOOL)arg1;
- (BOOL)downloadSuccess;
- (void)setDownloadSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end
