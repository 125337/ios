@interface WeVisFace : NSObject
{
    TrackerManager trackerManager; // +0x8
}
- (int)initFace;
- (int)initFace:(id)arg1;
- (int)detectImage:(const char *)arg1 imgWidth:(int)arg2 imgHeight:(int)arg3 imgFormat:(int)arg4 imgRotate:(int)arg5;
- (void)getFaceRect:(id)arg1;
- (void)getFaceAlignment:(id)arg1;
- (void)getPartConfidence:(id)arg1;
- (void)getPoseAngle:(id)arg1;
- (void)releaseFace;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

