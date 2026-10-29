@interface AudioHelperPlaySoundParams : NSObject
{
    BOOL _ambient; // +0x8
    BOOL _alwaysCallCompletion; // +0x9
    BOOL _playWhenUIApplicationStateNonActive; // +0xa
    float _volume; // +0xc
    NSString * _fileName; // +0x10
    NSString * _fileType; // +0x18
    NSString * _filePath; // +0x20
    id /* block */ _completion; // +0x28
}
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)fileType;
- (void)setFileType:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (float)volume;
- (void)setVolume:(float)arg1;
- (BOOL)ambient;
- (void)setAmbient:(BOOL)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (BOOL)alwaysCallCompletion;
- (void)setAlwaysCallCompletion:(BOOL)arg1;
- (BOOL)playWhenUIApplicationStateNonActive;
- (void)setPlayWhenUIApplicationStateNonActive:(BOOL)arg1;
- (void).cxx_destruct;
@end
