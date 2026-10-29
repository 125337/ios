@interface GameNoticeAdditionalInfo : NSObject
{
    NSString * _iconUrl; // +0x8
    NSString * _headText; // +0x10
    NSString * _title; // +0x18
    NSString * _subTitle; // +0x20
    NSString * _buttonTitle; // +0x28
    NSString * _buttonJumpUrl; // +0x30
}
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)headText;
- (void)setHeadText:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (id)buttonJumpUrl;
- (void)setButtonJumpUrl:(id)arg1;
- (void).cxx_destruct;
@end
