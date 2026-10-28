@interface WCFinderRedPacketCropSliderModel : NSObject
{
    BOOL _isLoadingImg; // +0x8
    id <WCFinderRedPacketCropSliderModelDelegate> _delegate; // +0x10
    AVAsset * _asset; // +0x18
    double _videoDuration; // +0x20
    NSMutableArray * _thumbImages; // +0x28
}
+ (double)shareTimeSecondsInterval;
- (id)initWithAsset:(id)arg1;
- (void)loadAssetByShareSize:(CGSize)arg1 completion:(id /* block */)arg2;
- (long long)numnerOfItems;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (BOOL)isLoadingImg;
- (void)setIsLoadingImg:(BOOL)arg1;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
- (id)thumbImages;
- (void)setThumbImages:(id)arg1;
- (void).cxx_destruct;
@end
