@interface QBBeaconLocalStrategy : QBBeaconPersistObject <QBBeaconAnaLocalObjInitWithWupProtocol>
{
    int zipAlg; // +0x34
    int encAlg; // +0x38
    NSString * encKey; // +0x40
    NSString * encPubKey; // +0x48
    int dbMaxSize; // +0x50
    int queryInterval; // +0x54
    NSString * url; // +0x58
    NSDictionary * cloudParas; // +0x60
    NSDictionary * moduleStrategys; // +0x68
}
- (id)init;
- (id)url;
- (void)initLocalObjWithWupBuffer:(id)arg1;
- (BOOL)addModuleStrategy:(id)arg1;
- (id)getStrategyForKey:(int)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (int)zipAlg;
- (void)setZipAlg:(int)arg1;
- (int)encAlg;
- (void)setEncAlg:(int)arg1;
- (id)encKey;
- (void)setEncKey:(id)arg1;
- (id)encPubKey;
- (void)setEncPubKey:(id)arg1;
- (id)moduleStrategys;
- (void)setModuleStrategys:(id)arg1;
- (id)cloudParas;
- (void)setCloudParas:(id)arg1;
- (int)queryInterval;
- (void)setQueryInterval:(int)arg1;
- (void)setUrl:(id)arg1;
- (int)dbMaxSize;
- (void)setDbMaxSize:(int)arg1;
@end
