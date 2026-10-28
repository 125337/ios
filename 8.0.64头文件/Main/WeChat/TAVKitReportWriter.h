@interface TAVKitReportWriter : NSObject
{
    NSString * _encryptKey; // +0x8
    NSObject<OS_dispatch_queue> * _queue; // +0x10
    NSString * _directory; // +0x18
}
+ (id)instance;
- (id)init;
- (id)stroageDirectory;
- (void)setStrorageDirectory:(id)arg1;
- (id)stroagePath;
- (void)writeReport:(id)arg1 callback:(id /* block */)arg2;
- (void)createDirectoryIfNeeded;
- (id)encryptKey;
- (void)setEncryptKey:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)directory;
- (void)setDirectory:(id)arg1;
- (void).cxx_destruct;
@end
