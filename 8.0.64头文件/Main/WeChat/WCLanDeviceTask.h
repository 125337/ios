@interface WCLanDeviceTask : NSObject
{
    int m_subTaskId; // +0x8
    NSString * m_deviceType; // +0x10
    NSString * m_deviceId; // +0x18
    long long m_taskId; // +0x20
    long long m_taskCmd; // +0x28
}
- (id)m_deviceType;
- (void)setM_deviceType:(id)arg1;
- (id)m_deviceId;
- (void)setM_deviceId:(id)arg1;
- (long long)m_taskId;
- (void)setM_taskId:(long long)arg1;
- (long long)m_taskCmd;
- (void)setM_taskCmd:(long long)arg1;
- (int)m_subTaskId;
- (void)setM_subTaskId:(int)arg1;
- (void).cxx_destruct;
@end
