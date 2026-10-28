@interface TAVAudioProcessingRenderInfo : NSObject
{
    AudioStreamBasicDescription _processingFormat; // +0x8
    struct _timeRange; // +0x30
    struct _segmentTimeRange; // +0x60
}
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (struct)segmentTimeRange;
- (void)setSegmentTimeRange:(struct)arg1;
- (AudioStreamBasicDescription)processingFormat;
- (void)setProcessingFormat:(AudioStreamBasicDescription)arg1;
@end
