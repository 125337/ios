@interface OMJCDNUploadRequest : NSObject
{
    NSString * _taskKey; // +0x8
    unsigned long long _cdnScene; // +0x10
    NSString * _filePath; // +0x18
    unsigned long long _callbackToken; // +0x20
}
- (id)initWithTaskKey:(id)arg1 cdnScene:(unsigned long long)arg2 filePath:(id)arg3;
- (id)initWithTaskKey:(id)arg1 cdnScene:(unsigned long long)arg2 filePath:(id)arg3 callbackToken:(unsigned long long)arg4;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)taskKey;
- (unsigned long long)cdnScene;
- (id)filePath;
- (unsigned long long)callbackToken;
- (void).cxx_destruct;
@end
