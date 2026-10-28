@interface WCPayLargeAccountTipsDialog : NSObject
{
    NSString * _title; // +0x8
    NSString * _content; // +0x10
    NSString * _button_name; // +0x18
    NSString * _button_jump_url; // +0x20
}
+ (id)GenFromDictionary:(id)arg1;
- (void)genFromDic:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)button_name;
- (void)setButton_name:(id)arg1;
- (id)button_jump_url;
- (void)setButton_jump_url:(id)arg1;
- (void).cxx_destruct;
@end
