@interface EmoticonThumbImageCdnTask : NSObject
{
    int _concurrentCount; // +0x8
    NSString * _md5; // +0x10
    NSString * _url; // +0x18
    NSString * _aesKey; // +0x20
    NSString * _savePath; // +0x28
    id /* block */ _callback; // +0x30
}
- (id)identifier;
- (BOOL)isValid;
- (void)endWithFail;
- (void)endWithOK:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)savePath;
- (void)setSavePath:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (int)concurrentCount;
- (void)setConcurrentCount:(int)arg1;
- (void).cxx_destruct;
@end
