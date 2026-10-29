@interface TextStateContactDataFetcher : NSObject
{
    NSString * _username; // +0x8
    NSData * _context; // +0x10
    WCCgiBlockHelper * _cgiBlockHelper; // +0x18
    id /* block */ _completion; // +0x20
}
- (id)initWithUsername:(id)arg1;
- (BOOL)isEqualToFetcher:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)startFetchWithCompletion:(id /* block */)arg1;
- (void)privateRequest;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)cgiBlockHelper;
- (void)setCgiBlockHelper:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
