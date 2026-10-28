@interface AmoebaEventCallbackRouter : NSObject <AmoebaDataRouterProtocol>
- (BOOL)onDataReport:(id)arg1 time:(unsigned long long)arg2 params:(id)arg3 routeRule:(id)arg4;
- (unsigned long long)routeType;
@end
