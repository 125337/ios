@interface EcsShareSnsExtInfo : NSObject
{
    NSString * _imgLocalPath; // +0x8
    NSString * _lastGmsgId; // +0x10
    NSString * _videoLocalPath; // +0x18
    NSString * _videoThumbLocalPath; // +0x20
    NSArray * _imgLocalPathList; // +0x28
    NSString * _dataUrl; // +0x30
    NSString * _thumbUrl; // +0x38
    NSData * _thumbData; // +0x40
    NSArray * _mediaList; // +0x48
}
- (id)imgLocalPath;
- (void)setImgLocalPath:(id)arg1;
- (id)lastGmsgId;
- (void)setLastGmsgId:(id)arg1;
- (id)videoLocalPath;
- (void)setVideoLocalPath:(id)arg1;
- (id)videoThumbLocalPath;
- (void)setVideoThumbLocalPath:(id)arg1;
- (id)imgLocalPathList;
- (void)setImgLocalPathList:(id)arg1;
- (id)dataUrl;
- (void)setDataUrl:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)thumbData;
- (void)setThumbData:(id)arg1;
- (id)mediaList;
- (void)setMediaList:(id)arg1;
- (void).cxx_destruct;
@end
