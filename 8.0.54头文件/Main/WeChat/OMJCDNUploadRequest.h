@interface OMJCDNUploadRequest : NSObject
{
    NSString * _taskKey; // +0x8
    unsigned long long _cdnScene; // +0x10
    NSString * _filePath; // +0x18
}
- (id)initWithTaskKey:(id)arg1 cdnScene:(unsigned long long)arg2 filePath:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)taskKey;
- (unsigned long long)cdnScene;
- (id)filePath;
- (void).cxx_destruct;
@end

