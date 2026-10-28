@interface QOverlayObject : NSObject
{
    NSString * _identifier; // +0x8
    NSString * _name; // +0x10
    CLLocationCoordinate2D _clickedPosition; // +0x18
}
- (CLLocationCoordinate2D)clickedPosition;
- (void)setClickedPosition:(CLLocationCoordinate2D)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void).cxx_destruct;
@end
