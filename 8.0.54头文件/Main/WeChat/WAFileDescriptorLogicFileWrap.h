@interface WAFileDescriptorLogicFileWrap : MMObject
{
    BOOL _isTmpOrStoreFile; // +0x8
    int _flag; // +0xc
    CBaseFile * _baseFile; // +0x10
    NSString * _appId; // +0x18
}
- (id)initWithBaseFile:(id)arg1 appId:(id)arg2;
- (id)baseFile;
- (void)setBaseFile:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (BOOL)isTmpOrStoreFile;
- (void)setIsTmpOrStoreFile:(BOOL)arg1;
- (int)flag;
- (void)setFlag:(int)arg1;
- (void).cxx_destruct;
@end

