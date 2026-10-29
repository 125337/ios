@interface Feature2D : Algorithm
{
    Ptr<cv::Feature2D> _nativePtrFeature2D; // +0x8
}
+ (id)fromNative:(Ptr<cv::Feature2D>)arg1;
- (id)initWithNativePtr:(Ptr<cv::Feature2D>)arg1;
- (void)detect:(id)arg1 keypoints:(id)arg2 mask:(id)arg3;
- (void)detect:(id)arg1 keypoints:(id)arg2;
- (void)detect2:(id)arg1 keypoints:(id)arg2 masks:(id)arg3;
- (void)detect2:(id)arg1 keypoints:(id)arg2;
- (void)compute:(id)arg1 keypoints:(id)arg2 descriptors:(id)arg3;
- (void)compute2:(id)arg1 keypoints:(id)arg2 descriptors:(id)arg3;
- (void)detectAndCompute:(id)arg1 mask:(id)arg2 keypoints:(id)arg3 descriptors:(id)arg4 useProvidedKeypoints:(BOOL)arg5;
- (void)detectAndCompute:(id)arg1 mask:(id)arg2 keypoints:(id)arg3 descriptors:(id)arg4;
- (int)descriptorSize;
- (int)descriptorType;
- (int)defaultNorm;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (BOOL)empty;
- (id)getDefaultName;
- (Ptr<cv::Feature2D>)nativePtrFeature2D;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
