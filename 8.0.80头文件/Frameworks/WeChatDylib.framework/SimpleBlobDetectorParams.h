@interface SimpleBlobDetectorParams : NSObject
{
    Ptr<cv::SimpleBlobDetector::Params> _nativePtr; // +0x8
}
+ (id)fromNative:(Ptr<cv::SimpleBlobDetector::Params>)arg1;
- (id)initWithNativePtr:(Ptr<cv::SimpleBlobDetector::Params>)arg1;
- (id)init;
- (float)thresholdStep;
- (void)setThresholdStep:(float)arg1;
- (float)minThreshold;
- (void)setMinThreshold:(float)arg1;
- (float)maxThreshold;
- (void)setMaxThreshold:(float)arg1;
- (unsigned long long)minRepeatability;
- (void)setMinRepeatability:(unsigned long long)arg1;
- (float)minDistBetweenBlobs;
- (void)setMinDistBetweenBlobs:(float)arg1;
- (BOOL)filterByColor;
- (void)setFilterByColor:(BOOL)arg1;
- (unsigned char)blobColor;
- (void)setBlobColor:(unsigned char)arg1;
- (BOOL)filterByArea;
- (void)setFilterByArea:(BOOL)arg1;
- (float)minArea;
- (void)setMinArea:(float)arg1;
- (float)maxArea;
- (void)setMaxArea:(float)arg1;
- (BOOL)filterByCircularity;
- (void)setFilterByCircularity:(BOOL)arg1;
- (float)minCircularity;
- (void)setMinCircularity:(float)arg1;
- (float)maxCircularity;
- (void)setMaxCircularity:(float)arg1;
- (BOOL)filterByInertia;
- (void)setFilterByInertia:(BOOL)arg1;
- (float)minInertiaRatio;
- (void)setMinInertiaRatio:(float)arg1;
- (float)maxInertiaRatio;
- (void)setMaxInertiaRatio:(float)arg1;
- (BOOL)filterByConvexity;
- (void)setFilterByConvexity:(BOOL)arg1;
- (float)minConvexity;
- (void)setMinConvexity:(float)arg1;
- (float)maxConvexity;
- (void)setMaxConvexity:(float)arg1;
- (Ptr<cv::SimpleBlobDetector::Params>)nativePtr;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
