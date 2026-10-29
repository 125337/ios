@interface WxpayGlobalConfigInfo : NSObject
{
    NSDictionary * _useKitGray; // +0x8
    NSString * _packageBatchOwner; // +0x10
}
+ (id)infoWithUseKitGray:(id)arg1 packageBatchOwner:(id)arg2;
- (id)initWithUseKitGray:(id)arg1 packageBatchOwner:(id)arg2;
- (id)useKitGray;
- (id)packageBatchOwner;
- (void).cxx_destruct;
@end
