@interface PaddingLabel : UILabel <QAnnotationViewCollisionDelegate>
{
    unsigned long long collisionType; // +0x8
    double _padding; // +0x10
}
- (id)init;
- (void)setPadding:(double)arg1;
- (void)drawTextInRect:(CGRect)arg1;
- (unsigned long long)collisionType;
- (void)setCollisionType:(unsigned long long)arg1;
- (double)padding;
@end
