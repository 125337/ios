@interface WxpaySystemHttpEngine : NSObject
{
    NSURLSession * _session; // +0x8
}
+ (id)shared;
- (id)initWithProtocolClasses:(id)arg1;
- (id)executeRequest:(id)arg1 callback:(id /* block */)arg2;
- (void).cxx_destruct;
@end
