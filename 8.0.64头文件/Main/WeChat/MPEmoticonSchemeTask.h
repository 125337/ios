@interface MPEmoticonSchemeTask : NSObject
{
    NSString * _md5; // +0x8
    id <WKURLSchemeTask> _task; // +0x10
}
- (id)initWithMD5:(id)arg1 urlSchemeTask:(id)arg2;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (void).cxx_destruct;
@end
