@interface RealnameHalfPageDialog : NSObject
{
    NSString * _title; // +0x8
    NSString * _wording; // +0x10
    NSString * _btn_cancel; // +0x18
    NSString * _btn_confirm; // +0x20
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)btn_cancel;
- (void)setBtn_cancel:(id)arg1;
- (id)btn_confirm;
- (void)setBtn_confirm:(id)arg1;
- (void).cxx_destruct;
@end
