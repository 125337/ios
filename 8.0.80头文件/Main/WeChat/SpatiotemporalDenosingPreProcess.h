@interface SpatiotemporalDenosingPreProcess : NSObject
{
    char blockSize; // +0x8
    int frameCnt; // +0xc
    int frameStaticInterval; // +0x10
    int motionFrameBufferCnt; // +0x14
    float noiseLevel; // +0x18
    float preNoiseLevel; // +0x1c
    BOOL isBackCamera; // +0x20
    int stDenosingWidth; // +0x24
    int stDenosingHeight; // +0x28
    BOOL updateNoiseEstimateFlag; // +0x2c
    int noiseStaticCounter; // +0x30
    char * blockBuffer; // +0x38
    char * diffBuffer; // +0x40
    NSMutableArray * motionLevelBank; // +0x48
    NSMutableArray * frameVarianceSmoothness; // +0x50
    int minSmoothness; // +0x58
    unsigned long long[10] coordinatesBlocksCurFrame; // +0x60
    unsigned long long[10] coordinatesBlocksPreFrame; // +0xb0
}
- (id)init:(BOOL)arg1;
- (void)updateNoiseLevel:(float)arg1;
- (int)calcutlateSmoothness:(char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 centralIndex:(unsigned long long)arg4;
- (id)formateDicWithName:(id)arg1 smoothValue:(id)arg2 varianceValue:(id)arg3;
- (void)spatialNoiseEstimate:(char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 colStart:(unsigned long long)arg4 rowStart:(unsigned long long)arg5 blockIndex:(unsigned long long)arg6;
- (float)calculateNoiseLevel:(id)arg1;
- (id)sortFrameVarianceSmoothness;
- (void)generateRandomCoordinates:(int)arg1 height:(int)arg2;
- (blockMotionPrams)checkBlockMotion:(char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 colStartCur:(unsigned long long)arg4 rowStartCur:(unsigned long long)arg5 colStartNext:(unsigned long long)arg6 rowStartNext:(unsigned long long)arg7 blockIndex:(unsigned long long *)arg8 blockNum:(unsigned long long)arg9;
- (char)quickMotionCheck:(__CVBuffer *)arg1;
- (char)quickMotionCheck:(char *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (void)reset;
- (float)getMotionRatioThreshod:(float)arg1 PixelMean:(float)arg2;
- (float)getNoiseLevel;
- (void)dealloc;
- (void).cxx_destruct;
@end
