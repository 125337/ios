@interface ServiceAuthTask : NSObject
{
    NSString * _taskId; // +0x8
    id <ServiceAuthTaskDelegate> _delegate; // +0x10
    ServiceAuthConfig * _config; // +0x18
}
+ (id)taskWithConfig:(id)arg1 delegate:(id)arg2;
- (id)init;
- (void)startTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
