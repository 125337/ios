@interface QLocationMarkerWrapper : NSObject
{
    int _markerID; // +0x8
    NSString * _markerInstruction; // +0x10
    NSString * _compassInstruction; // +0x18
    NSString * _directionEastInstruction; // +0x20
    NSString * _directionWestInstruction; // +0x28
    NSString * _directionNorthInstruction; // +0x30
    NSString * _directionSouthInstruction; // +0x38
}
- (int)markerID;
- (void)setMarkerID:(int)arg1;
- (id)markerInstruction;
- (void)setMarkerInstruction:(id)arg1;
- (id)compassInstruction;
- (void)setCompassInstruction:(id)arg1;
- (id)directionEastInstruction;
- (void)setDirectionEastInstruction:(id)arg1;
- (id)directionWestInstruction;
- (void)setDirectionWestInstruction:(id)arg1;
- (id)directionNorthInstruction;
- (void)setDirectionNorthInstruction:(id)arg1;
- (id)directionSouthInstruction;
- (void)setDirectionSouthInstruction:(id)arg1;
- (void).cxx_destruct;
@end

