@interface InternalAppTerminateManager : NSObject
{
    list<liteav::LogUploaderInterface::InstanceInfo, std::allocator<liteav::LogUploaderInterface::InstanceInfo>> _instance_info_list; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (void)saveInstanceInfo:(unsigned int)arg1 roomId:(const void *)arg2 userId:(const void *)arg3 strRole:(const void *)arg4;
- (void)deleteInstanceInfo:(unsigned int)arg1 roomId:(const void *)arg2 userId:(const void *)arg3 strRole:(const void *)arg4;
- (void)onAppTerminate;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
