@interface IntelligentFaceClusterItem : MMObject
{
    int _faceIdx; // +0x8
    float _zScore; // +0xc
    unsigned int _updateStatue; // +0x10
    NSString * _imgKey; // +0x18
    NSArray * _arrPartConfidence; // +0x20
    unsigned long long _labelId; // +0x28
    NSArray * _arrFaceFeature; // +0x30
    NSString * _faceClusterFilePathId; // +0x38
    NSString * _mediaFilePath; // +0x40
    double _faceImageWidth; // +0x48
    double _faceImageHeight; // +0x50
    NSArray * _arrfacePoint; // +0x58
    NSArray * _arrL2NormFaceFeature; // +0x60
    CGRect _faceRect; // +0x68
}
- (void)copyFieldFromDbFaceClusterItem:(id)arg1;
- (id)imgKey;
- (void)setImgKey:(id)arg1;
- (int)faceIdx;
- (void)setFaceIdx:(int)arg1;
- (id)arrPartConfidence;
- (void)setArrPartConfidence:(id)arg1;
- (float)zScore;
- (void)setZScore:(float)arg1;
- (unsigned long long)labelId;
- (void)setLabelId:(unsigned long long)arg1;
- (id)arrFaceFeature;
- (void)setArrFaceFeature:(id)arg1;
- (CGRect)faceRect;
- (void)setFaceRect:(CGRect)arg1;
- (unsigned int)updateStatue;
- (void)setUpdateStatue:(unsigned int)arg1;
- (id)faceClusterFilePathId;
- (void)setFaceClusterFilePathId:(id)arg1;
- (id)mediaFilePath;
- (void)setMediaFilePath:(id)arg1;
- (double)faceImageWidth;
- (void)setFaceImageWidth:(double)arg1;
- (double)faceImageHeight;
- (void)setFaceImageHeight:(double)arg1;
- (id)arrfacePoint;
- (void)setArrfacePoint:(id)arg1;
- (id)arrL2NormFaceFeature;
- (void)setArrL2NormFaceFeature:(id)arg1;
- (void).cxx_destruct;
@end

