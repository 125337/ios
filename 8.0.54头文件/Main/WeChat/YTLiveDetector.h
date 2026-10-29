@interface YTLiveDetector : NSObject
{
    int detectCountDown; // +0x8
    BOOL _hasFace; // +0xc
    int _defaultDetectInterval; // +0x10
    NSMutableArray * _resultFacePoints; // +0x18
    unsigned long long _faceCount; // +0x20
    YTFaceTracker * _YTFaceTracker; // +0x28
    YTPOSE _facePose; // +0x30
    CGRect _faceRect; // +0x40
    struct _trackResInfo; // +0x60
}
+ (id)getVersion;
- (id)initWith:(BOOL)arg1;
- (BOOL)hasFace;
- (CGRect)faceRect;
- (YTPOSE)facePose;
- (struct)trackResInfo;
- (struct)getTrackInfo;
- (CGPoint)getNormalizedCenter:(Mat)arg1;
- (void)doDetectFace:(Mat)arg1;
- (void)detectFace:(Mat)arg1;
- (void)setHasFace:(BOOL)arg1;
- (void)setFaceRect:(CGRect)arg1;
- (id)resultFacePoints;
- (void)setResultFacePoints:(id)arg1;
- (unsigned long long)faceCount;
- (void)setFaceCount:(unsigned long long)arg1;
- (void)setFacePose:(YTPOSE)arg1;
- (void)setTrackResInfo:(struct)arg1;
- (int)defaultDetectInterval;
- (void)setDefaultDetectInterval:(int)arg1;
- (id)YTFaceTracker;
- (void)setYTFaceTracker:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

