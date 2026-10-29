@interface MJMovieComposingVideoSavedInfo : NSObject
{
    NSString * _filePath; // +0x8
    long long _composingStepIndex; // +0x10
    NSString * _checksum; // +0x18
}
- (id)initWithVideoFilePath:(id)arg1 composingStepIndex:(long long)arg2 checksum:(id)arg3;
- (id)filePath;
- (long long)composingStepIndex;
- (id)checksum;
- (void).cxx_destruct;
@end
