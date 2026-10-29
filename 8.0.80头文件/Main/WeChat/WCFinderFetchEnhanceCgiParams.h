@interface WCFinderFetchEnhanceCgiParams : NSObject
{
    unsigned long long _refCommentId; // +0x8
    WCFinderLocationInfo * _location; // +0x10
}
- (unsigned long long)refCommentId;
- (void)setRefCommentId:(unsigned long long)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (void).cxx_destruct;
@end
