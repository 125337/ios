@interface BLEDeviceManager : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate, CBPeripheralDelegate>
{
    BOOL _isAdvertising; // +0x8
    BOOL _isScanning; // +0x9
    BOOL _isServiceAdded; // +0xa
    BOOL _isAddingService; // +0xb
    BOOL _isSending; // +0xc
    BOOL _isWaitingForReadyToUpdate; // +0xd
    id <BLEDeviceManagerDelegate> _delegate; // +0x10
    NSString * _characteristicUUID; // +0x18
    CBCentralManager * _centralManager; // +0x20
    CBPeripheralManager * _peripheralManager; // +0x28
    CBMutableCharacteristic * _characteristic; // +0x30
    CBMutableService * _service; // +0x38
    NSMutableDictionary * _discoveredPeripherals; // +0x40
    NSMutableDictionary * _writeCharacteristics; // +0x48
    NSMutableArray * _subscribedCentrals; // +0x50
    NSMutableDictionary * _reassemblyBuffers; // +0x58
    NSMutableArray * _sendQueue; // +0x60
}
+ (id)sharedManager;
- (id)init;
- (void)setupServiceData;
- (void)handleReceivedData:(id)arg1 fromDevice:(id)arg2;
- (BOOL)sendMessage:(id)arg1 toDevice:(id)arg2;
- (BOOL)broadcastMessage:(id)arg1;
- (void)processSendQueue;
- (void)performWritePacket:(id)arg1;
- (void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1;
- (void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3;
- (void)startAdvertising;
- (void)startAdvertisingImpl;
- (void)startAdvertisingBroadcast;
- (void)stopAdvertising;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)startScanning;
- (void)stopScanning;
- (BOOL)connectToDevice:(id)arg1;
- (BOOL)disconnectDevice:(id)arg1;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)cleanup;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isAdvertising;
- (void)setIsAdvertising:(BOOL)arg1;
- (BOOL)isScanning;
- (void)setIsScanning:(BOOL)arg1;
- (id)characteristicUUID;
- (void)setCharacteristicUUID:(id)arg1;
- (id)centralManager;
- (void)setCentralManager:(id)arg1;
- (id)peripheralManager;
- (void)setPeripheralManager:(id)arg1;
- (id)characteristic;
- (void)setCharacteristic:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (BOOL)isServiceAdded;
- (void)setIsServiceAdded:(BOOL)arg1;
- (BOOL)isAddingService;
- (void)setIsAddingService:(BOOL)arg1;
- (id)discoveredPeripherals;
- (void)setDiscoveredPeripherals:(id)arg1;
- (id)writeCharacteristics;
- (void)setWriteCharacteristics:(id)arg1;
- (id)subscribedCentrals;
- (void)setSubscribedCentrals:(id)arg1;
- (id)reassemblyBuffers;
- (void)setReassemblyBuffers:(id)arg1;
- (id)sendQueue;
- (void)setSendQueue:(id)arg1;
- (BOOL)isSending;
- (void)setIsSending:(BOOL)arg1;
- (BOOL)isWaitingForReadyToUpdate;
- (void)setIsWaitingForReadyToUpdate:(BOOL)arg1;
- (void).cxx_destruct;
@end
