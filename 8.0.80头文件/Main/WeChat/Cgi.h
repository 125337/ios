@interface Cgi : NSObject
+ (id)send:(int)arg1 request:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
+ (id)send:(int)arg1 requestData:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
@end
