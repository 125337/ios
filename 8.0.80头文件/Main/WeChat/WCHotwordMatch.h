@interface WCHotwordMatch : NSObject
{
    long long _scene; // +0x8
    NSString * _hotword; // +0x10
}
+ (id)hotwordMatchFromURLString:(id)arg1;
- (id)initWithScene:(long long)arg1 hotword:(id)arg2;
- (BOOL)isValid;
- (id)generateURLString;
- (long long)scene;
- (id)hotword;
- (void).cxx_destruct;
@end
