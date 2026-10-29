@interface GeneralizedHoughBallard : GeneralizedHough
{
    Ptr<cv::GeneralizedHoughBallard> _nativePtrGeneralizedHoughBallard; // +0x8
}
+ (id)fromNative:(Ptr<cv::GeneralizedHoughBallard>)arg1;
- (id)initWithNativePtr:(Ptr<cv::GeneralizedHoughBallard>)arg1;
- (void)setLevels:(int)arg1;
- (int)getLevels;
- (void)setVotesThreshold:(int)arg1;
- (int)getVotesThreshold;
- (Ptr<cv::GeneralizedHoughBallard>)nativePtrGeneralizedHoughBallard;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
