@interface YtFaceFrameInfo : NSObject
{
    vector<float, std::allocator<float>> _faceShape; // +0x8
    Mat _faceFrame; // +0x20
}
- (id)initWithMat:(Mat *)arg1 withShape:(void *)arg2;
- (Mat)faceFrame;
- (void)setFaceFrame:(Mat)arg1;
- (vector<float, std::allocator<float>>)faceShape;
- (void)setFaceShape:(vector<float, std::allocator<float>>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
