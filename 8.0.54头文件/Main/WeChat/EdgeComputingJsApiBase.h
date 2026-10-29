@interface EdgeComputingJsApiBase : NSObject <IEdgeComputingJsApiProtocol>
- (BOOL)registerIntoContext:(id)arg1;
- (id)invoke:(id)arg1;
- (id)logic:(id)arg1;
- (id)functionName;
- (unsigned int)getType;
- (void)clear;
@end

