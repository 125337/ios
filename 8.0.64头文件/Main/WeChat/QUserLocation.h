@interface QUserLocation : NSObject
{
    CLLocation * _location; // +0x8
    CLHeading * _heading; // +0x10
}
- (id)location;
- (void)setLocation:(id)arg1;
- (id)heading;
- (void)setHeading:(id)arg1;
- (void).cxx_destruct;
@end
