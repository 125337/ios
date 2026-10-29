@interface WCRedEnvelopesControlData : NSObject
{
    NSDictionary * m_dicPrepayRequestOrderInfo; // +0x8
    NSMutableArray * m_arrSelectedSendRedEnvelopesUserList; // +0x10
    CMessageWrap * m_oSelectedMessageWrap; // +0x18
    CContact * m_oSelectContact; // +0x20
    WCRedEnvelopesDetailInfo * m_oWCRedEnvelopesDetailInfo; // +0x28
    WCRedEnvelopesHistoryInfo * m_oWCRedEnvelopesHistoryInfo; // +0x30
    WCRedEnvelopesReceivedRedEnvelopesInfo * m_oSelectedWCRedEnvelopesReceivedRedEnvelopesInfo; // +0x38
    WCRedEnvelopesSendedRedEnvelopesInfo * m_oSelectedWCRedEnvelopesSendedRedEnvelopesInfo; // +0x40
    WCRedEnvelopesAtomicInfo * m_oWCRedEnvelopesAtomicInfo; // +0x48
    WCRedEnvelopesOperationInfo * m_oWCRedEnvelopesOpTail; // +0x50
    NSString * m_nsWCRedEnvelopesBrandMessageNativeUrl; // +0x58
    NSString * m_nsSendID; // +0x60
    NSString * m_nsOpenBundleId; // +0x68
    NSDictionary * m_dicOpenApiParam; // +0x70
    NSDictionary * m_structDicRedEnvelopesUserInfo; // +0x78
    NSDictionary * m_structDicPrepayOrderInfo; // +0x80
    NSDictionary * m_structDicRedEnvelopesBaseInfo; // +0x88
    NSMutableDictionary * m_structDicRedEnvelopesCompleteInfo; // +0x90
    NSDictionary * m_structDicAfterOpenRedEnvelopesInfo; // +0x98
    WCPayRealnameGuideInfo * realnameGuideInfo; // +0xa0
    NSDictionary * m_structDicEnterpriseRedEnvelopesData; // +0xa8
    BOOL _bHasEmoticonData; // +0xb0
    BOOL _isFirstEntryDetailView; // +0xb1
    BOOL _isForeignHB; // +0xb2
    BOOL _isFirstTimeOpenRedEnvelope; // +0xb3
    unsigned int _h5RecordHBKind; // +0xb4
    unsigned int _currentStoryInfoSubtypeId; // +0xb8
    unsigned int _currentRedEnvelopesDetailScene; // +0xbc
    unsigned int _m_enLiveStreamRedEnvelopesSenderIdentityType; // +0xc0
    NSString * _m_nsReceiveID; // +0xc8
    GetShowSourceResp * _showSourceResp; // +0xd0
    NSArray * _redEnvelopesShowResources; // +0xd8
    NSArray * _redEnvelopesExpiredResources; // +0xe0
    HbEnvelopSource * _currentRedEnvelopeShowResource; // +0xe8
    CoverInfoDetail * _currentCoverInfoDetail; // +0xf0
    RedPacketStoryInfo * _currentStoryInfo; // +0xf8
    GetRedPacketFissionResp * _splitRedPacketFissionResp; // +0x100
    NSMutableArray * _option_items; // +0x108
    UIColor * _redSkinColor; // +0x110
    WCRedEnvelopesGreetingReportObject * _m_greetingHbReportObj; // +0x118
    CEmoticonWrap * _redEnvDetailEmoticonWrap; // +0x120
    RedPacketPreviewMessage * _previewMessage; // +0x128
    CContact * _selectedMemberContact; // +0x130
    long long _currentLaunchRedEnvMode; // +0x138
    WCRedEnvelopesSpringFestivalActivtyEntryInfo * _springFestivalEntryInfo; // +0x140
    NSString * _m_nsLiveStreamRedEnvelopesRequestBuffer; // +0x148
    NSString * _m_nsLiveStreamId; // +0x150
    NSString * _m_nsLiveStreamCustomMessage; // +0x158
    WCRedEnvelopeQuickSendReportObject * _m_quickSendReportObj; // +0x160
    GetDefaultRedpacketResponse * _defaultSkinResp; // +0x168
    RedEnvelopesLiteappJumpInfo * _packetListLiteappInfo; // +0x170
    RedEnvelopesLiteappJumpInfo * _recommend_liteapp_info; // +0x178
    GetRecommendedCoverResponse * _recommendedCoverResponse; // +0x180
}
- (id)m_dicPrepayRequestOrderInfo;
- (void)setM_dicPrepayRequestOrderInfo:(id)arg1;
- (id)m_oSelectContact;
- (void)setM_oSelectContact:(id)arg1;
- (id)m_arrSelectedSendRedEnvelopesUserList;
- (void)setM_arrSelectedSendRedEnvelopesUserList:(id)arg1;
- (id)m_structDicPrepayOrderInfo;
- (void)setM_structDicPrepayOrderInfo:(id)arg1;
- (id)m_structDicRedEnvelopesUserInfo;
- (void)setM_structDicRedEnvelopesUserInfo:(id)arg1;
- (id)m_oSelectedMessageWrap;
- (void)setM_oSelectedMessageWrap:(id)arg1;
- (id)m_structDicAfterOpenRedEnvelopesInfo;
- (void)setM_structDicAfterOpenRedEnvelopesInfo:(id)arg1;
- (id)m_structDicRedEnvelopesBaseInfo;
- (void)setM_structDicRedEnvelopesBaseInfo:(id)arg1;
- (id)m_structDicRedEnvelopesCompleteInfo;
- (void)setM_structDicRedEnvelopesCompleteInfo:(id)arg1;
- (id)m_oWCRedEnvelopesDetailInfo;
- (void)setM_oWCRedEnvelopesDetailInfo:(id)arg1;
- (id)m_oWCRedEnvelopesHistoryInfo;
- (void)setM_oWCRedEnvelopesHistoryInfo:(id)arg1;
- (id)m_oSelectedWCRedEnvelopesReceivedRedEnvelopesInfo;
- (void)setM_oSelectedWCRedEnvelopesReceivedRedEnvelopesInfo:(id)arg1;
- (id)m_oSelectedWCRedEnvelopesSendedRedEnvelopesInfo;
- (void)setM_oSelectedWCRedEnvelopesSendedRedEnvelopesInfo:(id)arg1;
- (id)m_oWCRedEnvelopesAtomicInfo;
- (void)setM_oWCRedEnvelopesAtomicInfo:(id)arg1;
- (id)m_oWCRedEnvelopesOpTail;
- (void)setM_oWCRedEnvelopesOpTail:(id)arg1;
- (id)m_nsWCRedEnvelopesBrandMessageNativeUrl;
- (void)setM_nsWCRedEnvelopesBrandMessageNativeUrl:(id)arg1;
- (id)m_nsOpenBundleId;
- (void)setM_nsOpenBundleId:(id)arg1;
- (id)m_nsSendID;
- (void)setM_nsSendID:(id)arg1;
- (id)m_dicOpenApiParam;
- (void)setM_dicOpenApiParam:(id)arg1;
- (id)realnameGuideInfo;
- (void)setRealnameGuideInfo:(id)arg1;
- (id)m_structDicEnterpriseRedEnvelopesData;
- (void)setM_structDicEnterpriseRedEnvelopesData:(id)arg1;
- (id)m_nsReceiveID;
- (void)setM_nsReceiveID:(id)arg1;
- (unsigned int)h5RecordHBKind;
- (void)setH5RecordHBKind:(unsigned int)arg1;
- (id)showSourceResp;
- (void)setShowSourceResp:(id)arg1;
- (id)redEnvelopesShowResources;
- (void)setRedEnvelopesShowResources:(id)arg1;
- (id)redEnvelopesExpiredResources;
- (void)setRedEnvelopesExpiredResources:(id)arg1;
- (id)currentRedEnvelopeShowResource;
- (void)setCurrentRedEnvelopeShowResource:(id)arg1;
- (id)currentCoverInfoDetail;
- (void)setCurrentCoverInfoDetail:(id)arg1;
- (id)currentStoryInfo;
- (void)setCurrentStoryInfo:(id)arg1;
- (id)splitRedPacketFissionResp;
- (void)setSplitRedPacketFissionResp:(id)arg1;
- (unsigned int)currentStoryInfoSubtypeId;
- (void)setCurrentStoryInfoSubtypeId:(unsigned int)arg1;
- (id)option_items;
- (void)setOption_items:(id)arg1;
- (id)redSkinColor;
- (void)setRedSkinColor:(id)arg1;
- (id)m_greetingHbReportObj;
- (void)setM_greetingHbReportObj:(id)arg1;
- (BOOL)bHasEmoticonData;
- (void)setBHasEmoticonData:(BOOL)arg1;
- (id)redEnvDetailEmoticonWrap;
- (void)setRedEnvDetailEmoticonWrap:(id)arg1;
- (id)previewMessage;
- (void)setPreviewMessage:(id)arg1;
- (unsigned int)currentRedEnvelopesDetailScene;
- (void)setCurrentRedEnvelopesDetailScene:(unsigned int)arg1;
- (BOOL)isFirstEntryDetailView;
- (void)setIsFirstEntryDetailView:(BOOL)arg1;
- (BOOL)isForeignHB;
- (void)setIsForeignHB:(BOOL)arg1;
- (id)selectedMemberContact;
- (void)setSelectedMemberContact:(id)arg1;
- (long long)currentLaunchRedEnvMode;
- (void)setCurrentLaunchRedEnvMode:(long long)arg1;
- (id)springFestivalEntryInfo;
- (void)setSpringFestivalEntryInfo:(id)arg1;
- (id)m_nsLiveStreamRedEnvelopesRequestBuffer;
- (void)setM_nsLiveStreamRedEnvelopesRequestBuffer:(id)arg1;
- (id)m_nsLiveStreamId;
- (void)setM_nsLiveStreamId:(id)arg1;
- (id)m_nsLiveStreamCustomMessage;
- (void)setM_nsLiveStreamCustomMessage:(id)arg1;
- (unsigned int)m_enLiveStreamRedEnvelopesSenderIdentityType;
- (void)setM_enLiveStreamRedEnvelopesSenderIdentityType:(unsigned int)arg1;
- (id)m_quickSendReportObj;
- (void)setM_quickSendReportObj:(id)arg1;
- (BOOL)isFirstTimeOpenRedEnvelope;
- (void)setIsFirstTimeOpenRedEnvelope:(BOOL)arg1;
- (id)defaultSkinResp;
- (void)setDefaultSkinResp:(id)arg1;
- (id)packetListLiteappInfo;
- (void)setPacketListLiteappInfo:(id)arg1;
- (id)recommend_liteapp_info;
- (void)setRecommend_liteapp_info:(id)arg1;
- (id)recommendedCoverResponse;
- (void)setRecommendedCoverResponse:(id)arg1;
- (void).cxx_destruct;
@end
