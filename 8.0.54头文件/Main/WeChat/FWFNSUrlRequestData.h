@interface FWFNSUrlRequestData : NSObject
{
    NSString * _url; // +0x8
    NSString * _httpMethod; // +0x10
    FlutterStandardTypedData * _httpBody; // +0x18
    NSDictionary * _allHttpHeaderFields; // +0x20
}
+ (id)makeWithUrl:(id)arg1 httpMethod:(id)arg2 httpBody:(id)arg3 allHttpHeaderFields:(id)arg4;
+ (id)fromMap:(id)arg1;
- (id)toMap;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)httpMethod;
- (void)setHttpMethod:(id)arg1;
- (id)httpBody;
- (void)setHttpBody:(id)arg1;
- (id)allHttpHeaderFields;
- (void)setAllHttpHeaderFields:(id)arg1;
- (void).cxx_destruct;
@end

