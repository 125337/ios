@interface MMFinderLivePageSheetNoticeActionConfig : NSObject
{
    NSString * _actionTitle; // +0x8
    id /* block */ _actionBlock; // +0x10
    UIColor * _textColor; // +0x18
    UIColor * _bgColor; // +0x20
}
+ (id)cancelAction;
+ (id)commonAction;
- (id)actionTitle;
- (void)setActionTitle:(id)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (void).cxx_destruct;
@end

