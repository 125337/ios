@interface YTFaceFastDetector : NSObject
+ (unsigned long long)getFaceCountFromImage:(id)arg1;
+ (id)getFaceDetectResultsFromImage:(id)arg1 finalThreshold:(double)arg2;
- (void)dealloc;
- (id)init;
- (int)globalInitDetector;
- (int)globalReleaseDetector;
- (Mat)getCvRgbFromCGImageRef:(CGImage *)arg1;
- (Mat)p_getCvRgbFromCGImageRef:(CGImage *)arg1;
- (unsigned long long)getImageFaceCount:(id)arg1;
- (id)getImageFaceDetectResults:(id)arg1 finalThreshold:(double)arg2;
- (id)getBGRFaceDetectResultsWithData:(const char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 finalThreshold:(double)arg5;
- (id)getFaceDetectResultsFromRGBMat:(const Mat *)arg1 finalThreshold:(double)arg2;
@end
