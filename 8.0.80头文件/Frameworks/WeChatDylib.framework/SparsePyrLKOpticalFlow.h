@interface SparsePyrLKOpticalFlow : SparseOpticalFlow
{
    Ptr<cv::SparsePyrLKOpticalFlow> _nativePtrSparsePyrLKOpticalFlow; // +0x8
}
+ (id)fromNative:(Ptr<cv::SparsePyrLKOpticalFlow>)arg1;
+ (id)create:(id)arg1 maxLevel:(int)arg2 crit:(id)arg3 flags:(int)arg4 minEigThreshold:(double)arg5;
+ (id)create:(id)arg1 maxLevel:(int)arg2 crit:(id)arg3 flags:(int)arg4;
+ (id)create:(id)arg1 maxLevel:(int)arg2 crit:(id)arg3;
+ (id)create:(id)arg1 maxLevel:(int)arg2;
+ (id)create:(id)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::SparsePyrLKOpticalFlow>)arg1;
- (id)getWinSize;
- (void)setWinSize:(id)arg1;
- (int)getMaxLevel;
- (void)setMaxLevel:(int)arg1;
- (id)getTermCriteria;
- (void)setTermCriteria:(id)arg1;
- (int)getFlags;
- (void)setFlags:(int)arg1;
- (double)getMinEigThreshold;
- (void)setMinEigThreshold:(double)arg1;
- (Ptr<cv::SparsePyrLKOpticalFlow>)nativePtrSparsePyrLKOpticalFlow;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
