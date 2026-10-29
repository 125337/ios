@interface SyncBufferInfo : NSObject
{
    NSData * m_dtSyncBuffer; // +0x8
    NSString * m_nsUserName; // +0x10
}
- (id)initWithUserName:(id)arg1 SyncBuffer:(id)arg2;
- (id)m_dtSyncBuffer;
- (id)m_nsUserName;
- (void).cxx_destruct;
@end

