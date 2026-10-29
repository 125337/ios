@interface ChatMigrationCreateQRCode : MMObject <PBMessageObserverDelegate>
{
    id <ChatMigrationCreateQRCodeDelegate> m_delegate; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)getQRCodeWithIP:(id)arg1 Port:(unsigned short)arg2 WifiName:(id)arg3 PcName:(id)arg4 PcacctName:(id)arg5 TotalSize:(unsigned long long)arg6;
- (void)getQRCodeOfflineWithIP:(id)arg1 Port:(unsigned short)arg2 WifiName:(id)arg3 PcName:(id)arg4 PcacctName:(id)arg5 TotalSize:(unsigned long long)arg6 Ticket:(id)arg7 AESKey:(id)arg8 Uin:(unsigned int)arg9;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
