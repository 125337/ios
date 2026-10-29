@interface BOWKMeansTrainer : BOWTrainer
{
    Ptr<cv::BOWKMeansTrainer> _nativePtrBOWKMeansTrainer; // +0x8
}
+ (id)fromNative:(Ptr<cv::BOWKMeansTrainer>)arg1;
- (id)initWithNativePtr:(Ptr<cv::BOWKMeansTrainer>)arg1;
- (id)initWithClusterCount:(int)arg1 termcrit:(id)arg2 attempts:(int)arg3 flags:(int)arg4;
- (id)initWithClusterCount:(int)arg1 termcrit:(id)arg2 attempts:(int)arg3;
- (id)initWithClusterCount:(int)arg1 termcrit:(id)arg2;
- (id)initWithClusterCount:(int)arg1;
- (id)cluster;
- (id)cluster:(id)arg1;
- (Ptr<cv::BOWKMeansTrainer>)nativePtrBOWKMeansTrainer;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
