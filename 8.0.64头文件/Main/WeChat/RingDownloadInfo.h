@interface RingDownloadInfo : NSObject
{
    NSString * _clientMediaID; // +0x8
    NSString * _mediaUrl; // +0x10
    NSString * _savePath; // +0x18
    NSString * _decodeKey; // +0x20
}
- (id)clientMediaID;
- (void)setClientMediaID:(id)arg1;
- (id)mediaUrl;
- (void)setMediaUrl:(id)arg1;
- (id)savePath;
- (void)setSavePath:(id)arg1;
- (id)decodeKey;
- (void)setDecodeKey:(id)arg1;
- (void).cxx_destruct;
@end
