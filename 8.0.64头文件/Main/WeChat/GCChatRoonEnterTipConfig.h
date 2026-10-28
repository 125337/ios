@interface GCChatRoonEnterTipConfig : NSObject
{
    NSString * _title; // +0x8
    NSAttributedString * _content; // +0x10
    NSString * _userIconImg; // +0x18
    NSString * _conditionTip; // +0x20
    NSString * _btnText; // +0x28
    UIColor * _backGroundColor; // +0x30
    NSString * _backGroundImage; // +0x38
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)userIconImg;
- (void)setUserIconImg:(id)arg1;
- (id)conditionTip;
- (void)setConditionTip:(id)arg1;
- (id)btnText;
- (void)setBtnText:(id)arg1;
- (id)backGroundColor;
- (void)setBackGroundColor:(id)arg1;
- (id)backGroundImage;
- (void)setBackGroundImage:(id)arg1;
- (void).cxx_destruct;
@end
