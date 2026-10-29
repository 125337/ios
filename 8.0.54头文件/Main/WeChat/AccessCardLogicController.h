@interface AccessCardLogicController : MMObject <CBCentralManagerDelegate, LocationRetrieveDelegate, PBMessageObserverDelegate>
{
    MMTimer * _uploadTimer; // +0x8
    CBCentralManager * _centralManager; // +0x10
    DeviceInfoData * _foundDeviceWithMaxRSSI; // +0x18
    BOOL _deviceInfoHasChanged; // +0x20
    BOOL _deviceForceUpdate; // +0x21
    NSString * _cardID; // +0x28
    WCCardDataCardInfo * _cardInfo; // +0x30
    WCCardDataCardTPInfo * _cardTPInfo; // +0x38
    LocationRetriever * _locationRetriver; // +0x40
    CLLocation * _curLocation; // +0x48
    BOOL _locationHasChanged; // +0x50
    BOOL _bIsBleScanning; // +0x51
    BOOL _hasTurnedOnBluetooth; // +0x52
    BOOL _hasAuthorizeLocation; // +0x53
    BOOL _bIsShowingAlert; // +0x54
    double _timerInterval; // +0x58
    BOOL _bIsAlreadyShowLocationSwitchOff; // +0x60
    id <AccessCardLogicDelegate> _m_delegate; // +0x68
}
- (id)initWithCardID:(id)arg1 andCardInfo:(id)arg2 andCardTPInfo:(id)arg3;
- (void)dealloc;
- (void)updateWithCardID:(id)arg1 andCardInfo:(id)arg2 andCardTPInfo:(id)arg3;
- (void)tryStart;
- (void)tryStop;
- (void)alertRefuseRetriveLocation;
- (void)alertConfirmRetriveLocation;
- (void)tryStartLocationLogic;
- (void)tryStopLocationLogic;
- (void)startRetriveLocation;
- (void)stopRetriveLocation;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)reportLocationWithLocation:(id)arg1 ErrorCode:(long long)arg2;
- (void)tryStartBLELogic;
- (void)realScanBLE;
- (void)tryStopBLELogic;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)tryUploadDataLogic;
- (void)tryStopUploadDataLogic;
- (void)doUplaodAction;
- (void)makeUploadRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onResponseProcess:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

