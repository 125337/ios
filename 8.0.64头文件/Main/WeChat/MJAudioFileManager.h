@interface MJAudioFileManager : NSObject
{
    NSString * _basePath; // +0x8
}
+ (BOOL)createWAVFileFromPCMData:(id)arg1 sampleRate:(long long)arg2 outputPath:(id)arg3;
+ (id)readPCMDataFromWAVFileAtPath:(id)arg1;
+ (id)readAudioDataFromWAVFileAtPath:(id)arg1;
- (id)initWithBasePath:(id)arg1;
- (id)dirctoryPathForAudioFileWithIdentifier:(id)arg1;
- (id)pcmFilePathForAudioFileWithIdentifier:(id)arg1;
- (id)wavFilePathForAudioFileWithIdentifier:(id)arg1;
- (id)silkFilePathForAudioFileWithIdentifier:(id)arg1;
- (id)speechFilePathForAudioFileWithIdentifier:(id)arg1 roleID:(id)arg2;
- (id)speechFilePathForAudioFileWithIdentifier:(id)arg1 roleID:(id)arg2 textHash:(unsigned long long)arg3;
- (id)speechFilePathForText:(id)arg1 roleID:(id)arg2;
- (id)pcmDataForAudioFileWithIdentifier:(id)arg1;
- (id)silkDataForAudioFileWithIdentifier:(id)arg1;
- (BOOL)createWAVFileFromPCMData:(id)arg1 forIdentifier:(id)arg2 roleID:(id)arg3 sampleRate:(long long)arg4;
- (BOOL)createWAVFileFromPCMData:(id)arg1 forText:(id)arg2 roleID:(id)arg3 sampleRate:(long long)arg4;
- (BOOL)createWAVFileFromPCMData:(id)arg1 forIdentifier:(id)arg2 roleID:(id)arg3 textHash:(unsigned long long)arg4 sampleRate:(long long)arg5;
- (id)basePath;
- (void).cxx_destruct;
@end
