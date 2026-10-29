@interface OMJSegment : NSObject
{
    NSString * _segmentID; // +0x8
    SharedPtr<XMJSegment> _backingSegment; // +0x10
}
- (id)initWithBackingSegment:(const void *)arg1;
- (struct)timeRangeInTimeline;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)segmentID;
- (SharedPtr<XMJSegment>)backingSegment;
- (void)setBackingSegment:(SharedPtr<XMJSegment>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
