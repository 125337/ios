@interface WADebugSkylineOptions : NSObject
{
    NSString * _appId; // +0x8
}
+ (id)getDebugSkylineOptionName:(long long)arg1;
- (id)initWithAppId:(id)arg1;
- (id)keyWithOption:(long long)arg1;
- (void)setWithOption:(long long)arg1 val:(BOOL)arg2;
- (BOOL)getWithOption:(long long)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (void).cxx_destruct;
@end

