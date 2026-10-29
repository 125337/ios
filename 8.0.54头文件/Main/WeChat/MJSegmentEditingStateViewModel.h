@interface MJSegmentEditingStateViewModel : NSObject
{
    OMCSegment * _segment; // +0x8
}
- (void)enterEditingStateWithSegmentVM:(id)arg1;
- (void)enterEditingStateWithSegmentVM:(id)arg1 previewTime:(struct)arg2;
- (void)leaveEditingState;
- (void)segmentLeaveEditingStateIfNeeded:(id)arg1;
- (void)_leaveEditingState;
- (id)segment;
- (void)setSegment:(id)arg1;
- (void).cxx_destruct;
@end

