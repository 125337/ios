@interface CExtendInfoOfEmoticon : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    NSString * m_nsEmoticonMD5; // +0x8
    unsigned int m_uiEmoticonType; // +0x10
    unsigned int m_uiGameType; // +0x14
    unsigned int m_uiGameContent; // +0x18
    unsigned int m_uiUploadStatus; // +0x1c
    NSString * m_nsEmoticonBelongToProductID; // +0x20
    NSString * m_nsDesignerId; // +0x28
    NSString * m_nsThumbImgUrl; // +0x30
    NSString * m_tpUrlString; // +0x38
    NSString * m_authkey; // +0x40
    BOOL m_bShowRewardTips; // +0x48
    BOOL disableRecordSend; // +0x49
    BOOL _isNonFreeItem; // +0x4a
    BOOL _isPriceInfoUnkown; // +0x4b
    unsigned int _m_uiEmoticonWidth; // +0x4c
    unsigned int _m_uiEmoticonHeight; // +0x50
    CMessageWrap * m_refMessageWrap; // +0x58
    NSString * m_cdnUrlString; // +0x60
    NSString * m_encryptUrlString; // +0x68
    NSString * m_aesKey; // +0x70
    NSString * m_nsExternUrl; // +0x78
    NSString * m_nsExternMd5; // +0x80
    NSString * m_nsActivityId; // +0x88
    NSString * m_nsLinkId; // +0x90
    NSString * m_attachedText; // +0x98
    NSString * m_attachedTextColor; // +0xa0
    NSString * m_lensId; // +0xa8
    NSString * m_nsEmoticonSvrDescStr; // +0xb0
}
+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)ChangeForDisplay;
- (id)GetContent;
- (void)UpdateContent:(id)arg1;
- (id)GetGameStatReportString;
- (void)UpdateGameInfo:(id)arg1;
- (id)description;
- (id)GetDisplaySessionContent;
- (id)msgReferSummaryAndReplace:(BOOL)arg1;
- (id)m_nsEmoticonMD5;
- (void)setM_nsEmoticonMD5:(id)arg1;
- (unsigned int)m_uiEmoticonType;
- (void)setM_uiEmoticonType:(unsigned int)arg1;
- (unsigned int)m_uiGameContent;
- (void)setM_uiGameContent:(unsigned int)arg1;
- (unsigned int)m_uiGameType;
- (void)setM_uiGameType:(unsigned int)arg1;
- (id)m_refMessageWrap;
- (void)setM_refMessageWrap:(id)arg1;
- (unsigned int)m_uiUploadStatus;
- (void)setM_uiUploadStatus:(unsigned int)arg1;
- (id)m_nsEmoticonBelongToProductID;
- (void)setM_nsEmoticonBelongToProductID:(id)arg1;
- (id)m_cdnUrlString;
- (void)setM_cdnUrlString:(id)arg1;
- (id)m_encryptUrlString;
- (void)setM_encryptUrlString:(id)arg1;
- (id)m_aesKey;
- (void)setM_aesKey:(id)arg1;
- (id)m_nsExternUrl;
- (void)setM_nsExternUrl:(id)arg1;
- (id)m_nsExternMd5;
- (void)setM_nsExternMd5:(id)arg1;
- (id)m_nsDesignerId;
- (void)setM_nsDesignerId:(id)arg1;
- (id)m_nsActivityId;
- (void)setM_nsActivityId:(id)arg1;
- (id)m_nsLinkId;
- (void)setM_nsLinkId:(id)arg1;
- (id)m_nsThumbImgUrl;
- (void)setM_nsThumbImgUrl:(id)arg1;
- (BOOL)m_bShowRewardTips;
- (void)setM_bShowRewardTips:(BOOL)arg1;
- (id)m_tpUrlString;
- (void)setM_tpUrlString:(id)arg1;
- (id)m_authkey;
- (void)setM_authkey:(id)arg1;
- (id)m_attachedText;
- (void)setM_attachedText:(id)arg1;
- (id)m_attachedTextColor;
- (void)setM_attachedTextColor:(id)arg1;
- (id)m_lensId;
- (void)setM_lensId:(id)arg1;
- (id)m_nsEmoticonSvrDescStr;
- (void)setM_nsEmoticonSvrDescStr:(id)arg1;
- (BOOL)disableRecordSend;
- (void)setDisableRecordSend:(BOOL)arg1;
- (unsigned int)m_uiEmoticonWidth;
- (void)setM_uiEmoticonWidth:(unsigned int)arg1;
- (unsigned int)m_uiEmoticonHeight;
- (void)setM_uiEmoticonHeight:(unsigned int)arg1;
- (BOOL)isNonFreeItem;
- (void)setIsNonFreeItem:(BOOL)arg1;
- (BOOL)isPriceInfoUnkown;
- (void)setIsPriceInfoUnkown:(BOOL)arg1;
- (void).cxx_destruct;
@end

