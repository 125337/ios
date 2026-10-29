@interface MJVisualClipSegmentViewModel : MJElementSegmentViewModel
{
    struct _prefetchingParams; // +0x8
    BOOL _isReversed; // +0x28
    BOOL _isSpeedCurveAdjusted; // +0x29
    id <OMCThumbnailProvider> _thumbnailProvider; // +0x30
    double _storylineHeight; // +0x38
    OMCClipSegment * _clipSegment; // +0x40
    id <OMCColorAdjustable> _colorAdjustable; // +0x48
    id <OMCPictureEnhancable> _pictureEnhancable; // +0x50
    id <OMCFilterAdjustable> _filterAdjustable; // +0x58
    id <OMCContentSpatialAdjustable> _contentSpatialAdjustable; // +0x60
    id <OMCVolumeAdjustable> _volumeAdjustable; // +0x68
    id <OMCClipSpeedAdjustable> _speedAdjustable; // +0x70
}
- (id)initWithClipSegment:(id)arg1 storylineHeight:(double)arg2;
- (BOOL)syncWithSegment:(id)arg1;
- (void)syncWithVisualClipSegmentImpl;
- (void)dealloc;
- (id)thumbnailProvider;
- (CGSize)thumbnailPixelSize;
- (CGSize)thumbnailPointSize;
- (long long)requestThumbnailAtTimeRange:(struct)arg1 resultHandler:(id /* block */)arg2;
- (void)cancelRequestTask:(long long)arg1;
- (void)cancelAllRequestTasks;
- (void)reopenThumbnailProviderIfNeeded;
- (void)prefetch;
- (void)cancelPrefetching;
- (id)mediaFilePath;
- (id)phLocalIdentifier;
- (struct)clipTimeToMedia:(struct)arg1;
- (struct)mediaTimeToClip:(struct)arg1;
- (BOOL)isFilterAdjusted;
- (BOOL)isAudioMuted;
- (BOOL)isContentSpatialAdjusted;
- (BOOL)isColorAdjusted;
- (BOOL)isPictureParamAdjusted;
- (id)speedAdjustableProxy;
- (void)syncWithMutationEntry:(id)arg1;
- (void)setThumbnailProvider:(id)arg1;
- (BOOL)isReversed;
- (BOOL)isSpeedCurveAdjusted;
- (double)storylineHeight;
- (id)clipSegment;
- (void)setClipSegment:(id)arg1;
- (id)colorAdjustable;
- (void)setColorAdjustable:(id)arg1;
- (id)pictureEnhancable;
- (void)setPictureEnhancable:(id)arg1;
- (id)filterAdjustable;
- (void)setFilterAdjustable:(id)arg1;
- (id)contentSpatialAdjustable;
- (void)setContentSpatialAdjustable:(id)arg1;
- (id)volumeAdjustable;
- (void)setVolumeAdjustable:(id)arg1;
- (id)speedAdjustable;
- (void)setSpeedAdjustable:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
