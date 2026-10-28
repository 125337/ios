@interface LiteAppTextInputPlatformView : NSObject <FlutterPlatformView>
{
    NSString * _type; // +0x8
    NSString * _data; // +0x10
    UIView * _view; // +0x18
}
- (id)initWithType:(id)arg1 data:(id)arg2;
- (void)setData:(id)arg1;
- (void)setupLiteAppKeyboardPay:(id)arg1 type:(long long)arg2;
- (void)setupLiteAppKeyboardDefault:(id)arg1 json:(id)arg2;
- (void)setupLiteAppKeyboardSafePassword:(id)arg1;
- (long long)getLiteAppSafePasswordKeyboardPwdViewStyle:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)data;
- (id)view;
- (void)setView:(id)arg1;
- (void).cxx_destruct;
@end
