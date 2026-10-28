@interface WCFinderRedPacketVideoEditResponseParams : NSObject
{
    NSString * _thumbPath; // +0x8
    WCFinderRedPacketVideoEditCropRectModel * _cropRectModel; // +0x10
    WCFinderRedPacketCropSliderTimeRange * _timeRangeModel; // +0x18
}
- (id)init;
- (id)description;
- (id)thumbPath;
- (void)setThumbPath:(id)arg1;
- (id)cropRectModel;
- (void)setCropRectModel:(id)arg1;
- (id)timeRangeModel;
- (void)setTimeRangeModel:(id)arg1;
- (void).cxx_destruct;
@end
