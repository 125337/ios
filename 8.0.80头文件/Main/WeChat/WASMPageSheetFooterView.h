@interface WASMPageSheetFooterView : WAAuthPageSheetFooterView
{
    BOOL _smUICreated; // +0x8
    UIButton * _declineButton; // +0x10
    UIButton * _keepOptionButton; // +0x18
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
+ (double)rejectButtonTopWithKeepOptionDataModel:(id)arg1;
+ (BOOL)isAgentModeWithDataModel:(id)arg1;
+ (CGSize)keepOptionIconSizeWithDataModel:(id)arg1;
+ (id)keepOptionTitleFontWithDataModel:(id)arg1;
+ (double)keepOptionLeftPaddingWithDataModel:(id)arg1;
+ (UIEdgeInsets)keepOptionImageEdgeInsetsWithDataModel:(id)arg1;
+ (UIEdgeInsets)keepOptionContentEdgeInsetsWithDataModel:(id)arg1;
+ (id)keepOptionUncheckedImageWithDataModel:(id)arg1;
+ (id)keepOptionCheckedImageWithDataModel:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setViewDataModel:(id)arg1;
- (void)setSMUI;
- (void)applyCompletedTailIfReady;
- (void)layoutCompletedTailViews;
- (id)declineButton;
- (void)setDeclineButton:(id)arg1;
- (id)keepOptionButton;
- (void)setKeepOptionButton:(id)arg1;
- (BOOL)smUICreated;
- (void)setSmUICreated:(BOOL)arg1;
- (void).cxx_destruct;
@end
