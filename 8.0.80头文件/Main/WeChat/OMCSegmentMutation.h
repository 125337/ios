@interface OMCSegmentMutation : NSObject
{
    BOOL _isVisualClipChanged; // +0x8
    OMJID * _segmentID; // +0x10
}
- (id)initWithBackingMutationInfo:(const void *)arg1;
- (id)description;
- (id)segmentID;
- (BOOL)isVisualClipChanged;
- (void).cxx_destruct;
@end
