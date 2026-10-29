@interface TrackerGOTURNParams : NSObject
{
    Ptr<cv::TrackerGOTURN::Params> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::TrackerGOTURN::Params>)arg1;
- (id)initWithNativePtr:(Ptr<cv::TrackerGOTURN::Params>)arg1;
- (id)init;
- (id)modelTxt;
- (void)setModelTxt:(id)arg1;
- (id)modelBin;
- (void)setModelBin:(id)arg1;
- (Ptr<cv::TrackerGOTURN::Params>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
