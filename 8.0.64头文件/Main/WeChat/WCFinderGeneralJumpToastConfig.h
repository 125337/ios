@interface WCFinderGeneralJumpToastConfig : NSObject
{
    NSString * _msg; // +0x8
    NSString * _cancel; // +0x10
    NSString * _confirm; // +0x18
    WCFinderGeneralExtConfigModel * _extConfig; // +0x20
    NSArray * _buttonArray; // +0x28
    NSArray * _buttonContentArray; // +0x30
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)buttonArray;
- (id)msg;
- (void)setMsg:(id)arg1;
- (id)cancel;
- (void)setCancel:(id)arg1;
- (id)confirm;
- (void)setConfirm:(id)arg1;
- (id)extConfig;
- (void)setExtConfig:(id)arg1;
- (void)setButtonArray:(id)arg1;
- (id)buttonContentArray;
- (void)setButtonContentArray:(id)arg1;
- (void).cxx_destruct;
@end
