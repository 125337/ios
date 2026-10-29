@interface _FavListOpenedSessionTrackerFlag : NSObject
{
    BOOL _isEnded; // +0x8
    BOOL _hasDisappearedOnce; // +0x9
    NSString * _vcClassName; // +0x10
    long long _autoEnd; // +0x18
}
- (void)dealloc;
- (id)vcClassName;
- (void)setVcClassName:(id)arg1;
- (long long)autoEnd;
- (void)setAutoEnd:(long long)arg1;
- (BOOL)isEnded;
- (void)setIsEnded:(BOOL)arg1;
- (BOOL)hasDisappearedOnce;
- (void)setHasDisappearedOnce:(BOOL)arg1;
- (void).cxx_destruct;
@end
