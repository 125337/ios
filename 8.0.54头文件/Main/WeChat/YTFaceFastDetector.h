@interface YTFaceFastDetector : NSObject
+ (unsigned long long)getFaceCountFromImage:(id)arg1;
- (void)dealloc;
- (id)init;
- (int)globalInitDetector;
- (int)globalReleaseDetector;
- (Mat)getCvRgbFromCGImageRef:(CGImage *)arg1;
- (unsigned long long)getImageFaceCount:(id)arg1;
@end

