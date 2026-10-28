@interface QBWupBrowserInfo : NSObject <NSCoding>
{
    NSString * _QUA2; // +0x8
    NSString * _QGUID; // +0x10
    NSString * _QUA; // +0x18
    char * _hexGuid; // +0x20
    char * _guid; // +0x28
    NSString * _UUID; // +0x30
    NSString * _qAuth; // +0x38
    NSString * _userAgent; // +0x40
    long long _timestamp; // +0x48
    NSString * _contentMd5; // +0x50
    NSData * _innerGuidData; // +0x58
    NSObject<OS_dispatch_queue> * _serialQueue; // +0x60
}
+ (id)filePath;
+ (id)sharedBrowserInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (char *)guid;
- (void)setGuid:(char *)arg1;
- (char *)hexGuid;
- (id)hexGuidString;
- (id)guidData;
- (BOOL)isGuidValid;
- (void)saveToFile;
- (void)dealloc;
- (id)QGUID;
- (id)QUA2;
- (void)setQUA2:(id)arg1;
- (id)QUA;
- (void)setQUA:(id)arg1;
- (id)qAuth;
- (id)userAgent;
- (void)resetGuid;
- (id)serverUrl;
- (void)invalidateServerUrl:(id)arg1;
- (void).cxx_destruct;
- (id)UUID;
- (void)setUUID:(id)arg1;
- (void)setQAuth:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (long long)timestamp;
- (void)setTimestamp:(long long)arg1;
- (id)contentMd5;
- (void)setContentMd5:(id)arg1;
- (id)innerGuidData;
- (void)setInnerGuidData:(id)arg1;
- (id)serialQueue;
- (void)setSerialQueue:(id)arg1;
@end
