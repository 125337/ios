@interface OMJWarmupParams : NSObject
{
    BOOL _overwriteExisting; // +0x8
    NSString * _instaMovieDirectory; // +0x10
    NSString * _camFunDirectory; // +0x18
}
- (id)initWithInstaMovieDirectory:(id)arg1;
- (id)initWithCamFunDirectory:(id)arg1;
- (id)initWithInstaMovieDirectory:(id)arg1 camFunDirectory:(id)arg2 overwriteExisting:(BOOL)arg3;
- (id)instaMovieDirectory;
- (id)camFunDirectory;
- (BOOL)overwriteExisting;
- (void).cxx_destruct;
@end
