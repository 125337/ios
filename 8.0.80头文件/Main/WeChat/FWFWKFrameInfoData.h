@interface FWFWKFrameInfoData : NSObject
{
    BOOL _isMainFrame; // +0x8
    FWFNSUrlRequestData * _request; // +0x10
}
+ (id)makeWithIsMainFrame:(BOOL)arg1 request:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (BOOL)isMainFrame;
- (void)setIsMainFrame:(BOOL)arg1;
- (id)request;
- (void)setRequest:(id)arg1;
- (void).cxx_destruct;
@end
