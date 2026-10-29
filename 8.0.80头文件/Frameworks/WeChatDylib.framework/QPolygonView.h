@interface QPolygonView : QOverlayPathView
{
    BOOL _userInteractionEnabled; // +0x20
    BOOL _disableCollideLabel; // +0x21
    unsigned long long _lineType; // +0x28
    NSArray * _lineDashPattern; // +0x30
    double _textureGap; // +0x38
    UIImage * _styleTextureImage; // +0x40
    NSArray * _holeStrokeIds; // +0x48
    QPolygon * _originPolygon; // +0x50
}
- (void)savePolygon;
- (void)changePolygon:(id)arg1;
- (void)resotrePolygon;
- (id)initWithPolygon:(id)arg1;
- (void)dealloc;
- (id)polygon;
- (void)setStrokeColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setLineDashPattern:(id)arg1;
- (void)setDisableCollideLabel:(BOOL)arg1;
- (void)updateOverlayPoints:(CLLocationCoordinate2D *)arg1 pointCount:(int)arg2;
- (void)onDidAdd;
- (void)onWillRemove;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addObserverForPolygon:(id)arg1;
- (void)removeObserverForPolygon:(id)arg1;
- (unsigned long long)lineType;
- (void)setLineType:(unsigned long long)arg1;
- (id)lineDashPattern;
- (double)textureGap;
- (void)setTextureGap:(double)arg1;
- (id)styleTextureImage;
- (void)setStyleTextureImage:(id)arg1;
- (BOOL)isUserInteractionEnabled;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (id)holeStrokeIds;
- (void)setHoleStrokeIds:(id)arg1;
- (id)originPolygon;
- (void)setOriginPolygon:(id)arg1;
- (BOOL)disableCollideLabel;
- (void).cxx_destruct;
@end
