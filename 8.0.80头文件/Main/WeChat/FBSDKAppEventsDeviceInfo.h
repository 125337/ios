@interface FBSDKAppEventsDeviceInfo : NSObject
{
    NSString * _carrierName; // +0x8
    NSString * _timeZoneAbbrev; // +0x10
    unsigned long long _remainingDiskSpaceGB; // +0x18
    NSString * _timeZoneName; // +0x20
    NSString * _bundleIdentifier; // +0x28
    NSString * _longVersion; // +0x30
    NSString * _shortVersion; // +0x38
    NSString * _sysVersion; // +0x40
    NSString * _machine; // +0x48
    NSString * _language; // +0x50
    unsigned long long _totalDiskSpaceGB; // +0x58
    unsigned long long _coreCount; // +0x60
    double _width; // +0x68
    double _height; // +0x70
    double _density; // +0x78
    long long _lastGroup1CheckTime; // +0x80
    BOOL _isEncodingDirty; // +0x88
    NSString * _encodedDeviceInfo; // +0x90
}
+ (void)extendDictionaryWithDeviceInfo:(id)arg1;
+ (void)initialize;
+ (id)sharedDeviceInfo;
+ (id)_getTotalDiskSpace;
+ (id)_getRemainingDiskSpace;
+ (unsigned int)_coreCount;
+ (unsigned int)_readSysCtlUInt:(int)arg1 type:(int)arg2;
+ (id)_getCarrier;
- (id)init;
- (id)encodedDeviceInfo;
- (void)setEncodedDeviceInfo:(id)arg1;
- (void)_collectPersistentData;
- (BOOL)_isGroup1Expired;
- (void)_collectGroup1Data;
- (id)_generateEncoding;
- (void).cxx_destruct;
@end
