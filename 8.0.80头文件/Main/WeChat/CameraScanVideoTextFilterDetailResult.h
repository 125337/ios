@interface CameraScanVideoTextFilterDetailResult : NSObject
{
    BOOL _textDetectionSucceeded; // +0x8
    unsigned int _filterType; // +0xc
    long long _densityEvidenceStatus; // +0x10
    double _langRatio; // +0x18
    double _textRatio; // +0x20
    unsigned long long _detectedTextBoxCount; // +0x28
    unsigned long long _validTextBoxCount; // +0x30
    double _textAreaInPixels; // +0x38
    double _imageAreaInPixels; // +0x40
}
- (unsigned int)filterType;
- (void)setFilterType:(unsigned int)arg1;
- (long long)densityEvidenceStatus;
- (void)setDensityEvidenceStatus:(long long)arg1;
- (double)langRatio;
- (void)setLangRatio:(double)arg1;
- (double)textRatio;
- (void)setTextRatio:(double)arg1;
- (BOOL)textDetectionSucceeded;
- (void)setTextDetectionSucceeded:(BOOL)arg1;
- (unsigned long long)detectedTextBoxCount;
- (void)setDetectedTextBoxCount:(unsigned long long)arg1;
- (unsigned long long)validTextBoxCount;
- (void)setValidTextBoxCount:(unsigned long long)arg1;
- (double)textAreaInPixels;
- (void)setTextAreaInPixels:(double)arg1;
- (double)imageAreaInPixels;
- (void)setImageAreaInPixels:(double)arg1;
@end
