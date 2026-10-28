@interface MJMetaBackupInfo : NSObject
{
    NSString * _materialID; // +0x8
    NSDate * _timestamp; // +0x10
    OMCGeographicInfo * _geoInfo; // +0x18
}
- (id)materialID;
- (void)setMaterialID:(id)arg1;
- (id)timestamp;
- (void)setTimestamp:(id)arg1;
- (id)geoInfo;
- (void)setGeoInfo:(id)arg1;
- (void).cxx_destruct;
@end
