@interface DenseOpticalFlow : Algorithm
{
    Ptr<cv::DenseOpticalFlow> _nativePtrDenseOpticalFlow; // +0x8
}
+ (id)fromNative:(Ptr<cv::DenseOpticalFlow>)arg1;
- (id)initWithNativePtr:(Ptr<cv::DenseOpticalFlow>)arg1;
- (void)calc:(id)arg1 I1:(id)arg2 flow:(id)arg3;
- (void)collectGarbage;
- (Ptr<cv::DenseOpticalFlow>)nativePtrDenseOpticalFlow;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
