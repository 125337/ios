@interface OMJCDNDownloadRequest : NSObject
{
    NSString * _taskKey; // +0x8
    unsigned long long _cdnScene; // +0x10
    NSString * _cdnURL; // +0x18
    NSString * _resultFilePath; // +0x20
    unsigned long long _callbackToken; // +0x28
}
- (id)initWithTaskKey:(id)arg1 cdnScene:(unsigned long long)arg2 cdnURL:(id)arg3 resultFilePath:(id)arg4;
- (id)initWithTaskKey:(id)arg1 cdnScene:(unsigned long long)arg2 cdnURL:(id)arg3 resultFilePath:(id)arg4 callbackToken:(unsigned long long)arg5;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)taskKey;
- (unsigned long long)cdnScene;
- (id)cdnURL;
- (id)resultFilePath;
- (unsigned long long)callbackToken;
- (void).cxx_destruct;
@end
