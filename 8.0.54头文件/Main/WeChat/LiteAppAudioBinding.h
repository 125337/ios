@interface LiteAppAudioBinding : NSObject <wxAudioFileLoaderDelegate>
{
    WXAudioNative * _wxaudionative; // +0x8
    NSString * _pkgPath; // +0x10
    NSString * _appId; // +0x18
    unsigned int _appUuid; // +0x20
}
- (id)initWithJsContext:(unsigned long long)arg1 appId:(id)arg2 appUuid:(unsigned int)arg3;
- (void)initAudioContext:(unsigned long long)arg1;
- (id)getAudioFilePath:(id)arg1;
- (void)releaseAudioNative;
- (void).cxx_destruct;
@end

