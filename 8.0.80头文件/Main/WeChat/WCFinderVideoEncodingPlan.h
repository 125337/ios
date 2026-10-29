@interface WCFinderVideoEncodingPlan : NSObject
{
    VideoEncodeTargetInfo * _targetInfo; // +0x8
    double _preparationDurationMs; // +0x10
}
- (id)initWithTargetInfo:(id)arg1 preparationDurationMs:(double)arg2;
- (id)description;
- (id)targetInfo;
- (double)preparationDurationMs;
- (void).cxx_destruct;
@end
