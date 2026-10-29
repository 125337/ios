@interface WCFinderSharePOIRelatedItem : MMObject <NSCopying, WCFinderShareItemProtocol>
{
    NSString * _latitudeString; // +0x8
    NSString * _longitudeString; // +0x10
    NSString * _poiName; // +0x18
    NSString * _poiScaleString; // +0x20
    NSString * _address; // +0x28
    NSString * _infoUrl; // +0x30
    NSString * _poiClassifyId; // +0x38
    NSString * _poiCategories; // +0x40
}
+ (void)PBArrayAdd_latitudeString;
+ (void)PBArrayAdd_longitudeString;
+ (void)PBArrayAdd_poiName;
+ (void)PBArrayAdd_poiScaleString;
+ (void)PBArrayAdd_address;
+ (void)PBArrayAdd_infoUrl;
+ (void)PBArrayAdd_poiClassifyId;
+ (void)PBArrayAdd_poiCategories;
+ (void)initialize;
+ (id)nodeName;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)chatDesc;
- (id)momentsDesc;
- (id)summayText:(id)arg1 sender:(id)arg2 isChatRoom:(BOOL)arg3;
- (id)momentsViewWithWCDataItem:(id)arg1;
- (id)latitudeString;
- (void)setLatitudeString:(id)arg1;
- (id)longitudeString;
- (void)setLongitudeString:(id)arg1;
- (id)poiName;
- (void)setPoiName:(id)arg1;
- (id)poiScaleString;
- (void)setPoiScaleString:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (id)infoUrl;
- (void)setInfoUrl:(id)arg1;
- (id)poiClassifyId;
- (void)setPoiClassifyId:(id)arg1;
- (id)poiCategories;
- (void)setPoiCategories:(id)arg1;
- (void).cxx_destruct;
@end
