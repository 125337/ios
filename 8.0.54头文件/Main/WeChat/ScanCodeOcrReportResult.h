@interface ScanCodeOcrReportResult : NSObject
{
    int _color; // +0x8
    float _colorScore; // +0xc
    int _cls; // +0x10
    float _clsScore; // +0x14
    NSString * _ocrText; // +0x18
}
- (id)initWithOcrText:(id)arg1 color:(int)arg2 colorScore:(float)arg3 cls:(int)arg4 clsScore:(float)arg5;
- (id)ocrText;
- (void)setOcrText:(id)arg1;
- (int)color;
- (void)setColor:(int)arg1;
- (float)colorScore;
- (void)setColorScore:(float)arg1;
- (int)cls;
- (void)setCls:(int)arg1;
- (float)clsScore;
- (void)setClsScore:(float)arg1;
- (void).cxx_destruct;
@end

