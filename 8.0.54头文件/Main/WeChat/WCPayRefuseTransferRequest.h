@interface WCPayRefuseTransferRequest : NSObject
{
    NSString * m_nsTransferID; // +0x8
    NSString * m_nsFromUserName; // +0x10
    unsigned long long m_uiInvalidTime; // +0x18
    unsigned int _groupType; // +0x20
    NSString * _group_username; // +0x28
    NSString * _sub_title_clicked; // +0x30
}
- (id)m_nsTransferID;
- (void)setM_nsTransferID:(id)arg1;
- (id)m_nsFromUserName;
- (void)setM_nsFromUserName:(id)arg1;
- (unsigned long long)m_uiInvalidTime;
- (void)setM_uiInvalidTime:(unsigned long long)arg1;
- (id)group_username;
- (void)setGroup_username:(id)arg1;
- (unsigned int)groupType;
- (void)setGroupType:(unsigned int)arg1;
- (id)sub_title_clicked;
- (void)setSub_title_clicked:(id)arg1;
- (void).cxx_destruct;
@end

