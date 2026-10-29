@interface CVerifyContactWrap : NSObject
{
    NSString * m_nsUsrName; // +0x8
    NSString * m_nsOriginalUsrName; // +0x10
    unsigned int m_uiScene; // +0x18
    NSString * m_nsTicket; // +0x20
    unsigned int m_uiWCFlag; // +0x28
    CContact * m_oVerifyContact; // +0x30
    BOOL _hasReportData; // +0x38
    unsigned int _subScene; // +0x3c
    unsigned int _mpScene; // +0x40
    unsigned int _addContactSubScene; // +0x44
    unsigned int _productId; // +0x48
    NSString * m_nsSourceUserName; // +0x50
    NSString * m_nsSourceNickName; // +0x58
    CContact * _m_oVerifyChatContact; // +0x60
    NSString * _m_nsChatRoomUserName; // +0x68
    NSString * _outerUrl; // +0x70
    NSString * _m_reportInfo; // +0x78
    NSString * _sceneNote; // +0x80
    NSString * _finderBuffer; // +0x88
    NSString * _verifyContent; // +0x90
    NSString * _ctx; // +0x98
    NSString * _searchClickId; // +0xa0
    unsigned long long _m_n64MsgId; // +0xa8
    NSArray * _labelIdList; // +0xb0
    NSArray * _m_arrPhoneItem; // +0xb8
}
- (id)init;
- (id)getRealUserName;
- (id)m_nsUsrName;
- (void)setM_nsUsrName:(id)arg1;
- (id)m_nsOriginalUsrName;
- (void)setM_nsOriginalUsrName:(id)arg1;
- (unsigned int)m_uiScene;
- (void)setM_uiScene:(unsigned int)arg1;
- (id)m_nsTicket;
- (void)setM_nsTicket:(id)arg1;
- (unsigned int)m_uiWCFlag;
- (void)setM_uiWCFlag:(unsigned int)arg1;
- (id)m_oVerifyContact;
- (void)setM_oVerifyContact:(id)arg1;
- (id)m_nsSourceUserName;
- (void)setM_nsSourceUserName:(id)arg1;
- (id)m_nsSourceNickName;
- (void)setM_nsSourceNickName:(id)arg1;
- (id)m_oVerifyChatContact;
- (void)setM_oVerifyChatContact:(id)arg1;
- (id)m_nsChatRoomUserName;
- (void)setM_nsChatRoomUserName:(id)arg1;
- (unsigned int)subScene;
- (void)setSubScene:(unsigned int)arg1;
- (id)outerUrl;
- (void)setOuterUrl:(id)arg1;
- (id)m_reportInfo;
- (void)setM_reportInfo:(id)arg1;
- (unsigned int)mpScene;
- (void)setMpScene:(unsigned int)arg1;
- (BOOL)hasReportData;
- (void)setHasReportData:(BOOL)arg1;
- (unsigned int)addContactSubScene;
- (void)setAddContactSubScene:(unsigned int)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (unsigned int)productId;
- (void)setProductId:(unsigned int)arg1;
- (id)finderBuffer;
- (void)setFinderBuffer:(id)arg1;
- (id)verifyContent;
- (void)setVerifyContent:(id)arg1;
- (id)ctx;
- (void)setCtx:(id)arg1;
- (id)searchClickId;
- (void)setSearchClickId:(id)arg1;
- (unsigned long long)m_n64MsgId;
- (void)setM_n64MsgId:(unsigned long long)arg1;
- (id)labelIdList;
- (void)setLabelIdList:(id)arg1;
- (id)m_arrPhoneItem;
- (void)setM_arrPhoneItem:(id)arg1;
- (void).cxx_destruct;
@end
