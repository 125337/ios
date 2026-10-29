@interface MJTrimSnapInfo : NSObject
{
    NSMutableOrderedSet * _mutableAnchoredSegmentIDs; // +0x8
    BOOL _hasStorySegment; // +0x10
    struct _snapTime; // +0x14
}
- (id)initWithSnapTime:(struct)arg1 hasStorySegment:(BOOL)arg2 anchoredSegmentIDs:(id)arg3;
- (id)anchoredSegmentIDs;
- (void)appendAnchoredSegmentID:(id)arg1;
- (id)description;
- (struct)snapTime;
- (BOOL)hasStorySegment;
- (void)setHasStorySegment:(BOOL)arg1;
- (void).cxx_destruct;
@end

