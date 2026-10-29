@interface TAVResource : NSObject <NSCopying, TAVResourceTrackInfoProvider>
{
    CGSize _size; // +0x8
    struct _scaledDuration; // +0x18
    struct _duration; // +0x30
    struct _sourceTimeRange; // +0x48
}
- (id)init;
- (void)setDuration:(struct)arg1;
- (void)setSourceTimeRange:(struct)arg1;
- (struct)scaledDuration;
- (void)setScaledDuration:(struct)arg1;
- (struct)sourceTimeForTimelineTime:(struct)arg1;
- (id)trackInfoForType:(id)arg1 atIndex:(long long)arg2;
- (id)tracksForType:(id)arg1;
- (id)imageAtTime:(struct)arg1 renderSize:(CGSize)arg2;
- (id)pcmBufferAtTimeRange:(struct)arg1 audioFormat:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)debugDescription;
- (struct)duration;
- (struct)sourceTimeRange;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
@end

