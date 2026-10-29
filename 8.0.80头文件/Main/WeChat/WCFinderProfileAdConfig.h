@interface WCFinderProfileAdConfig : NSObject
{
    unsigned long long _requestOffset; // +0x8
    unsigned long long _displayOffset; // +0x10
}
- (unsigned long long)requestOffset;
- (void)setRequestOffset:(unsigned long long)arg1;
- (unsigned long long)displayOffset;
- (void)setDisplayOffset:(unsigned long long)arg1;
@end
