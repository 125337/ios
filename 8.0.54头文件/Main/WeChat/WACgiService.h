@interface WACgiService : NSObject
+ (Class)externalIMP;
+ (void)setExternalIMP:(Class)arg1;
+ (unsigned int)sendCgi:(id)arg1 completion:(id /* block */)arg2;
+ (unsigned int)sendCgiDirectlyWithoutServiceRoute:(id)arg1 completion:(id /* block */)arg2;
+ (BOOL)checkShouldRouteToServiceWhenWeakNet:(id)arg1;
+ (unsigned int)sendCgiToService:(id)arg1 completion:(id /* block */)arg2;
+ (unsigned int)genServiceRouteCgiSerialNum;
+ (void)cancelCgiRequest:(unsigned int)arg1;
+ (void)invalidateAllRequest;
@end

