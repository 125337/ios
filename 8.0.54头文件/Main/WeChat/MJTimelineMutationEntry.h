@interface MJTimelineMutationEntry : NSObject
{
    BOOL _isVisualClipChanged; // +0x8
    OMJID * _segmentID; // +0x10
    NSIndexPath * _indexPath; // +0x18
}
- (id)initWithSegmentID:(id)arg1 indexPath:(id)arg2 isVisualClipChanged:(BOOL)arg3;
- (unsigned long long)hash;
- (id)description;
- (id)segmentID;
- (id)indexPath;
- (BOOL)isVisualClipChanged;
- (void).cxx_destruct;
@end

