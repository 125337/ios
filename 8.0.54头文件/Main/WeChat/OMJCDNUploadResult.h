@interface OMJCDNUploadResult : NSObject
{
    NSString * _taskKey; // +0x8
    NSString * _cdnURL; // +0x10
}
- (id)initWithTaskKey:(id)arg1 cdnURL:(id)arg2;
- (id)taskKey;
- (id)cdnURL;
- (void).cxx_destruct;
@end

