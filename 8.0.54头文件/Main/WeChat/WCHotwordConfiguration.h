@interface WCHotwordConfiguration : NSObject
{
    long long _scene; // +0x8
    NSString * _hotword; // +0x10
}
+ (id)configurationWithFinderHotwordConfiguration:(id)arg1;
- (BOOL)isValid;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)hotword;
- (void)setHotword:(id)arg1;
- (void).cxx_destruct;
@end

