@interface TBRegionChangeDistributor : NSObject
{
    BOOL _animated; // +0x8
    BOOL _byGestured; // +0x9
    BOOL _isChanging; // +0xa
    id <TBRegionChangeDistributorDelegate> _delegate; // +0x10
    long long _zoomCount; // +0x18
    long long _centerCount; // +0x20
    long long _rotationCount; // +0x28
    long long _overlookingCount; // +0x30
    long long _centerOffsetCount; // +0x38
    TBDistributerParameter * _zoomParameter; // +0x40
    TBDistributerParameter * _centerParameter; // +0x48
}
- (BOOL)matchStatic;
- (void)notifyRegionWillChangeAnimated:(BOOL)arg1 byGesture:(BOOL)arg2;
- (void)notifyRegionDidChangeAnimated:(BOOL)arg1 byGesture:(BOOL)arg2;
- (void)notifyWillMoveAnimated:(BOOL)arg1 byGesture:(BOOL)arg2;
- (void)notifyDidMoveAnimated:(BOOL)arg1 byGesture:(BOOL)arg2;
- (void)notifyWillZoomAnimated:(BOOL)arg1 byGesture:(BOOL)arg2;
- (void)notifyDidZoomAnimated:(BOOL)arg1 byGesture:(BOOL)arg2;
- (BOOL)isDuringChange;
- (void)registerOption:(unsigned long long)arg1 animated:(BOOL)arg2 byGesture:(BOOL)arg3;
- (void)completeOption:(unsigned long long)arg1;
- (void)reset;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)animated;
- (void)setAnimated:(BOOL)arg1;
- (BOOL)byGestured;
- (void)setByGestured:(BOOL)arg1;
- (long long)zoomCount;
- (void)setZoomCount:(long long)arg1;
- (long long)centerCount;
- (void)setCenterCount:(long long)arg1;
- (long long)rotationCount;
- (void)setRotationCount:(long long)arg1;
- (long long)overlookingCount;
- (void)setOverlookingCount:(long long)arg1;
- (long long)centerOffsetCount;
- (void)setCenterOffsetCount:(long long)arg1;
- (BOOL)isChanging;
- (void)setIsChanging:(BOOL)arg1;
- (id)zoomParameter;
- (void)setZoomParameter:(id)arg1;
- (id)centerParameter;
- (void)setCenterParameter:(id)arg1;
- (void).cxx_destruct;
@end

