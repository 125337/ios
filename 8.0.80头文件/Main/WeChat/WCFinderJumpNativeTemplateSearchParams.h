@interface WCFinderJumpNativeTemplateSearchParams : NSObject
{
    NSString * _query; // +0x8
    unsigned long long _scene; // +0x10
    unsigned long long _bizType; // +0x18
    NSString * _params; // +0x20
}
- (void)setParams:(id)arg1;
- (id)customDict;
- (id)query;
- (void)setQuery:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)bizType;
- (void)setBizType:(unsigned long long)arg1;
- (id)params;
- (void).cxx_destruct;
@end
