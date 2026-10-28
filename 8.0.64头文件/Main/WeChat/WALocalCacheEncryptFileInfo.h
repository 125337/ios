@interface WALocalCacheEncryptFileInfo : NSObject
{
    NSString * _rawInjectFilePath; // +0x8
    NSString * _fullFileUrl; // +0x10
    NSURL * _sourceUrl; // +0x18
}
- (id)rawInjectFilePath;
- (void)setRawInjectFilePath:(id)arg1;
- (id)fullFileUrl;
- (void)setFullFileUrl:(id)arg1;
- (id)sourceUrl;
- (void)setSourceUrl:(id)arg1;
- (void).cxx_destruct;
@end
