@interface GCDWebServerRequest : NSObject <GCDWebServerBodyWriter>
{
    NSString * _method; // +0x8
    NSURL * _url; // +0x10
    NSDictionary * _headers; // +0x18
    NSString * _path; // +0x20
    NSDictionary * _query; // +0x28
    NSString * _type; // +0x30
    BOOL _chunked; // +0x38
    unsigned long long _length; // +0x40
    NSDate * _modifiedSince; // +0x48
    NSString * _noneMatch; // +0x50
    _NSRange _range; // +0x58
    BOOL _gzipAccepted; // +0x68
    NSData * _localAddress; // +0x70
    NSData * _remoteAddress; // +0x78
    BOOL _opened; // +0x80
    NSMutableArray * _decoders; // +0x88
    NSMutableDictionary * _attributes; // +0x90
    id <GCDWebServerBodyWriter> _writer; // +0x98
}
- (id)initWithMethod:(id)arg1 url:(id)arg2 headers:(id)arg3 path:(id)arg4 query:(id)arg5;
- (BOOL)hasBody;
- (BOOL)hasByteRange;
- (id)attributeForKey:(id)arg1;
- (BOOL)open:(id *)arg1;
- (BOOL)writeData:(id)arg1 error:(id *)arg2;
- (BOOL)close:(id *)arg1;
- (void)prepareForWriting;
- (BOOL)performOpen:(id *)arg1;
- (BOOL)performWriteData:(id)arg1 error:(id *)arg2;
- (BOOL)performClose:(id *)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (id)localAddressString;
- (id)remoteAddressString;
- (id)description;
- (id)method;
- (id)URL;
- (id)headers;
- (id)path;
- (id)query;
- (id)contentType;
- (unsigned long long)contentLength;
- (id)ifModifiedSince;
- (id)ifNoneMatch;
- (_NSRange)byteRange;
- (BOOL)acceptsGzipContentEncoding;
- (BOOL)usesChunkedTransferEncoding;
- (id)localAddressData;
- (void)setLocalAddressData:(id)arg1;
- (id)remoteAddressData;
- (void)setRemoteAddressData:(id)arg1;
- (void).cxx_destruct;
@end

