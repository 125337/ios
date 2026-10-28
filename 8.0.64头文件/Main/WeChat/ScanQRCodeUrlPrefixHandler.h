@interface ScanQRCodeUrlPrefixHandler : NSObject
{
    id <ScanQRCodeUrlPrefixHandlerDelegate> _m_delegate; // +0x8
    long long _m_A8KeyScene; // +0x10
}
- (id)initWithDelegate:(id)arg1 GetA8KeyScene:(long long)arg2;
- (void)handleUrl:(id)arg1;
- (id)matchingPrefix;
- (id)matchingPrefixes;
- (int)sessionPayChatType;
- (int)sessionPaySendType;
- (id)sessionPaySenderUserName;
- (id)sessionPayMsgId;
- (char)QRCodeType;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (long long)m_A8KeyScene;
- (void)setM_A8KeyScene:(long long)arg1;
- (void).cxx_destruct;
@end
