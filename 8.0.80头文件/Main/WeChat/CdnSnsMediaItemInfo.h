@interface CdnSnsMediaItemInfo : NSObject
{
    BOOL _finishFlag; // +0x8
    NSString * _fileKey; // +0x10
    NSString * _nsUrl; // +0x18
    unsigned long long _decryptKey; // +0x20
    WCMediaItem * _mediaItem; // +0x28
}
- (id)fileKey;
- (void)setFileKey:(id)arg1;
- (id)nsUrl;
- (void)setNsUrl:(id)arg1;
- (unsigned long long)decryptKey;
- (void)setDecryptKey:(unsigned long long)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (BOOL)finishFlag;
- (void)setFinishFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
