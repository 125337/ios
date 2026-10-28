@interface MMMusicMVTrackItemThumbInfo : NSObject
{
    WCFinderDataItem * _finderDataItem; // +0x8
    UIImage * _thumbImage; // +0x10
    NSMutableDictionary * _dictVideoThumb; // +0x18
    NSString * _videoLocalPath; // +0x20
    NSString * _thumbUrl; // +0x28
    MMMusicMVTrackItem * _refTrackItem; // +0x30
}
- (void)setThumbImage:(id)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (id)thumbImage;
- (id)dictVideoThumb;
- (void)setDictVideoThumb:(id)arg1;
- (id)videoLocalPath;
- (void)setVideoLocalPath:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)refTrackItem;
- (void)setRefTrackItem:(id)arg1;
- (void).cxx_destruct;
@end
