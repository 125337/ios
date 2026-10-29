@interface GCDWebServerErrorResponse : GCDWebServerDataResponse
+ (id)responseWithClientError:(long long)arg1 message:(id)arg2;
+ (id)responseWithServerError:(long long)arg1 message:(id)arg2;
+ (id)responseWithClientError:(long long)arg1 underlyingError:(id)arg2 message:(id)arg3;
+ (id)responseWithServerError:(long long)arg1 underlyingError:(id)arg2 message:(id)arg3;
- (id)initWithStatusCode:(long long)arg1 underlyingError:(id)arg2 messageFormat:(id)arg3 arguments:(char *)arg4;
- (id)initWithClientError:(long long)arg1 message:(id)arg2;
- (id)initWithServerError:(long long)arg1 message:(id)arg2;
- (id)initWithClientError:(long long)arg1 underlyingError:(id)arg2 message:(id)arg3;
- (id)initWithServerError:(long long)arg1 underlyingError:(id)arg2 message:(id)arg3;
@end
