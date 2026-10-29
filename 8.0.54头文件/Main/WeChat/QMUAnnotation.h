@interface QMUAnnotation : NSObject <QAnnotation, QMUPointItem, NSCopying>
{
    NSString * _title; // +0x8
    NSString * _subtitle; // +0x10
    CLLocationCoordinate2D _coordinate; // +0x18
    struct _point; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (struct)point;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (CLLocationCoordinate2D)coordinate;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (void)setPoint:(struct)arg1;
- (void).cxx_destruct;
@end

