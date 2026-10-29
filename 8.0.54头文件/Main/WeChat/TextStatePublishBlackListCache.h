@interface TextStatePublishBlackListCache : NSObject
+ (void)setItem:(id)arg1 forType:(long long)arg2;
+ (void)removeItemForType:(long long)arg1 textStateId:(id)arg2;
+ (id)getItemForType:(long long)arg1 textStateId:(id)arg2;
+ (id)keyForType:(long long)arg1 textStateId:(id)arg2;
@end

