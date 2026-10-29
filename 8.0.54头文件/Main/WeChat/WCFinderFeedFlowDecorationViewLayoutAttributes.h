@interface WCFinderFeedFlowDecorationViewLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying>
{
    NSArray * _colors; // +0x8
    CGPoint _startPoint; // +0x10
    CGPoint _endPoint; // +0x20
}
- (id)init;
- (void)initPropertiesValue;
- (id)copyWithZone:(_NSZone *)arg1;
- (CGPoint)startPoint;
- (void)setStartPoint:(CGPoint)arg1;
- (CGPoint)endPoint;
- (void)setEndPoint:(CGPoint)arg1;
- (id)colors;
- (void)setColors:(id)arg1;
- (void).cxx_destruct;
@end

