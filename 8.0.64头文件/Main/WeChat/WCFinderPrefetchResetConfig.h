@interface WCFinderPrefetchResetConfig : NSObject
{
    unsigned long long _resetId; // +0x8
    unsigned long long _scene; // +0x10
    double _initProb; // +0x18
}
- (unsigned long long)resetId;
- (void)setResetId:(unsigned long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (double)initProb;
- (void)setInitProb:(double)arg1;
@end
