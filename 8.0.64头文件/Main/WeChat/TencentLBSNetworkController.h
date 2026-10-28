@interface TencentLBSNetworkController : NSObject
{
    BOOL _useHttp; // +0x8
    BOOL _startBeacon; // +0x9
    BOOL _startIndoorPdr; // +0xa
    BOOL _writeLog; // +0xb
    BOOL _uploadLog; // +0xc
    BOOL _isUseSingleFix; // +0xd
    BOOL _load; // +0xe
    BOOL _request; // +0xf
    double _postTimeInterval; // +0x10
    double _applistDayInterval; // +0x18
    double _beaconTimeInterval; // +0x20
    double _bleToGpsAcc; // +0x28
    double _bleToGpsSpeed; // +0x30
    NSMutableArray * _rangedRegions; // +0x38
    double _singleSysLocTimeOut; // +0x40
    NSArray * _beaconUUIDs; // +0x48
    NSString * _path; // +0x50
    NSString * _file; // +0x58
    NSMutableDictionary * _controller; // +0x60
    double _lastBleT; // +0x68
}
+ (id)sharedInstance;
+ (id)encryptAes:(id)arg1;
+ (id)decryptAes:(id)arg1;
+ (id)aes_decrypt:(id)arg1;
+ (id)aes_encrypt:(id)arg1;
+ (id)encodeData:(id)arg1;
+ (id)decodeData:(id)arg1;
- (id)init;
- (void)loadCC;
- (BOOL)checkUUIDValid:(id)arg1;
- (void)requestCC;
- (id)getControllerDictionary;
- (void)updateCC:(id)arg1;
- (BOOL)isEnableBeaconLocRequest;
- (void)updateLastBleT;
- (double)postTimeInterval;
- (void)setPostTimeInterval:(double)arg1;
- (BOOL)useHttp;
- (void)setUseHttp:(BOOL)arg1;
- (double)applistDayInterval;
- (void)setApplistDayInterval:(double)arg1;
- (BOOL)startBeacon;
- (void)setStartBeacon:(BOOL)arg1;
- (BOOL)startIndoorPdr;
- (void)setStartIndoorPdr:(BOOL)arg1;
- (double)beaconTimeInterval;
- (void)setBeaconTimeInterval:(double)arg1;
- (double)bleToGpsAcc;
- (void)setBleToGpsAcc:(double)arg1;
- (double)bleToGpsSpeed;
- (void)setBleToGpsSpeed:(double)arg1;
- (BOOL)writeLog;
- (void)setWriteLog:(BOOL)arg1;
- (BOOL)uploadLog;
- (void)setUploadLog:(BOOL)arg1;
- (BOOL)isUseSingleFix;
- (void)setIsUseSingleFix:(BOOL)arg1;
- (id)rangedRegions;
- (void)setRangedRegions:(id)arg1;
- (double)singleSysLocTimeOut;
- (void)setSingleSysLocTimeOut:(double)arg1;
- (id)beaconUUIDs;
- (void)setBeaconUUIDs:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)file;
- (void)setFile:(id)arg1;
- (id)controller;
- (void)setController:(id)arg1;
- (BOOL)load;
- (void)setLoad:(BOOL)arg1;
- (BOOL)request;
- (void)setRequest:(BOOL)arg1;
- (double)lastBleT;
- (void)setLastBleT:(double)arg1;
- (void).cxx_destruct;
@end
