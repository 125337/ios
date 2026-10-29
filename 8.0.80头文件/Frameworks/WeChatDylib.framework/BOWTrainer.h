@interface BOWTrainer : NSObject
{
    Ptr<cv::BOWTrainer> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::BOWTrainer>)arg1;
- (id)initWithNativePtr:(Ptr<cv::BOWTrainer>)arg1;
- (void)add:(id)arg1;
- (id)getDescriptors;
- (int)descriptorsCount;
- (void)clear;
- (id)cluster;
- (id)cluster:(id)arg1;
- (Ptr<cv::BOWTrainer>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
