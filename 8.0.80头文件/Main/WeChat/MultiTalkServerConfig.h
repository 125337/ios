@interface MultiTalkServerConfig : NSObject
+ (BOOL)shouldBlockCaller;
+ (BOOL)shouldBlockReceiver;
+ (BOOL)shouldBlockMinimize;
@end
