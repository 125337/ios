@interface Device : NSObject
{
    EAAccessory * _accessory; // +0x8
    EASession * _session; // +0x10
    CBPeripheral * _peripheral; // +0x18
    CBCharacteristic * _writeCharacter; // +0x20
    CBCharacteristic * _notifyCharacter; // +0x28
    NSMutableData * _receiveData; // +0x30
    NSMutableData * _sendingData; // +0x38
    NSString * _MAC; // +0x40
    BOOL _errorFlag; // +0x48
    BOOL _isSending; // +0x49
    BOOL _isConnectedBy3rdApp; // +0x4a
    int _state; // +0x4c
    long long _did; // +0x50
    long long _sid; // +0x58
    NSStream * _input; // +0x60
    NSStream * _output; // +0x68
    int _profileConnectState; // +0x70
    int _profileType; // +0x74
    NSString * _Name; // +0x78
    CBCharacteristic * _pedometerProfileCurMeasurementCharacter; // +0x80
    CBCharacteristic * _pedometerProfileTargetCharacter; // +0x88
}
- (id)init;
- (id)accessory;
- (void)setAccessory:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)peripheral;
- (void)setPeripheral:(id)arg1;
- (id)writeCharacter;
- (void)setWriteCharacter:(id)arg1;
- (id)notifyCharacter;
- (void)setNotifyCharacter:(id)arg1;
- (id)receiveData;
- (void)setReceiveData:(id)arg1;
- (id)sendingData;
- (void)setSendingData:(id)arg1;
- (id)MAC;
- (void)setMAC:(id)arg1;
- (BOOL)errorFlag;
- (void)setErrorFlag:(BOOL)arg1;
- (BOOL)isSending;
- (void)setIsSending:(BOOL)arg1;
- (BOOL)isConnectedBy3rdApp;
- (void)setIsConnectedBy3rdApp:(BOOL)arg1;
- (int)state;
- (void)setState:(int)arg1;
- (long long)did;
- (void)setDid:(long long)arg1;
- (long long)sid;
- (void)setSid:(long long)arg1;
- (id)input;
- (void)setInput:(id)arg1;
- (id)output;
- (void)setOutput:(id)arg1;
- (id)Name;
- (void)setName:(id)arg1;
- (int)profileConnectState;
- (void)setProfileConnectState:(int)arg1;
- (int)profileType;
- (void)setProfileType:(int)arg1;
- (id)pedometerProfileCurMeasurementCharacter;
- (void)setPedometerProfileCurMeasurementCharacter:(id)arg1;
- (id)pedometerProfileTargetCharacter;
- (void)setPedometerProfileTargetCharacter:(id)arg1;
- (void).cxx_destruct;
@end
