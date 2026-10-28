@interface TXCDarwinNotificationCenter : NSObject
{
    NSMutableDictionary * _observerDic; // +0x8
    NSString * _mainBundleID; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)handleNotification:(id)arg1;
- (void)addObserverWithName:(id)arg1 callback:(id /* block */)arg2;
- (void)addObserverWithName:(id)arg1 callback:(id /* block */)arg2 timeout:(double)arg3;
- (void)removeObserverWithName:(id)arg1;
- (void)postNotificationName:(id)arg1;
- (void)registerForNotificationsWithName:(id)arg1;
- (void)unregisterForNotificationsWithName:(id)arg1;
- (id)observerDic;
- (void)setObserverDic:(id)arg1;
- (id)mainBundleID;
- (void)setMainBundleID:(id)arg1;
- (void).cxx_destruct;
@end
