@interface FittingRoomPhotoSelectionRequest : NSObject
{
    unsigned long long _source; // +0x8
    long long _minimumImageEdge; // +0x10
    double _maximumImageAspectRatio; // +0x18
}
+ (id)makeWithSource:(unsigned long long)arg1 minimumImageEdge:(long long)arg2 maximumImageAspectRatio:(double)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
- (long long)minimumImageEdge;
- (void)setMinimumImageEdge:(long long)arg1;
- (double)maximumImageAspectRatio;
- (void)setMaximumImageAspectRatio:(double)arg1;
@end
