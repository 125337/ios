@interface WCFinderMusicVideoRecommendItem : NSObject <NSCopying>
{
    NSString * _identifier; // +0x8
    NSString * _localIdentifier; // +0x10
    PHAsset * _asset; // +0x18
    unsigned long long _resourceType; // +0x20
    UIImage * _coverImage; // +0x28
    NSString * _videoPath; // +0x30
    AVAsset * _videoAsset; // +0x38
    AVVideoComposition * _previewVideoComposition; // +0x40
    unsigned long long _downloadState; // +0x48
    double _downloadProgress; // +0x50
}
- (BOOL)isPreviewEqualToItem:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)localIdentifier;
- (void)setLocalIdentifier:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (unsigned long long)resourceType;
- (void)setResourceType:(unsigned long long)arg1;
- (id)coverImage;
- (void)setCoverImage:(id)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)videoAsset;
- (void)setVideoAsset:(id)arg1;
- (id)previewVideoComposition;
- (void)setPreviewVideoComposition:(id)arg1;
- (unsigned long long)downloadState;
- (void)setDownloadState:(unsigned long long)arg1;
- (double)downloadProgress;
- (void)setDownloadProgress:(double)arg1;
- (void).cxx_destruct;
@end
