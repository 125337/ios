@interface ImageUploadProcessor : NSObject
{
    NSString * _taskID; // +0x8
    CMessageWrap * _msgWrap; // +0x10
    ImageUploadTaskController * _context; // +0x18
}
- (id)initWithMsgWrap:(id)arg1 context:(id)arg2;
- (void)start;
- (void)stop;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end
