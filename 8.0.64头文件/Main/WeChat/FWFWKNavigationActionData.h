@interface FWFWKNavigationActionData : NSObject
{
    FWFNSUrlRequestData * _request; // +0x8
    FWFWKFrameInfoData * _targetFrame; // +0x10
    unsigned long long _navigationType; // +0x18
}
+ (id)makeWithRequest:(id)arg1 targetFrame:(id)arg2 navigationType:(unsigned long long)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)request;
- (void)setRequest:(id)arg1;
- (id)targetFrame;
- (void)setTargetFrame:(id)arg1;
- (unsigned long long)navigationType;
- (void)setNavigationType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
