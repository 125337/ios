@interface WCMallFunctionActivity : NSObject
{
    unsigned int m_uiFunctionActivityId; // +0x8
    NSString * m_nsFunctionActivityName; // +0x10
    NSString * m_nsFunctionActivityIconLink; // +0x18
    NSString * m_nsFunctionActivityHDIconLink; // +0x20
    NSString * m_nsFunctionActivityInfoIconLick; // +0x28
    NSString * m_nsFunctionActivityNativeLink; // +0x30
    NSString * m_nsFunctionActivityH5Link; // +0x38
    BOOL m_bNeedGetLatestInfo; // +0x40
    NSMutableArray * m_arrFunctionActivityInfo; // +0x48
    NSMutableArray * m_arrFunctionActivityRemarkInfo; // +0x50
    NSMutableArray * m_arrFunctionActivityAttributeInfo; // +0x58
    NSMutableArray * m_arrFunctionActivityResponseRemarkInfo; // +0x60
    NSMutableArray * m_arrFunctionActivityResponseAttributeInfo; // +0x68
    unsigned int m_uiType; // +0x70
    NSString * m_nsThirdPartyName; // +0x78
    NSString * m_nsThirdPartyDisclaimer; // +0x80
    BOOL m_hasDownloadRestrict; // +0x88
    BOOL _m_hasRedDot; // +0x89
}
- (id)description;
- (id)debugDescription;
- (unsigned int)m_uiFunctionActivityId;
- (void)setM_uiFunctionActivityId:(unsigned int)arg1;
- (id)m_nsFunctionActivityH5Link;
- (void)setM_nsFunctionActivityH5Link:(id)arg1;
- (id)m_arrFunctionActivityAttributeInfo;
- (void)setM_arrFunctionActivityAttributeInfo:(id)arg1;
- (id)m_arrFunctionActivityInfo;
- (void)setM_arrFunctionActivityInfo:(id)arg1;
- (id)m_arrFunctionActivityRemarkInfo;
- (void)setM_arrFunctionActivityRemarkInfo:(id)arg1;
- (id)m_arrFunctionActivityResponseAttributeInfo;
- (void)setM_arrFunctionActivityResponseAttributeInfo:(id)arg1;
- (id)m_arrFunctionActivityResponseRemarkInfo;
- (void)setM_arrFunctionActivityResponseRemarkInfo:(id)arg1;
- (BOOL)m_bNeedGetLatestInfo;
- (void)setM_bNeedGetLatestInfo:(BOOL)arg1;
- (id)m_nsFunctionActivityIconLink;
- (void)setM_nsFunctionActivityIconLink:(id)arg1;
- (id)m_nsFunctionActivityName;
- (void)setM_nsFunctionActivityName:(id)arg1;
- (id)m_nsFunctionActivityNativeLink;
- (void)setM_nsFunctionActivityNativeLink:(id)arg1;
- (id)m_nsFunctionActivityHDIconLink;
- (void)setM_nsFunctionActivityHDIconLink:(id)arg1;
- (id)m_nsFunctionActivityInfoIconLick;
- (void)setM_nsFunctionActivityInfoIconLick:(id)arg1;
- (unsigned int)m_uiType;
- (void)setM_uiType:(unsigned int)arg1;
- (id)m_nsThirdPartyName;
- (void)setM_nsThirdPartyName:(id)arg1;
- (id)m_nsThirdPartyDisclaimer;
- (void)setM_nsThirdPartyDisclaimer:(id)arg1;
- (BOOL)m_hasDownloadRestrict;
- (void)setM_hasDownloadRestrict:(BOOL)arg1;
- (BOOL)m_hasRedDot;
- (void)setM_hasRedDot:(BOOL)arg1;
- (void).cxx_destruct;
@end

