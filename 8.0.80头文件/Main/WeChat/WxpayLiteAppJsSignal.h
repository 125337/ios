@interface WxpayLiteAppJsSignal : NSObject
{
    BOOL _allPages; // +0x8
    NSString * _event; // +0x10
    NSDictionary * _detail; // +0x18
}
+ (id)signalForContainerEvent:(id)arg1;
+ (id)screenshot;
+ (id)edgeSwipe;
- (id)initWithEvent:(id)arg1 allPages:(BOOL)arg2 detail:(id)arg3;
- (id)detailFor:(id)arg1;
- (id)event;
- (BOOL)allPages;
- (id)detail;
- (void).cxx_destruct;
@end
