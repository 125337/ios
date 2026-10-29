@interface WCFinderTopicShareLocationItem : NSObject <NSCoding, NSCopying, PBCoding>
{
    NSString * _poiClassifyId; // +0x8
    double _latitude; // +0x10
    double _longitude; // +0x18
}
+ (void)PBArrayAdd_poiClassifyId;
+ (void)PBArrayAdd_latitude;
+ (void)PBArrayAdd_longitude;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)description;
- (id)poiClassifyId;
- (void)setPoiClassifyId:(id)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (void).cxx_destruct;
@end

