@interface GameWebVideoIncompleteResponseHeader : NSObject
{
    NSMutableDictionary * _imcompleteResponseHeader; // +0x8
    unsigned long long _contentTotalLength; // +0x10
    NSString * _contentType; // +0x18
    NSString * _acceptRanges; // +0x20
}
+ (id)getValueFromResponseHeader:(id)arg1 byInsensitiveKey:(id)arg2;
- (id)initWithResponse:(id)arg1;
- (id)initWithVideoCacheInfo:(id)arg1;
- (id)incompleteResponseHeaderFields;
- (BOOL)isValid;
- (unsigned long long)contentTotalLength;
- (void)setContentTotalLength:(unsigned long long)arg1;
- (id)contentType;
- (void)setContentType:(id)arg1;
- (id)acceptRanges;
- (void)setAcceptRanges:(id)arg1;
- (void).cxx_destruct;
@end
