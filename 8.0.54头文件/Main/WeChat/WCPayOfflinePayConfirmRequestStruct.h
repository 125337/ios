@interface WCPayOfflinePayConfirmRequestStruct : NSObject
{
    NSString * m_nsMessageID; // +0x8
    int m_enWCPayOfflinePayConfirmRequestButtonType; // +0x10
    NSString * m_nsPasswd; // +0x18
}
- (int)m_enWCPayOfflinePayConfirmRequestButtonType;
- (void)setM_enWCPayOfflinePayConfirmRequestButtonType:(int)arg1;
- (id)m_nsMessageID;
- (void)setM_nsMessageID:(id)arg1;
- (id)m_nsPasswd;
- (void)setM_nsPasswd:(id)arg1;
- (void).cxx_destruct;
@end

