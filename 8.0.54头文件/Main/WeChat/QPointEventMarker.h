@interface QPointEventMarker : QMarker
{
    BOOL _avoidOtherAnnotations; // +0x8
    int _geotype; // +0xc
    int _markerID; // +0x10
    NSString * _iconPath; // +0x18
    NSDictionary * _eventInfo; // +0x20
}
- (void)setGeotype:(int)arg1;
- (int)geotype;
- (void)setMarkerID:(int)arg1;
- (int)markerID;
- (id)iconPath;
- (void)setIconPath:(id)arg1;
- (BOOL)avoidOtherAnnotations;
- (void)setAvoidOtherAnnotations:(BOOL)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (void).cxx_destruct;
@end

