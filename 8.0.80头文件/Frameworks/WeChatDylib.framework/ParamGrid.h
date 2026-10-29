@interface ParamGrid : NSObject
{
    Ptr<cv::ml::ParamGrid> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::ml::ParamGrid>)arg1;
+ (id)create:(double)arg1 maxVal:(double)arg2 logstep:(double)arg3;
+ (id)create:(double)arg1 maxVal:(double)arg2;
+ (id)create:(double)arg1;
+ (id)create;
- (id)initWithNativePtr:(Ptr<cv::ml::ParamGrid>)arg1;
- (double)minVal;
- (void)setMinVal:(double)arg1;
- (double)maxVal;
- (void)setMaxVal:(double)arg1;
- (double)logStep;
- (void)setLogStep:(double)arg1;
- (Ptr<cv::ml::ParamGrid>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
