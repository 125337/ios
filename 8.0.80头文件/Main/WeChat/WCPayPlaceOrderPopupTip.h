@interface WCPayPlaceOrderPopupTip : NSObject
{
    NSString * _liteapp_id; // +0x8
    NSString * _liteapp_path; // +0x10
    NSString * _popup_params; // +0x18
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)liteapp_id;
- (void)setLiteapp_id:(id)arg1;
- (id)liteapp_path;
- (void)setLiteapp_path:(id)arg1;
- (id)popup_params;
- (void)setPopup_params:(id)arg1;
- (void).cxx_destruct;
@end
