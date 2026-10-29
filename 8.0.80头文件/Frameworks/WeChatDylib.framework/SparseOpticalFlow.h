@interface SparseOpticalFlow : Algorithm
{
    Ptr<cv::SparseOpticalFlow> _nativePtrSparseOpticalFlow; // +0x8
}
+ (id)fromNative:(Ptr<cv::SparseOpticalFlow>)arg1;
- (id)initWithNativePtr:(Ptr<cv::SparseOpticalFlow>)arg1;
- (void)calc:(id)arg1 nextImg:(id)arg2 prevPts:(id)arg3 nextPts:(id)arg4 status:(id)arg5 err:(id)arg6;
- (void)calc:(id)arg1 nextImg:(id)arg2 prevPts:(id)arg3 nextPts:(id)arg4 status:(id)arg5;
- (Ptr<cv::SparseOpticalFlow>)nativePtrSparseOpticalFlow;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
