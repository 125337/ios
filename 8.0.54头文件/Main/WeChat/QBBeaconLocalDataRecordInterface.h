@interface QBBeaconLocalDataRecordInterface : NSObject
{
    int maxTime; // +0x8
    int _cloudRealDelayDB; // +0xc
    int _cloudRealNumDB; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)setPersistListener:(id)arg1;
- (void)saveObject:(id)arg1;
- (void)cloudParamInit;
- (void)initTimer;
- (void)clearTimer;
- (void)notifyToPersist;
- (void)doPersist;
- (void)flushObjectsToDB;
- (int)cloudRealDelayDB;
- (void)setCloudRealDelayDB:(int)arg1;
- (int)cloudRealNumDB;
- (void)setCloudRealNumDB:(int)arg1;
@end

