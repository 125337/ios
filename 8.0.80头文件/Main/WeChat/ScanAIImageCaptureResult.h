@interface ScanAIImageCaptureResult : NSObject
{
    BOOL _hasCodeInDetection; // +0x8
    NSString * _imagePath; // +0x10
    UIImage * _image; // +0x18
    unsigned long long _imageBytes; // +0x20
    double _snapshotCostMS; // +0x28
    double _snapshotReadyTime; // +0x30
    double _imageDataEncodeCostMS; // +0x38
    double _writeFileCostMS; // +0x40
    double _imageProcessCostMS; // +0x48
}
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (unsigned long long)imageBytes;
- (void)setImageBytes:(unsigned long long)arg1;
- (BOOL)hasCodeInDetection;
- (void)setHasCodeInDetection:(BOOL)arg1;
- (double)snapshotCostMS;
- (void)setSnapshotCostMS:(double)arg1;
- (double)snapshotReadyTime;
- (void)setSnapshotReadyTime:(double)arg1;
- (double)imageDataEncodeCostMS;
- (void)setImageDataEncodeCostMS:(double)arg1;
- (double)writeFileCostMS;
- (void)setWriteFileCostMS:(double)arg1;
- (double)imageProcessCostMS;
- (void)setImageProcessCostMS:(double)arg1;
- (void).cxx_destruct;
@end
