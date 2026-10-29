@interface WCPayOrderActivityControlItem : MMObject
{
    BOOL isButtonEnable; // +0x8
    BOOL isButtonHidden; // +0x9
    BOOL isActivityViewHidden; // +0xa
    NSString * activityUrl; // +0x10
    NSString * buttonTitle; // +0x18
}
- (id)activityUrl;
- (void)setActivityUrl:(id)arg1;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (BOOL)isButtonEnable;
- (void)setIsButtonEnable:(BOOL)arg1;
- (BOOL)isButtonHidden;
- (void)setIsButtonHidden:(BOOL)arg1;
- (BOOL)isActivityViewHidden;
- (void)setIsActivityViewHidden:(BOOL)arg1;
- (void).cxx_destruct;
@end

