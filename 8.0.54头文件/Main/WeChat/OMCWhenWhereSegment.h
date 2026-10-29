@interface OMCWhenWhereSegment : OMCElementSegment <OMCEditingStateAdjustable>
- (id)materialID;
- (id)timestamp;
- (id)geoInfo;
- (BOOL)isDisplayingDateTime;
- (BOOL)isDisplayingLocation;
- (unsigned long long)dateTimeDisplayOptions;
- (BOOL)updateTimestampWithDate:(id)arg1;
- (BOOL)updateLocationWithGeoInfo:(id)arg1;
- (BOOL)updateStyleWithMaterialID:(id)arg1;
- (void)enterEditingState;
- (void)leaveEditingState;
- (BOOL)isEditingState;
- (SharedPtr<XMSWhenWhereSegment>)backingWhenWhereSegment;
@end

