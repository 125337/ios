@interface MMOpenGLContext : NSObject
{
    EAGLContext * _context; // +0x8
    NSObject<OS_dispatch_queue> * _contextQueue; // +0x10
    NSString * _queueName; // +0x18
}
- (id)init;
- (id)initWithQueueName:(id)arg1;
- (id)createGLContext;
- (id)context;
- (void)runSyncOnOpenGLESProcessQueue:(id /* block */)arg1;
- (void)runAsyncOnOpenGLESProcessQueue:(id /* block */)arg1;
- (void)runSyncOnOpenGLESProcessQueueTrue:(id /* block */)arg1;
- (id)contextQueue;
- (void)setContextQueue:(id)arg1;
- (id)queueName;
- (void)setQueueName:(id)arg1;
- (void).cxx_destruct;
@end
