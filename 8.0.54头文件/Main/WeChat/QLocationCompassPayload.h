@interface QLocationCompassPayload : NSObject
{
    UIImage * _compassImage; // +0x8
    UIImage * _directionNorth; // +0x10
    UIImage * _directionSouth; // +0x18
    UIImage * _directionEast; // +0x20
    UIImage * _directionWest; // +0x28
}
- (id)compassImage;
- (void)setCompassImage:(id)arg1;
- (id)directionNorth;
- (void)setDirectionNorth:(id)arg1;
- (id)directionSouth;
- (void)setDirectionSouth:(id)arg1;
- (id)directionEast;
- (void)setDirectionEast:(id)arg1;
- (id)directionWest;
- (void)setDirectionWest:(id)arg1;
- (void).cxx_destruct;
@end

