@interface MMMultiPOIAnnotation : NSObject <QAnnotation>
{
    MMMultiPOIItem * _item; // +0x8
    CLLocationCoordinate2D _coordinate; // +0x10
}
- (id)initWithItem:(id)arg1;
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (id)item;
- (void).cxx_destruct;
@end
