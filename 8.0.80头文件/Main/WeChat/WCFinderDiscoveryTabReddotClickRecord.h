@interface WCFinderDiscoveryTabReddotClickRecord : NSObject
{
    unsigned long long _clickTimestampMs; // +0x8
    DiscoveryTabReddotClickSequence_ClickItem * _clickItem; // +0x10
}
- (unsigned long long)clickTimestampMs;
- (void)setClickTimestampMs:(unsigned long long)arg1;
- (id)clickItem;
- (void)setClickItem:(id)arg1;
- (void).cxx_destruct;
@end
