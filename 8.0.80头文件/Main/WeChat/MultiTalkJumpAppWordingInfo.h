@interface MultiTalkJumpAppWordingInfo : NSObject
{
    NSString * _name; // +0x8
    NSString * _dialogTitle; // +0x10
    NSString * _dialogGotoButtonTitle; // +0x18
    NSString * _bannerTitle; // +0x20
    NSString * _bannerContent; // +0x28
}
- (id)initWithDic:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)dialogTitle;
- (void)setDialogTitle:(id)arg1;
- (id)dialogGotoButtonTitle;
- (void)setDialogGotoButtonTitle:(id)arg1;
- (id)bannerTitle;
- (void)setBannerTitle:(id)arg1;
- (id)bannerContent;
- (void)setBannerContent:(id)arg1;
- (void).cxx_destruct;
@end
