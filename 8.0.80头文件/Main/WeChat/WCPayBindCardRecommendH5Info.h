@interface WCPayBindCardRecommendH5Info : NSObject
{
    NSString * _url; // +0x8
    NSString * _wording; // +0x10
    NSString * _icon; // +0x18
    NSString * _btn_text; // +0x20
    NSString * _type; // +0x28
    NSString * _title; // +0x30
    NSString * _small_title; // +0x38
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)btn_text;
- (void)setBtn_text:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)small_title;
- (void)setSmall_title:(id)arg1;
- (void).cxx_destruct;
@end
