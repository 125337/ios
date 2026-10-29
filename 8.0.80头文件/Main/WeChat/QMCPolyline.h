@interface QMCPolyline : QPolyline
{
    BOOL _isDashLine; // +0x38
    BOOL _isRoadMask; // +0x39
    float _emergeDuration; // +0x3c
    NSString * _identifier; // +0x40
    UIColor * _strokeColor; // +0x48
    UIColor * _dmStrokeColor; // +0x50
    UIColor * _borderColor; // +0x58
    UIColor * _dmBorderColor; // +0x60
    double _lineWidth; // +0x68
    double _borderWidth; // +0x70
    NSString * _polylineType; // +0x78
    NSString * _lineType; // +0x80
    long long _zIndex; // +0x88
    NSDictionary * _highColorObj; // +0x90
    NSDictionary * _hideColorObj; // +0x98
    NSDictionary * _extInfo; // +0xa0
    NSDictionary * _reportData; // +0xa8
    NSMutableArray * _arrLine; // +0xb0
    NSDictionary * _startPoint; // +0xb8
    NSDictionary * _endPoint; // +0xc0
    NSString * _lineStyle; // +0xc8
    double _curvature; // +0xd0
    NSArray * _lineDashPattern; // +0xd8
    UIImage * _arrowImage; // +0xe0
}
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (id)dmStrokeColor;
- (void)setDmStrokeColor:(id)arg1;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;
- (id)dmBorderColor;
- (void)setDmBorderColor:(id)arg1;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (double)borderWidth;
- (void)setBorderWidth:(double)arg1;
- (id)polylineType;
- (void)setPolylineType:(id)arg1;
- (id)lineType;
- (void)setLineType:(id)arg1;
- (long long)zIndex;
- (void)setZIndex:(long long)arg1;
- (id)highColorObj;
- (void)setHighColorObj:(id)arg1;
- (id)hideColorObj;
- (void)setHideColorObj:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)reportData;
- (void)setReportData:(id)arg1;
- (id)arrLine;
- (void)setArrLine:(id)arg1;
- (id)startPoint;
- (void)setStartPoint:(id)arg1;
- (id)endPoint;
- (void)setEndPoint:(id)arg1;
- (id)lineStyle;
- (void)setLineStyle:(id)arg1;
- (double)curvature;
- (void)setCurvature:(double)arg1;
- (BOOL)isDashLine;
- (void)setIsDashLine:(BOOL)arg1;
- (id)lineDashPattern;
- (void)setLineDashPattern:(id)arg1;
- (float)emergeDuration;
- (void)setEmergeDuration:(float)arg1;
- (id)arrowImage;
- (void)setArrowImage:(id)arg1;
- (BOOL)isRoadMask;
- (void)setIsRoadMask:(BOOL)arg1;
- (void).cxx_destruct;
@end
