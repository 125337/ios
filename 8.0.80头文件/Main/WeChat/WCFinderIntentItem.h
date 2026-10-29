@interface WCFinderIntentItem : NSObject
{
    NSMutableDictionary * _map; // +0x8
    NSString * _currIntentHash; // +0x10
    NSString * _prevIntentHash; // +0x18
}
- (id)init;
- (id)info;
- (id)map;
- (void)setMap:(id)arg1;
- (id)currIntentHash;
- (void)setCurrIntentHash:(id)arg1;
- (id)prevIntentHash;
- (void)setPrevIntentHash:(id)arg1;
- (void).cxx_destruct;
@end
