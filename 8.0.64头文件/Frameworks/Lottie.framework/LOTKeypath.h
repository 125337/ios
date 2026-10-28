@interface LOTKeypath : NSObject
{
    long long _currentDepth; // +0x8
    NSMutableArray * _fuzzyDepthStack; // +0x10
    NSMutableArray * _currentStack; // +0x18
    NSArray * _keys; // +0x20
    NSMutableDictionary * _searchResults; // +0x28
    NSString * _absoluteKeypath; // +0x30
}
+ (id)keypathWithString:(id)arg1;
+ (id)keypathWithKeys:(id)arg1;
- (id)initWithKeys:(id)arg1;
- (BOOL)pushKey:(id)arg1;
- (void)popKey;
- (void)popToRootKey;
- (id)currentKey;
- (id)currentKeyPath;
- (BOOL)hasWildcard;
- (BOOL)hasFuzzyWildcard;
- (BOOL)endOfKeypath;
- (void)addSearchResultForCurrentPath:(id)arg1;
- (id)searchResults;
- (id)absoluteKeypath;
- (void).cxx_destruct;
@end
