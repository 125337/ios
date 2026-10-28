@interface GCDWebServerDataResponse : GCDWebServerResponse
{
    NSData * _data; // +0x8
    BOOL _done; // +0x10
}
+ (id)responseWithText:(id)arg1;
+ (id)responseWithHTML:(id)arg1;
+ (id)responseWithHTMLTemplate:(id)arg1 variables:(id)arg2;
+ (id)responseWithJSONObject:(id)arg1;
+ (id)responseWithJSONObject:(id)arg1 contentType:(id)arg2;
+ (id)responseWithData:(id)arg1 contentType:(id)arg2;
- (id)initWithText:(id)arg1;
- (id)initWithHTML:(id)arg1;
- (id)initWithHTMLTemplate:(id)arg1 variables:(id)arg2;
- (id)initWithJSONObject:(id)arg1;
- (id)initWithJSONObject:(id)arg1 contentType:(id)arg2;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)readData:(id *)arg1;
- (id)description;
- (void).cxx_destruct;
@end
