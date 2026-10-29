@interface WCAdHalfScreenContainerInfo : NSObject
{
    BOOL _isSubmitBtnShow; // +0x8
    NSString * _headImageUrl; // +0x10
    NSString * _title; // +0x18
    NSString * _desc; // +0x20
    NSString * _tips; // +0x28
    NSString * _btnTitle; // +0x30
}
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (id)btnTitle;
- (void)setBtnTitle:(id)arg1;
- (BOOL)isSubmitBtnShow;
- (void)setIsSubmitBtnShow:(BOOL)arg1;
- (void).cxx_destruct;
@end

