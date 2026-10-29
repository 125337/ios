@interface WCPayInfoItem : NSObject <PBCoding, NSCopying>
{
    unsigned int _m_uiPaySubType; // +0x8
    unsigned int _m_uiInvalidTime; // +0xc
    unsigned int _m_uiBeginTransferTime; // +0x10
    unsigned int _m_uiEffectiveDate; // +0x14
    unsigned int _m_templateID; // +0x18
    unsigned int _m_c2c_msg_subtype; // +0x1c
    unsigned int _m_uiImageLength; // +0x20
    unsigned int _m_sceneId; // +0x24
    unsigned int _m_aaNewAAType; // +0x28
    int _m_redEnvelopeType; // +0x2c
    unsigned int _m_c2cShowSourceSubtype; // +0x30
    unsigned int _m_expressionType; // +0x34
    unsigned int _has_transfer_address; // +0x38
    int _bubble_click_flag; // +0x3c
    unsigned int _m_c2cPayBubbleType; // +0x40
    unsigned int _m_c2cPayReceiveStatus; // +0x44
    NSString * _m_nsFeeDesc; // +0x48
    NSString * _m_nsTranscationID; // +0x50
    NSString * _m_nsTransferID; // +0x58
    NSString * _m_c2cUrl; // +0x60
    NSString * _m_c2cNativeUrl; // +0x68
    NSString * _m_c2cIconUrl; // +0x70
    NSString * _m_receiverTitle; // +0x78
    NSString * _m_senderTitle; // +0x80
    NSString * _m_hintText; // +0x88
    NSString * _m_sceneText; // +0x90
    NSString * _m_receiverDesc; // +0x98
    NSString * _m_senderDesc; // +0xa0
    NSString * _m_total_fee; // +0xa8
    NSString * _m_fee_type; // +0xb0
    NSString * _m_nsPayMsgID; // +0xb8
    NSString * _m_payMemo; // +0xc0
    NSString * _m_nsImageID; // +0xc8
    NSString * _m_nsImageAesKey; // +0xd0
    NSString * _m_aaOrderBillNum; // +0xd8
    NSString * _m_aaLauncherTitle; // +0xe0
    NSString * _m_aaNotinerTitle; // +0xe8
    NSString * _m_aaReceiverTitle; // +0xf0
    NSString * _m_aaReceiverList; // +0xf8
    NSString * _m_aaPayerTitle; // +0x100
    NSString * _m_aaPayerList; // +0x108
    NSString * _m_aaCustomizePayerList; // +0x110
    NSString * _m_aaLauncherUsername; // +0x118
    NSString * _m_c2cLocalLogoIcon; // +0x120
    NSString * _m_c2cLocalBubbleImage; // +0x128
    long long _m_redEnvelopeReceiveAmount; // +0x130
    NSString * _m_c2cSenderShowSourceUrl; // +0x138
    NSString * _m_c2cReceiverShowSourceUrl; // +0x140
    NSString * _m_c2cReceiveHBShowSourceUrl; // +0x148
    NSString * _m_c2cStatusShowSourceUrl; // +0x150
    NSString * _m_c2cShowResourceCorpName; // +0x158
    NSString * _m_c2cSenderShowSourceMd5; // +0x160
    NSString * _m_c2cReceiverShowSourceMd5; // +0x168
    NSString * _m_c2cReceiveHBShowSourceMd5; // +0x170
    NSString * _m_c2cStatusShowSourceUrlMd5; // +0x178
    NSString * _m_expressionUrl; // +0x180
    CoverInfoDetail * _m_coverInfoDetail; // +0x188
    NSString * _exclusive_recv_username; // +0x190
    NSString * _transfer_receiver_username; // +0x198
    NSString * _transfer_payer_username; // +0x1a0
}
+ (void)PBArrayAdd_m_uiPaySubType;
+ (void)PBArrayAdd_m_nsFeeDesc;
+ (void)PBArrayAdd_m_nsTranscationID;
+ (void)PBArrayAdd_m_uiInvalidTime;
+ (void)PBArrayAdd_m_nsTransferID;
+ (void)PBArrayAdd_m_uiBeginTransferTime;
+ (void)PBArrayAdd_m_uiEffectiveDate;
+ (void)PBArrayAdd_m_templateID;
+ (void)PBArrayAdd_m_c2cUrl;
+ (void)PBArrayAdd_m_c2cIconUrl;
+ (void)PBArrayAdd_m_receiverTitle;
+ (void)PBArrayAdd_m_senderTitle;
+ (void)PBArrayAdd_m_hintText;
+ (void)PBArrayAdd_m_sceneText;
+ (void)PBArrayAdd_m_receiverDesc;
+ (void)PBArrayAdd_m_senderDesc;
+ (void)PBArrayAdd_m_total_fee;
+ (void)PBArrayAdd_m_fee_type;
+ (void)PBArrayAdd_m_c2cNativeUrl;
+ (void)PBArrayAdd_m_c2c_msg_subtype;
+ (void)PBArrayAdd_m_nsPayMsgID;
+ (void)PBArrayAdd_m_payMemo;
+ (void)PBArrayAdd_m_nsImageID;
+ (void)PBArrayAdd_m_nsImageAesKey;
+ (void)PBArrayAdd_m_uiImageLength;
+ (void)PBArrayAdd_m_sceneId;
+ (void)PBArrayAdd_m_aaOrderBillNum;
+ (void)PBArrayAdd_m_aaNewAAType;
+ (void)PBArrayAdd_m_aaLauncherTitle;
+ (void)PBArrayAdd_m_aaNotinerTitle;
+ (void)PBArrayAdd_m_aaReceiverTitle;
+ (void)PBArrayAdd_m_aaReceiverList;
+ (void)PBArrayAdd_m_aaPayerTitle;
+ (void)PBArrayAdd_m_aaPayerList;
+ (void)PBArrayAdd_m_aaLauncherUsername;
+ (void)PBArrayAdd_m_redEnvelopeType;
+ (void)PBArrayAdd_m_redEnvelopeReceiveAmount;
+ (void)PBArrayAdd_m_c2cLocalLogoIcon;
+ (void)PBArrayAdd_m_c2cLocalBubbleImage;
+ (void)PBArrayAdd_has_transfer_address;
+ (void)PBArrayAdd_m_c2cSenderShowSourceUrl;
+ (void)PBArrayAdd_m_c2cReceiverShowSourceUrl;
+ (void)PBArrayAdd_m_c2cReceiveHBShowSourceUrl;
+ (void)PBArrayAdd_m_c2cStatusShowSourceUrl;
+ (void)PBArrayAdd_m_c2cShowSourceSubtype;
+ (void)PBArrayAdd_m_c2cShowResourceCorpName;
+ (void)PBArrayAdd_m_c2cSenderShowSourceMd5;
+ (void)PBArrayAdd_m_c2cReceiverShowSourceMd5;
+ (void)PBArrayAdd_m_c2cReceiveHBShowSourceMd5;
+ (void)PBArrayAdd_m_c2cStatusShowSourceUrlMd5;
+ (void)PBArrayAdd_m_expressionUrl;
+ (void)PBArrayAdd_m_expressionType;
+ (void)PBArrayAdd_m_coverInfoDetail;
+ (void)PBArrayAdd_exclusive_recv_username;
+ (void)PBArrayAdd_transfer_receiver_username;
+ (void)PBArrayAdd_bubble_click_flag;
+ (void)PBArrayAdd_transfer_payer_username;
+ (void)PBArrayAdd_m_c2cPayBubbleType;
+ (void)PBArrayAdd_m_c2cPayReceiveStatus;
+ (void)PBArrayAdd_m_aaCustomizePayerList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)dealloc;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)senderShowSourceUrl;
- (id)receiverShowSourceUrl;
- (id)receiveHBShowSourceUrl;
- (id)statusShowSourceUrl;
- (id)senderShowSourceMd5;
- (id)receiverShowSourceMd5;
- (id)receiveHBShowSourceMd5;
- (id)statusShowSourceMd5;
- (unsigned int)coverInfoMaterialFlag;
- (unsigned int)m_uiPaySubType;
- (void)setM_uiPaySubType:(unsigned int)arg1;
- (id)m_nsFeeDesc;
- (void)setM_nsFeeDesc:(id)arg1;
- (id)m_nsTranscationID;
- (void)setM_nsTranscationID:(id)arg1;
- (unsigned int)m_uiInvalidTime;
- (void)setM_uiInvalidTime:(unsigned int)arg1;
- (unsigned int)m_uiBeginTransferTime;
- (void)setM_uiBeginTransferTime:(unsigned int)arg1;
- (id)m_nsTransferID;
- (void)setM_nsTransferID:(id)arg1;
- (unsigned int)m_uiEffectiveDate;
- (void)setM_uiEffectiveDate:(unsigned int)arg1;
- (unsigned int)m_templateID;
- (void)setM_templateID:(unsigned int)arg1;
- (id)m_c2cUrl;
- (void)setM_c2cUrl:(id)arg1;
- (id)m_c2cNativeUrl;
- (void)setM_c2cNativeUrl:(id)arg1;
- (id)m_c2cIconUrl;
- (void)setM_c2cIconUrl:(id)arg1;
- (id)m_receiverTitle;
- (void)setM_receiverTitle:(id)arg1;
- (id)m_senderTitle;
- (void)setM_senderTitle:(id)arg1;
- (id)m_hintText;
- (void)setM_hintText:(id)arg1;
- (id)m_sceneText;
- (void)setM_sceneText:(id)arg1;
- (id)m_receiverDesc;
- (void)setM_receiverDesc:(id)arg1;
- (id)m_senderDesc;
- (void)setM_senderDesc:(id)arg1;
- (id)m_total_fee;
- (void)setM_total_fee:(id)arg1;
- (id)m_fee_type;
- (void)setM_fee_type:(id)arg1;
- (unsigned int)m_c2c_msg_subtype;
- (void)setM_c2c_msg_subtype:(unsigned int)arg1;
- (id)m_nsPayMsgID;
- (void)setM_nsPayMsgID:(id)arg1;
- (id)m_payMemo;
- (void)setM_payMemo:(id)arg1;
- (id)m_nsImageID;
- (void)setM_nsImageID:(id)arg1;
- (id)m_nsImageAesKey;
- (void)setM_nsImageAesKey:(id)arg1;
- (unsigned int)m_uiImageLength;
- (void)setM_uiImageLength:(unsigned int)arg1;
- (unsigned int)m_sceneId;
- (void)setM_sceneId:(unsigned int)arg1;
- (id)m_aaOrderBillNum;
- (void)setM_aaOrderBillNum:(id)arg1;
- (unsigned int)m_aaNewAAType;
- (void)setM_aaNewAAType:(unsigned int)arg1;
- (id)m_aaLauncherTitle;
- (void)setM_aaLauncherTitle:(id)arg1;
- (id)m_aaNotinerTitle;
- (void)setM_aaNotinerTitle:(id)arg1;
- (id)m_aaReceiverTitle;
- (void)setM_aaReceiverTitle:(id)arg1;
- (id)m_aaReceiverList;
- (void)setM_aaReceiverList:(id)arg1;
- (id)m_aaPayerTitle;
- (void)setM_aaPayerTitle:(id)arg1;
- (id)m_aaPayerList;
- (void)setM_aaPayerList:(id)arg1;
- (id)m_aaCustomizePayerList;
- (void)setM_aaCustomizePayerList:(id)arg1;
- (id)m_aaLauncherUsername;
- (void)setM_aaLauncherUsername:(id)arg1;
- (id)m_c2cLocalLogoIcon;
- (void)setM_c2cLocalLogoIcon:(id)arg1;
- (id)m_c2cLocalBubbleImage;
- (void)setM_c2cLocalBubbleImage:(id)arg1;
- (int)m_redEnvelopeType;
- (void)setM_redEnvelopeType:(int)arg1;
- (long long)m_redEnvelopeReceiveAmount;
- (void)setM_redEnvelopeReceiveAmount:(long long)arg1;
- (id)m_c2cSenderShowSourceUrl;
- (void)setM_c2cSenderShowSourceUrl:(id)arg1;
- (id)m_c2cReceiverShowSourceUrl;
- (void)setM_c2cReceiverShowSourceUrl:(id)arg1;
- (id)m_c2cReceiveHBShowSourceUrl;
- (void)setM_c2cReceiveHBShowSourceUrl:(id)arg1;
- (id)m_c2cStatusShowSourceUrl;
- (void)setM_c2cStatusShowSourceUrl:(id)arg1;
- (unsigned int)m_c2cShowSourceSubtype;
- (void)setM_c2cShowSourceSubtype:(unsigned int)arg1;
- (id)m_c2cShowResourceCorpName;
- (void)setM_c2cShowResourceCorpName:(id)arg1;
- (id)m_c2cSenderShowSourceMd5;
- (void)setM_c2cSenderShowSourceMd5:(id)arg1;
- (id)m_c2cReceiverShowSourceMd5;
- (void)setM_c2cReceiverShowSourceMd5:(id)arg1;
- (id)m_c2cReceiveHBShowSourceMd5;
- (void)setM_c2cReceiveHBShowSourceMd5:(id)arg1;
- (id)m_c2cStatusShowSourceUrlMd5;
- (void)setM_c2cStatusShowSourceUrlMd5:(id)arg1;
- (id)m_expressionUrl;
- (void)setM_expressionUrl:(id)arg1;
- (unsigned int)m_expressionType;
- (void)setM_expressionType:(unsigned int)arg1;
- (id)m_coverInfoDetail;
- (void)setM_coverInfoDetail:(id)arg1;
- (unsigned int)has_transfer_address;
- (void)setHas_transfer_address:(unsigned int)arg1;
- (id)exclusive_recv_username;
- (void)setExclusive_recv_username:(id)arg1;
- (id)transfer_receiver_username;
- (void)setTransfer_receiver_username:(id)arg1;
- (id)transfer_payer_username;
- (void)setTransfer_payer_username:(id)arg1;
- (int)bubble_click_flag;
- (void)setBubble_click_flag:(int)arg1;
- (unsigned int)m_c2cPayBubbleType;
- (void)setM_c2cPayBubbleType:(unsigned int)arg1;
- (unsigned int)m_c2cPayReceiveStatus;
- (void)setM_c2cPayReceiveStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end

