@interface MMLiveResourceFetcherDownloadDeduplicationEntry : NSObject
{
    NSString * _uri; // +0x8
    NSString * _destination; // +0x10
    NSMutableArray * _invocations; // +0x18
}
- (id)uri;
- (void)setUri:(id)arg1;
- (id)destination;
- (void)setDestination:(id)arg1;
- (id)invocations;
- (void)setInvocations:(id)arg1;
- (void).cxx_destruct;
@end

