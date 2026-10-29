@interface MMEventLoopManagerImpl : NSObject <MMEventLoopManager>
- (id)getUIEventLoop;
- (id)getBackGroundEventLoop;
- (id)getMakeSureUIEventLoop;
@end

