@interface BOWImgDescriptorExtractor : NSObject
{
    Ptr<cv::BOWImgDescriptorExtractor> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::BOWImgDescriptorExtractor>)arg1;
- (id)initWithNativePtr:(Ptr<cv::BOWImgDescriptorExtractor>)arg1;
- (void)setVocabulary:(id)arg1;
- (id)getVocabulary;
- (void)compute:(id)arg1 keypoints:(id)arg2 imgDescriptor:(id)arg3;
- (int)descriptorSize;
- (int)descriptorType;
- (Ptr<cv::BOWImgDescriptorExtractor>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
