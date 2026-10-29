@interface QLocationRedlinePayload : NSObject
{
    double _width; // +0x8
    UIColor * _color; // +0x10
    struct _destination; // +0x18
}
- (double)width;
- (void)setWidth:(double)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (struct)destination;
- (void)setDestination:(struct)arg1;
- (void).cxx_destruct;
@end
