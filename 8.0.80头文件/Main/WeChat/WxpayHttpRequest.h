@interface WxpayHttpRequest : NSObject <NSCopying>
{
    BOOL _followRedirects; // +0x8
    NSString * _requestId; // +0x10
    NSString * _url; // +0x18
    NSString * _method; // +0x20
    NSArray * _headers; // +0x28
    NSData * _body; // +0x30
    long long _dnsMode; // +0x38
    long long _tlsPolicy; // +0x40
    long long _maxResponseBytes; // +0x48
    long long _connectTimeoutMillis; // +0x50
    long long _readTimeoutMillis; // +0x58
    long long _kind; // +0x60
}
+ (id)requestWithId:(id)arg1 url:(id)arg2;
- (id)initWithRequestId:(id)arg1 url:(id)arg2 method:(id)arg3 headers:(id)arg4 body:(id)arg5 followRedirects:(BOOL)arg6 dnsMode:(long long)arg7 tlsPolicy:(long long)arg8 maxResponseBytes:(long long)arg9 connectTimeoutMillis:(long long)arg10 readTimeoutMillis:(long long)arg11 kind:(long long)arg12;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)requestId;
- (id)url;
- (id)method;
- (id)headers;
- (id)body;
- (BOOL)followRedirects;
- (long long)dnsMode;
- (long long)tlsPolicy;
- (long long)maxResponseBytes;
- (long long)connectTimeoutMillis;
- (long long)readTimeoutMillis;
- (long long)kind;
- (void).cxx_destruct;
@end
