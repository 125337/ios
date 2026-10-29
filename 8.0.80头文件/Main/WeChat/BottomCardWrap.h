@interface BottomCardWrap : NSObject
{
    BOOL _isShowHintWord; // +0x8
    NSString * _iconUrl; // +0x10
    NSString * _dmIconUrl; // +0x18
    NSString * _title; // +0x20
    UIColor * _titleWxcolors; // +0x28
    NSString * _subTitle; // +0x30
    UIColor * _subTitleWxcolors; // +0x38
    UIColor * _backgroundWxcolors; // +0x40
    NSString * _backgroundImgUrl; // +0x48
    NSString * _dmBackgroundImgUrl; // +0x50
}
- (BOOL)isValid;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)dmIconUrl;
- (void)setDmIconUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleWxcolors;
- (void)setTitleWxcolors:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)subTitleWxcolors;
- (void)setSubTitleWxcolors:(id)arg1;
- (id)backgroundWxcolors;
- (void)setBackgroundWxcolors:(id)arg1;
- (id)backgroundImgUrl;
- (void)setBackgroundImgUrl:(id)arg1;
- (id)dmBackgroundImgUrl;
- (void)setDmBackgroundImgUrl:(id)arg1;
- (BOOL)isShowHintWord;
- (void)setIsShowHintWord:(BOOL)arg1;
- (void).cxx_destruct;
@end
