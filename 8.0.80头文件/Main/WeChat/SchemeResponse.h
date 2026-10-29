@interface SchemeResponse : NSObject
{
    NSString * _requestId; // +0x8
    long long _statusCode; // +0x10
    NSString * _reasonPhrase; // +0x18
    FlutterStandardTypedData * _data; // +0x20
    NSString * _mimeType; // +0x28
}
+ (id)makeWithRequestId:(id)arg1 statusCode:(long long)arg2 reasonPhrase:(id)arg3 data:(id)arg4 mimeType:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg1;
- (id)reasonPhrase;
- (void)setReasonPhrase:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)mimeType;
- (void)setMimeType:(id)arg1;
- (void).cxx_destruct;
@end
