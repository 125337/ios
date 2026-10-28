@interface WCPayConfirmTransferRequest : NSObject
{
    NSString * m_nsTransferID; // +0x8
    NSString * m_nsFromUserName; // +0x10
    unsigned long long m_uiInvalidTime; // +0x18
    unsigned int _recv_channel_type; // +0x20
    unsigned int _groupType; // +0x24
    NSString * _left_button_continue; // +0x28
    NSString * _group_username; // +0x30
    NSString * _sub_title_clicked; // +0x38
    unsigned long long _sub_recv_channel_id; // +0x40
}
- (id)m_nsTransferID;
- (void)setM_nsTransferID:(id)arg1;
- (id)m_nsFromUserName;
- (void)setM_nsFromUserName:(id)arg1;
- (unsigned long long)m_uiInvalidTime;
- (void)setM_uiInvalidTime:(unsigned long long)arg1;
- (id)left_button_continue;
- (void)setLeft_button_continue:(id)arg1;
- (id)group_username;
- (void)setGroup_username:(id)arg1;
- (unsigned int)recv_channel_type;
- (void)setRecv_channel_type:(unsigned int)arg1;
- (unsigned int)groupType;
- (void)setGroupType:(unsigned int)arg1;
- (id)sub_title_clicked;
- (void)setSub_title_clicked:(id)arg1;
- (unsigned long long)sub_recv_channel_id;
- (void)setSub_recv_channel_id:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
