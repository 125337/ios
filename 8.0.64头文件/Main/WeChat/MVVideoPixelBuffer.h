@interface MVVideoPixelBuffer : NSObject
{
    unsigned long long _type; // +0x8
    __CVBuffer * _cvPixelBuffer; // +0x10
    long long _rotate; // +0x18
    double _createTimeStamp; // +0x20
    long long _pts; // +0x28
    long long _videoId; // +0x30
    long long _originalPts; // +0x38
    MAVVLogInputTexture * _inputTexture; // +0x40
}
- (void)dealloc;
- (id)initWithCvPixelBuffer:(__CVBuffer *)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (__CVBuffer *)cvPixelBuffer;
- (void)setCvPixelBuffer:(__CVBuffer *)arg1;
- (long long)rotate;
- (void)setRotate:(long long)arg1;
- (double)createTimeStamp;
- (void)setCreateTimeStamp:(double)arg1;
- (long long)pts;
- (void)setPts:(long long)arg1;
- (long long)videoId;
- (void)setVideoId:(long long)arg1;
- (long long)originalPts;
- (void)setOriginalPts:(long long)arg1;
- (id)inputTexture;
- (void)setInputTexture:(id)arg1;
- (void).cxx_destruct;
@end
