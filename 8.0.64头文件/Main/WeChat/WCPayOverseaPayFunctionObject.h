@interface WCPayOverseaPayFunctionObject : NSObject <PBCoding>
{
    unsigned int _m_functionId; // +0x8
    unsigned int _m_propertyType; // +0xc
    unsigned int _m_weapp_version; // +0x10
    NSString * _m_functionName; // +0x18
    NSString * _m_functionIconUrl; // +0x20
    NSString * _m_functionHDIconUrl; // +0x28
    NSString * _m_functionForegroundIconUrl; // +0x30
    NSString * _m_h5Url; // +0x38
    NSString * _m_nativeUrl; // +0x40
    NSMutableArray * _m_activityInfoList; // +0x48
    NSString * _m_disclaimer; // +0x50
    NSString * _m_weapp_username; // +0x58
    NSString * _m_weapp_pagepath; // +0x60
    NSString * _m_subtitle; // +0x68
}
+ (void)PBArrayAdd_m_functionId;
+ (void)PBArrayAdd_m_functionName;
+ (void)PBArrayAdd_m_functionIconUrl;
+ (void)PBArrayAdd_m_functionHDIconUrl;
+ (void)PBArrayAdd_m_functionForegroundIconUrl;
+ (void)PBArrayAdd_m_h5Url;
+ (void)PBArrayAdd_m_nativeUrl;
+ (void)PBArrayAdd_m_propertyType;
+ (void)PBArrayAdd_m_activityInfoList;
+ (void)PBArrayAdd_m_disclaimer;
+ (void)PBArrayAdd_m_weapp_username;
+ (void)PBArrayAdd_m_weapp_pagepath;
+ (void)PBArrayAdd_m_weapp_version;
+ (void)PBArrayAdd_m_subtitle;
+ (void)initialize;
+ (id)GenFromDictionary:(id)arg1;
- (id)getPBPropertyTable;
- (unsigned int)m_functionId;
- (void)setM_functionId:(unsigned int)arg1;
- (id)m_functionName;
- (void)setM_functionName:(id)arg1;
- (id)m_functionIconUrl;
- (void)setM_functionIconUrl:(id)arg1;
- (id)m_functionHDIconUrl;
- (void)setM_functionHDIconUrl:(id)arg1;
- (id)m_functionForegroundIconUrl;
- (void)setM_functionForegroundIconUrl:(id)arg1;
- (id)m_h5Url;
- (void)setM_h5Url:(id)arg1;
- (id)m_nativeUrl;
- (void)setM_nativeUrl:(id)arg1;
- (unsigned int)m_propertyType;
- (void)setM_propertyType:(unsigned int)arg1;
- (id)m_activityInfoList;
- (void)setM_activityInfoList:(id)arg1;
- (id)m_disclaimer;
- (void)setM_disclaimer:(id)arg1;
- (id)m_weapp_username;
- (void)setM_weapp_username:(id)arg1;
- (id)m_weapp_pagepath;
- (void)setM_weapp_pagepath:(id)arg1;
- (unsigned int)m_weapp_version;
- (void)setM_weapp_version:(unsigned int)arg1;
- (id)m_subtitle;
- (void)setM_subtitle:(id)arg1;
- (void).cxx_destruct;
@end
