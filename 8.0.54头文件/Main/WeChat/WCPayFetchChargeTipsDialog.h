@interface WCPayFetchChargeTipsDialog : NSObject
{
    NSString * _title; // +0x8
    NSString * _content; // +0x10
    NSArray * _show_infos; // +0x18
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)show_infos;
- (void)setShow_infos:(id)arg1;
- (void).cxx_destruct;
@end

