@interface VideoRingDataService : MMUserService <VideRingModifyExt, MMServiceProtocol>
{
    BOOL _shouldOpenRingBackSwitch; // +0x8
    BOOL _needReportCallKitRing; // +0x9
    BOOL _needReportVoipPushRing; // +0xa
    BOOL _listenedNewRingBackFlag; // +0xb
    VideoRingDataBase * _db; // +0x10
    NSString * _sessionID; // +0x18
    unsigned long long _sessionChannel; // +0x20
    RingToneDetail * _currentSetRing; // +0x28
    unsigned long long _scene; // +0x30
    unsigned long long _feedType; // +0x38
    VideoRingDataBase * _dataBase; // +0x40
    NSMutableSet * _requestedVibrateFileIDSet; // +0x48
    VideoRingNetProvider * _provider; // +0x50
}
- (void)onServiceInit;
- (BOOL)fetchVibrateFileIfNeededFor:(id)arg1;
- (id)getGlobalRing;
- (BOOL)hasAnyLocalRing;
- (id)requestedVibrateFileIDSet;
- (id)provider;
- (unsigned long long)curRoomIDFor:(unsigned long long)arg1;
- (unsigned long long)curRoomKeyFor:(unsigned long long)arg1;
- (id)db;
- (void)setDb:(id)arg1;
- (BOOL)shouldOpenRingBackSwitch;
- (void)setShouldOpenRingBackSwitch:(BOOL)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (BOOL)needReportCallKitRing;
- (void)setNeedReportCallKitRing:(BOOL)arg1;
- (BOOL)needReportVoipPushRing;
- (void)setNeedReportVoipPushRing:(BOOL)arg1;
- (BOOL)listenedNewRingBackFlag;
- (void)setListenedNewRingBackFlag:(BOOL)arg1;
- (unsigned long long)sessionChannel;
- (void)setSessionChannel:(unsigned long long)arg1;
- (id)currentSetRing;
- (void)setCurrentSetRing:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)feedType;
- (void)setFeedType:(unsigned long long)arg1;
- (id)dataBase;
- (void)setDataBase:(id)arg1;
- (void)setRequestedVibrateFileIDSet:(id)arg1;
- (void)setProvider:(id)arg1;
- (void).cxx_destruct;
@end
