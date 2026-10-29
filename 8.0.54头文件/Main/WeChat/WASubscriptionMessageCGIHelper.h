@interface WASubscriptionMessageCGIHelper : NSObject
+ (void)sendRequestListByIDCGIWith:(id)arg1 success:(id /* block */)arg2 fail:(id /* block */)arg3;
+ (void)sendRequestSubscribeCGIWith:(id)arg1 success:(id /* block */)arg2 fail:(id /* block */)arg3;
+ (id)errorWithRet:(int)arg1 response:(id)arg2;
+ (id)errorWithRet:(int)arg1 uiMessage:(unsigned int)arg2 response:(id)arg3;
+ (id)commonErrorCheckWithResponse:(id)arg1;
+ (id)generateItemListWith:(id)arg1;
+ (id)subscribeStatusWith:(id)arg1;
@end

