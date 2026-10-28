@interface QText : NSObject
{
    struct * _points; // +0x8
    unsigned long long _pointCount; // +0x10
    int _routeId; // +0x18
    QTextStyle * _style; // +0x20
    NSArray * _segments; // +0x28
    id <QTextChangeDelegate> _delegate; // +0x30
}
- (id)initWithSegments:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)style;
- (id)segments;
- (void)setSegments:(id)arg1;
- (int)routeId;
- (void)setRouteId:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
