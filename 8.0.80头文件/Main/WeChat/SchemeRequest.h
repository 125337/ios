@interface SchemeRequest : NSObject
{
    NSString * _requestId; // +0x8
    NSString * _url; // +0x10
}
+ (id)makeWithRequestId:(id)arg1 url:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end
