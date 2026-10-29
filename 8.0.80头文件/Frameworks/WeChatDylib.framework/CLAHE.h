@interface CLAHE : Algorithm
{
    Ptr<cv::CLAHE> _nativePtrCLAHE; // +0x8
}
+ (id)fromNative:(Ptr<cv::CLAHE>)arg1;
- (id)initWithNativePtr:(Ptr<cv::CLAHE>)arg1;
- (void)apply:(id)arg1 dst:(id)arg2;
- (void)setClipLimit:(double)arg1;
- (double)getClipLimit;
- (void)setTilesGridSize:(id)arg1;
- (id)getTilesGridSize;
- (void)collectGarbage;
- (Ptr<cv::CLAHE>)nativePtrCLAHE;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
