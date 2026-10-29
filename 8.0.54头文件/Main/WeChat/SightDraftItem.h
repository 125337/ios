@interface SightDraftItem : MMObject <PBCoding, NSCoding>
{
    unsigned long long _mode; // +0x8
    NSString * _videoPath; // +0x10
    NSString * _videoDraftPath; // +0x18
    NSString * _thumbPath; // +0x20
    UIImage * _thumbImg; // +0x28
    NSString * _moviePath; // +0x30
    NSString * _originalAssetId; // +0x38
}
+ (void)PBArrayAdd_mode;
+ (void)PBArrayAdd_thumbPath;
+ (void)PBArrayAdd_videoPath;
+ (void)PBArrayAdd_originalAssetId;
+ (void)initialize;
+ (id)draftItemWithThumbImg:(id)arg1 andPath:(id)arg2 inMode:(unsigned long long)arg3;
- (void)setIsEdited:(BOOL)arg1;
- (BOOL)isEdited;
- (void)setEditVideoAttr:(id)arg1;
- (id)editVideoAttr;
- (void)setCompositionAttr:(id)arg1;
- (id)compositionAttr;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)getVideoPath;
- (id)getThumbPath;
- (id)getVideoTmpPathAndCopyIfNeeded;
- (unsigned int)duration;
- (BOOL)isValid;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)videoDraftPath;
- (void)setVideoDraftPath:(id)arg1;
- (id)thumbPath;
- (void)setThumbPath:(id)arg1;
- (id)thumbImg;
- (void)setThumbImg:(id)arg1;
- (id)moviePath;
- (void)setMoviePath:(id)arg1;
- (id)originalAssetId;
- (void)setOriginalAssetId:(id)arg1;
- (void).cxx_destruct;
@end

