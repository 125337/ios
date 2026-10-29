@interface QPolygonHandler : QOverlayHandler
{
    int _fillId; // +0xc
    NSArray * _holeStrokeIds; // +0x10
}
- (int)fillId;
- (void)setFillId:(int)arg1;
- (id)holeStrokeIds;
- (void)setHoleStrokeIds:(id)arg1;
- (void).cxx_destruct;
@end

