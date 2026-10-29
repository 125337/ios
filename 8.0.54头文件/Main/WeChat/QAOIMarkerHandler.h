@interface QAOIMarkerHandler : NSObject
{
    int _markerID; // +0x8
    int _subMarkerID; // +0xc
    NSString * _annoTextImgKey; // +0x10
}
- (int)markerID;
- (void)setMarkerID:(int)arg1;
- (int)subMarkerID;
- (void)setSubMarkerID:(int)arg1;
- (id)annoTextImgKey;
- (void)setAnnoTextImgKey:(id)arg1;
- (void).cxx_destruct;
@end

