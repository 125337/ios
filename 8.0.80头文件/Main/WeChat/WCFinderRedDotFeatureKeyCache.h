@interface WCFinderRedDotFeatureKeyCache : NSObject
{
    NSArray * _intervals; // +0x8
    NSArray * _periodIntervals; // +0x10
    NSArray * _intervalIndexOffsets; // +0x18
    NSArray * _actionCountKeys; // +0x20
    NSArray * _businessTotalKeys; // +0x28
    NSDictionary * _snsKeys; // +0x30
    NSDictionary * _finderKeys; // +0x38
    NSDictionary * _liveKeys; // +0x40
    NSDictionary * _tingKeys; // +0x48
    NSDictionary * _browseKeys; // +0x50
    NSDictionary * _searchKeys; // +0x58
    NSDictionary * _gameCenterKeys; // +0x60
    NSDictionary * _nearbyKeys; // +0x68
    NSDictionary * _businessKeysByBusinessType; // +0x70
}
- (id)init;
- (void)generateAllKeys;
- (id)generateBusinessKeysForPrefix:(id)arg1 reddotPrefix:(id)arg2 isSns:(BOOL)arg3;
- (id)intervals;
- (id)periodIntervals;
- (id)intervalIndexOffsets;
- (id)actionCountKeys;
- (id)businessTotalKeys;
- (id)snsKeys;
- (id)finderKeys;
- (id)liveKeys;
- (id)tingKeys;
- (id)browseKeys;
- (id)searchKeys;
- (id)gameCenterKeys;
- (id)nearbyKeys;
- (id)businessKeysByBusinessType;
- (void).cxx_destruct;
@end
