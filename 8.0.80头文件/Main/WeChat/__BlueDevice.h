@interface __BlueDevice : NSObject
{
    unsigned int _m_deviceMode; // +0x8
    NSMutableDictionary * m_channels; // +0x10
    NSMutableDictionary * m_stopingChannels; // +0x18
    long long _m_deviceId; // +0x20
}
- (id)init;
- (id)getOneChannel;
- (id)m_channels;
- (void)setM_channels:(id)arg1;
- (id)m_stopingChannels;
- (void)setM_stopingChannels:(id)arg1;
- (unsigned int)m_deviceMode;
- (void)setM_deviceMode:(unsigned int)arg1;
- (long long)m_deviceId;
- (void)setM_deviceId:(long long)arg1;
- (void).cxx_destruct;
@end
