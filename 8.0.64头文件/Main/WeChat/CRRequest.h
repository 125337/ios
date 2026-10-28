@interface CRRequest : NSObject
{
    NSString * _method; // +0x8
    NSURL * _URL; // +0x10
    NSDictionary * _headers; // +0x18
    NSData * _body; // +0x20
}
+ (id)requestWithBuilder:(id)arg1;
+ (id)requestWithBuilderBlock:(id /* block */)arg1;
- (id)initWithBuilder:(id)arg1;
- (id)method;
- (void)setMethod:(id)arg1;
- (id)URL;
- (void)setURL:(id)arg1;
- (id)headers;
- (void)setHeaders:(id)arg1;
- (id)body;
- (void)setBody:(id)arg1;
- (void).cxx_destruct;
@end
