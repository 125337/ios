@interface WCADPoiInfo : NSObject
{
    int POIType; // +0x8
    NSString * POIId; // +0x10
    NSString * POIName; // +0x18
    NSString * POILink; // +0x20
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValidForShow;
- (int)POIType;
- (void)setPOIType:(int)arg1;
- (id)POIId;
- (void)setPOIId:(id)arg1;
- (id)POIName;
- (void)setPOIName:(id)arg1;
- (id)POILink;
- (void)setPOILink:(id)arg1;
- (void).cxx_destruct;
@end
