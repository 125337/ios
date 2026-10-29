@interface WCGestureRecognizeModel : NSObject
{
    NSArray * _userPathPoints; // +0x8
    NSArray * _templatePoints; // +0x10
    double _radius; // +0x18
    double _realWidth; // +0x20
    double _realHeight; // +0x28
    double _basicWidth; // +0x30
    double _basicHeight; // +0x38
}
- (id)userPathPoints;
- (void)setUserPathPoints:(id)arg1;
- (id)templatePoints;
- (void)setTemplatePoints:(id)arg1;
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
- (void).cxx_destruct;
@end
