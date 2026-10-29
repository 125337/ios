@interface MMWormholeFileTransiting : NSObject <MMWormholeTransiting>
{
    NSFileManager * _fileManager; // +0x8
    NSString * _applicationGroupIdentifier; // +0x10
    NSString * _directory; // +0x18
}
- (id)init;
- (id)initWithApplicationGroupIdentifier:(id)arg1 optionalDirectory:(id)arg2;
- (void)checkAppGroupCapabilities;
- (id)messagePassingDirectoryPath;
- (id)filePathForIdentifier:(id)arg1;
- (BOOL)writeMessageObject:(id)arg1 forIdentifier:(id)arg2;
- (id)messageObjectForIdentifier:(id)arg1;
- (void)deleteContentForIdentifier:(id)arg1;
- (id)fileManager;
- (void)setFileManager:(id)arg1;
- (id)applicationGroupIdentifier;
- (void)setApplicationGroupIdentifier:(id)arg1;
- (id)directory;
- (void)setDirectory:(id)arg1;
- (void).cxx_destruct;
@end

