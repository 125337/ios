@interface GCDWebServerResponse : NSObject <GCDWebServerBodyReader>
{
    NSString * _type; // +0x8
    unsigned long long _length; // +0x10
    long long _status; // +0x18
    unsigned long long _maxAge; // +0x20
    NSDate * _lastModified; // +0x28
    NSString * _eTag; // +0x30
    NSMutableDictionary * _headers; // +0x38
    BOOL _chunked; // +0x40
    BOOL _gzipped; // +0x41
    BOOL _opened; // +0x42
    NSMutableArray * _encoders; // +0x48
    id <GCDWebServerBodyReader> _reader; // +0x50
}
+ (id)responseWithStatusCode:(long long)arg1;
+ (id)responseWithRedirect:(id)arg1 permanent:(BOOL)arg2;
+ (id)response;
- (id)initWithStatusCode:(long long)arg1;
- (id)initWithRedirect:(id)arg1 permanent:(BOOL)arg2;
- (id)init;
- (void)setValue:(id)arg1 forAdditionalHeader:(id)arg2;
- (BOOL)hasBody;
- (BOOL)usesChunkedTransferEncoding;
- (BOOL)open:(id *)arg1;
- (id)readData:(id *)arg1;
- (void)close;
- (void)prepareForReading;
- (BOOL)performOpen:(id *)arg1;
- (void)performReadDataWithCompletion:(id /* block */)arg1;
- (void)performClose;
- (id)description;
- (id)contentType;
- (void)setContentType:(id)arg1;
- (unsigned long long)contentLength;
- (void)setContentLength:(unsigned long long)arg1;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg1;
- (unsigned long long)cacheControlMaxAge;
- (void)setCacheControlMaxAge:(unsigned long long)arg1;
- (id)lastModifiedDate;
- (void)setLastModifiedDate:(id)arg1;
- (id)eTag;
- (void)setETag:(id)arg1;
- (BOOL)isGZipContentEncodingEnabled;
- (void)setGzipContentEncodingEnabled:(BOOL)arg1;
- (id)additionalHeaders;
- (void).cxx_destruct;
@end

