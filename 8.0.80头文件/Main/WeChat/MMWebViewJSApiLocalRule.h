@interface MMWebViewJSApiLocalRule : NSObject
{
    NSString * _jsapiName; // +0x8
    NSArray * _allowedUrlPrefixes; // +0x10
    NSArray * _allowedFilePatterns; // +0x18
}
- (id)jsapiName;
- (void)setJsapiName:(id)arg1;
- (id)allowedUrlPrefixes;
- (void)setAllowedUrlPrefixes:(id)arg1;
- (id)allowedFilePatterns;
- (void)setAllowedFilePatterns:(id)arg1;
- (void).cxx_destruct;
@end
