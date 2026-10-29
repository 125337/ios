@interface QPointAnnotation : QShape <QAnnotation>
{
    BOOL _lockedToScreen; // +0x8
    NSString * _title; // +0x10
    NSString * _subtitle; // +0x18
    QIndoorInfo * _indoorInfo; // +0x20
    CLLocationCoordinate2D _coordinate; // +0x28
    CGPoint _lockedScreenPoint; // +0x38
}
- (void)notTriggerKVOToSetCoordinate:(CLLocationCoordinate2D)arg1;
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (BOOL)lockedToScreen;
- (void)setLockedToScreen:(BOOL)arg1;
- (CGPoint)lockedScreenPoint;
- (void)setLockedScreenPoint:(CGPoint)arg1;
- (id)indoorInfo;
- (void)setIndoorInfo:(id)arg1;
- (void).cxx_destruct;
@end

