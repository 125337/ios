@interface OCRTransReport : NSObject
{
    BOOL _isBizImgTranslating; // +0x8
    BOOL _shouldExitActionReported; // +0x9
    unsigned int _source; // +0xc
    unsigned int _result; // +0x10
    unsigned int _showOriginCount; // +0x14
    unsigned int _hasSaveResult; // +0x18
    unsigned int _hasSaveOrigin; // +0x1c
    unsigned int _enhanceCount; // +0x20
    unsigned long long _enhanceModelCostTime; // +0x28
    NSDate * _startTime; // +0x30
    NSDate * _captureTime; // +0x38
    NSDate * _startUploadTime; // +0x40
    NSDate * _endUploadTime; // +0x48
    NSDate * _getResultTime; // +0x50
    NSDate * _startEnhanceTime; // +0x58
    NSDate * _endEnhanceTime; // +0x60
    NSDate * _firstEndEnhanceTime; // +0x68
}
+ (void)reportImageOCRActionType:(unsigned int)arg1 sessionID:(id)arg2;
+ (void)reportImageOCRActionType:(unsigned int)arg1 sessionID:(id)arg2 ocrResultType:(long long)arg3;
+ (void)reportImageOCRZoomType:(unsigned int)arg1 sessionID:(id)arg2;
+ (void)reportImageOCRTaskIdKey:(unsigned int)arg1;
+ (void)reportImageOCREnterScene:(unsigned int)arg1 opType:(unsigned int)arg2;
- (void)reportExposeAction;
- (void)reportExitAction;
- (void)setEndEnhanceTime:(id)arg1;
- (void)reset;
- (unsigned long long)captureCost;
- (unsigned long long)uploadCost;
- (unsigned long long)ocrTranslateCost;
- (unsigned long long)ocrTotalCost;
- (unsigned long long)enhanceModelCostTime;
- (unsigned long long)firstEnhanceCost;
- (unsigned long long)totalCost;
- (unsigned long long)translateExposeCost;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (unsigned int)result;
- (void)setResult:(unsigned int)arg1;
- (unsigned int)showOriginCount;
- (void)setShowOriginCount:(unsigned int)arg1;
- (unsigned int)hasSaveResult;
- (void)setHasSaveResult:(unsigned int)arg1;
- (unsigned int)hasSaveOrigin;
- (void)setHasSaveOrigin:(unsigned int)arg1;
- (BOOL)isBizImgTranslating;
- (void)setIsBizImgTranslating:(BOOL)arg1;
- (void)setEnhanceModelCostTime:(unsigned long long)arg1;
- (unsigned int)enhanceCount;
- (void)setEnhanceCount:(unsigned int)arg1;
- (id)startTime;
- (void)setStartTime:(id)arg1;
- (id)captureTime;
- (void)setCaptureTime:(id)arg1;
- (id)startUploadTime;
- (void)setStartUploadTime:(id)arg1;
- (id)endUploadTime;
- (void)setEndUploadTime:(id)arg1;
- (id)getResultTime;
- (void)setGetResultTime:(id)arg1;
- (id)startEnhanceTime;
- (void)setStartEnhanceTime:(id)arg1;
- (id)endEnhanceTime;
- (id)firstEndEnhanceTime;
- (void)setFirstEndEnhanceTime:(id)arg1;
- (BOOL)shouldExitActionReported;
- (void)setShouldExitActionReported:(BOOL)arg1;
- (void).cxx_destruct;
@end
