@interface WCGestureRecognizeModel : NSObject
{
    BOOL _needReport; // +0x8
    BOOL _forbidPassTemplatePoints; // +0x9
    NSArray * _userPathPoints; // +0x10
    NSArray * _templatePoints; // +0x18
    double _cosDistance; // +0x20
    double _radius; // +0x28
    double _realWidth; // +0x30
    double _realHeight; // +0x38
    double _basicWidth; // +0x40
    double _basicHeight; // +0x48
}
- (id)userPathPoints;
- (void)setUserPathPoints:(id)arg1;
- (id)templatePoints;
- (void)setTemplatePoints:(id)arg1;
- (double)cosDistance;
- (void)setCosDistance:(double)arg1;
- (double)radius;
- (void)setRadius:(double)arg1;
- (double)realWidth;
- (void)setRealWidth:(double)arg1;
- (double)realHeight;
- (void)setRealHeight:(double)arg1;
- (double)basicWidth;
- (void)setBasicWidth:(double)arg1;
- (double)basicHeight;
- (void)setBasicHeight:(double)arg1;
- (BOOL)needReport;
- (void)setNeedReport:(BOOL)arg1;
- (BOOL)forbidPassTemplatePoints;
- (void)setForbidPassTemplatePoints:(BOOL)arg1;
- (void).cxx_destruct;
@end
