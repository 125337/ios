@interface NSNotificationCenter (UniqueNotif)
+ (void)initialize;
- (id)mmObserverDict;
- (id)mmTokenListByObserver:(id)arg1;
- (void)mmRemoveTokenListByObserver:(id)arg1;
- (void)addUniqueObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
@end

