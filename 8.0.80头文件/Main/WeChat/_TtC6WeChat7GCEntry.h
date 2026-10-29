@interface _TtC6WeChat7GCEntry : NSObject
{
    void * urlStr; // +0x8
    void * MIMEType; // +0x18
    long long expectedContentLength; // +0x28
    long long statusCode; // +0x30
    void * textEncodingName; // +0x38
    void * dataStr; // +0x48
    void * headerFileds; // +0x58
}
- (id)init;
- (id)urlStr;
- (void)setUrlStr:(id)arg1;
- (id)MIMEType;
- (void)setMIMEType:(id)arg1;
- (long long)expectedContentLength;
- (void)setExpectedContentLength:(long long)arg1;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg1;
- (id)textEncodingName;
- (void)setTextEncodingName:(id)arg1;
- (id)dataStr;
- (void)setDataStr:(id)arg1;
- (id)headerFileds;
- (void)setHeaderFileds:(id)arg1;
- (void).cxx_destruct;
@end
