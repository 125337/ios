@interface EmoticonThumbUrlInfo : NSObject
{
    NSString * _url; // +0x8
    NSString * _aesKey; // +0x10
    NSString * _savePath; // +0x18
}
- (id)init;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)savePath;
- (void)setSavePath:(id)arg1;
- (void).cxx_destruct;
@end
