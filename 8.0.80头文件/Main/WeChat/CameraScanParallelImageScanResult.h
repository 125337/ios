@interface CameraScanParallelImageScanResult : NSObject
{
    unsigned int _succCostTime; // +0x8
    unsigned int _decodeStat; // +0xc
    unsigned int _dataLength; // +0x10
    unsigned int _qrCodeVersion; // +0x14
    unsigned int _pyramidLv; // +0x18
    unsigned int _decodeScale; // +0x1c
    unsigned int _detectTime; // +0x20
    unsigned int _srTime; // +0x24
    unsigned int _parallelImageScanCostTime; // +0x28
    NSString * _resultType; // +0x30
    NSString * _resultData; // +0x38
    NSData * _codeRawData; // +0x40
    UIImage * _resultOriginalImage; // +0x48
    NSString * _resultSN; // +0x50
    NSString * _typeName; // +0x58
    NSString * _charSet; // +0x60
    NSString * _binarizerMethod; // +0x68
    NSString * _scaleList; // +0x70
    CGPoint _markDotCenter; // +0x78
    CGRect _markDotRect; // +0x88
}
- (id)resultType;
- (void)setResultType:(id)arg1;
- (id)resultData;
- (void)setResultData:(id)arg1;
- (id)codeRawData;
- (void)setCodeRawData:(id)arg1;
- (id)resultOriginalImage;
- (void)setResultOriginalImage:(id)arg1;
- (id)resultSN;
- (void)setResultSN:(id)arg1;
- (unsigned int)succCostTime;
- (void)setSuccCostTime:(unsigned int)arg1;
- (unsigned int)decodeStat;
- (void)setDecodeStat:(unsigned int)arg1;
- (id)typeName;
- (void)setTypeName:(id)arg1;
- (unsigned int)dataLength;
- (void)setDataLength:(unsigned int)arg1;
- (id)charSet;
- (void)setCharSet:(id)arg1;
- (unsigned int)qrCodeVersion;
- (void)setQrCodeVersion:(unsigned int)arg1;
- (unsigned int)pyramidLv;
- (void)setPyramidLv:(unsigned int)arg1;
- (id)binarizerMethod;
- (void)setBinarizerMethod:(id)arg1;
- (CGPoint)markDotCenter;
- (void)setMarkDotCenter:(CGPoint)arg1;
- (CGRect)markDotRect;
- (void)setMarkDotRect:(CGRect)arg1;
- (id)scaleList;
- (void)setScaleList:(id)arg1;
- (unsigned int)decodeScale;
- (void)setDecodeScale:(unsigned int)arg1;
- (unsigned int)detectTime;
- (void)setDetectTime:(unsigned int)arg1;
- (unsigned int)srTime;
- (void)setSrTime:(unsigned int)arg1;
- (unsigned int)parallelImageScanCostTime;
- (void)setParallelImageScanCostTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
