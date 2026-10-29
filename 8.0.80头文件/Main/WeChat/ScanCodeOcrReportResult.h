@interface ScanCodeOcrReportResult : NSObject
{
    int _color; // +0x8
    float _colorScore; // +0xc
    int _cls; // +0x10
    float _clsScore; // +0x14
    int _templateType; // +0x18
    float _typeScore; // +0x1c
    NSString * _ocrText; // +0x20
}
- (id)initWithOcrText:(id)arg1 color:(int)arg2 colorScore:(float)arg3 cls:(int)arg4 clsScore:(float)arg5 templateType:(int)arg6 typeScore:(float)arg7;
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
- (int)templateType;
- (void)setTemplateType:(int)arg1;
- (float)typeScore;
- (void)setTypeScore:(float)arg1;
- (void).cxx_destruct;
@end
