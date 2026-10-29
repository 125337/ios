@interface FBSDKAudioResourceLoader : NSObject
{
    NSFileManager * _fileManager; // +0x8
    NSURL * _fileURL; // +0x10
    unsigned int _systemSoundID; // +0x18
}
+ (id)name;
+ (unsigned long long)version;
+ (id)data;
+ (id)sharedLoader;
- (id)init;
- (void)dealloc;
- (BOOL)loadSound:(id *)arg1;
- (void)playSound;
- (id)_fileURL:(id *)arg1;
- (void).cxx_destruct;
@end
