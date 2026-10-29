@interface AppPersonalInfoItem : NSObject <PBCoding>
{
    NSString * _appID; // +0x8
    NSString * _infoXml; // +0x10
}
+ (void)PBArrayAdd_appID;
+ (void)PBArrayAdd_infoXml;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)parseXML;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)infoXml;
- (void)setInfoXml:(id)arg1;
- (void).cxx_destruct;
@end

