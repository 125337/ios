@interface CExtendInfoOfLocation : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    double m_latitude; // +0x8
    double m_longitude; // +0x10
    double m_mapScale; // +0x18
    NSString * m_locationLabel; // +0x20
    NSString * m_poiName; // +0x28
    NSString * m_mapType; // +0x30
    NSString * m_infoUrl; // +0x38
    NSString * m_cityName; // +0x40
    unsigned int m_adCode; // +0x48
    NSString * m_poiId; // +0x50
    NSString * m_buildingId; // +0x58
    NSString * m_floorName; // +0x60
    NSString * m_poiCategoryTips; // +0x68
    NSString * m_poiBusinessHour; // +0x70
    NSString * m_poiPhone; // +0x78
    NSString * m_poiPriceTips; // +0x80
    BOOL m_isFromPoiList; // +0x88
    CMessageWrap * m_refMessageWrap; // +0x90
}
+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)ChangeForDisplay;
- (void)UpdateContent:(id)arg1;
- (id)GetDisplaySessionContent;
- (id)messageFTSText;
- (id)msgReferSummaryAndReplace:(BOOL)arg1;
- (id)genReferIconWithName:(id)arg1 useCustomBkg:(BOOL)arg2;
- (double)m_latitude;
- (void)setM_latitude:(double)arg1;
- (id)m_locationLabel;
- (void)setM_locationLabel:(id)arg1;
- (id)m_poiName;
- (void)setM_poiName:(id)arg1;
- (double)m_longitude;
- (void)setM_longitude:(double)arg1;
- (double)m_mapScale;
- (void)setM_mapScale:(double)arg1;
- (id)m_mapType;
- (void)setM_mapType:(id)arg1;
- (id)m_infoUrl;
- (void)setM_infoUrl:(id)arg1;
- (id)m_cityName;
- (void)setM_cityName:(id)arg1;
- (unsigned int)m_adCode;
- (void)setM_adCode:(unsigned int)arg1;
- (id)m_refMessageWrap;
- (void)setM_refMessageWrap:(id)arg1;
- (id)m_poiId;
- (void)setM_poiId:(id)arg1;
- (id)m_buildingId;
- (void)setM_buildingId:(id)arg1;
- (id)m_floorName;
- (void)setM_floorName:(id)arg1;
- (id)m_poiCategoryTips;
- (void)setM_poiCategoryTips:(id)arg1;
- (id)m_poiBusinessHour;
- (void)setM_poiBusinessHour:(id)arg1;
- (id)m_poiPhone;
- (void)setM_poiPhone:(id)arg1;
- (id)m_poiPriceTips;
- (void)setM_poiPriceTips:(id)arg1;
- (BOOL)m_isFromPoiList;
- (void)setM_isFromPoiList:(BOOL)arg1;
- (void).cxx_destruct;
@end
