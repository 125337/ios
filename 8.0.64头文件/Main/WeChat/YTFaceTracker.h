@interface YTFaceTracker : NSObject <UIAlertViewDelegate>
{
    YtFaceDetParam param; // +0x8
    YTFaceDetection * m_detection; // +0x30
    YTFaceAlignment * faRunner; // +0x38
    YTPoseEstimate * poseEstimate; // +0x40
    BOOL _hasFace; // +0x48
    YTPOSE _facePose; // +0x4c
    CGRect _faceRect; // +0x58
    struct _trackResInfo; // +0x78
}
+ (int)GlobalInit;
+ (void)GlobalRelease;
- (id)initWith:(BOOL)arg1;
- (void)dealloc;
- (id)faceRectsWithImage:(Mat)arg1;
- (CGRect)generateFaceRect:(vector<tiny_cv::Point_<float>, std::allocator<tiny_cv::Point_<float>>>)arg1 imageWidth:(int)arg2 imageHeight:(int)arg3;
- (id)getPtsFromFaceShape:(TC_FaceShape)arg1 withFacePoints:(void *)arg2;
- (struct)getTrackInfo;
- (id)facePointsInImage:(Mat)arg1 withRect:(CGRect)arg2;
- (BOOL)hasFace;
- (void)setHasFace:(BOOL)arg1;
- (CGRect)faceRect;
- (void)setFaceRect:(CGRect)arg1;
- (YTPOSE)facePose;
- (void)setFacePose:(YTPOSE)arg1;
- (struct)trackResInfo;
- (void)setTrackResInfo:(struct)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
