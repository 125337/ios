@interface WCFinderCropVideoModel : NSObject
{
    AVAsset * _avAsset; // +0x8
    MMAssetInfo * _assetInfo; // +0x10
    NSURL * _playerURL; // +0x18
    CGSize _playerPreviewSize; // +0x20
    CGSize _screenSize; // +0x30
    CGPoint _videoContentOffset; // +0x40
    CGSize _cropViewSize; // +0x50
    struct _timeRange; // +0x60
}
- (id)avAsset;
- (void)setAvAsset:(id)arg1;
- (CGSize)playerPreviewSize;
- (void)setPlayerPreviewSize:(CGSize)arg1;
- (CGSize)screenSize;
- (void)setScreenSize:(CGSize)arg1;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (id)assetInfo;
- (void)setAssetInfo:(id)arg1;
- (id)playerURL;
- (void)setPlayerURL:(id)arg1;
- (CGPoint)videoContentOffset;
- (void)setVideoContentOffset:(CGPoint)arg1;
- (CGSize)cropViewSize;
- (void)setCropViewSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
