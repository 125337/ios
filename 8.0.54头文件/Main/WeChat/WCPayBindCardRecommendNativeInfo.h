@interface WCPayBindCardRecommendNativeInfo : NSObject
{
    NSString * _wording; // +0x8
    NSString * _icon; // +0x10
    NSString * _btn_text; // +0x18
    NSString * _title; // +0x20
    NSString * _small_title; // +0x28
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)btn_text;
- (void)setBtn_text:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)small_title;
- (void)setSmall_title:(id)arg1;
- (void).cxx_destruct;
@end

