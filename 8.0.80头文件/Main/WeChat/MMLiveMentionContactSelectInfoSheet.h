@interface MMLiveMentionContactSelectInfoSheet : MMPageSheetBaseView
{
    MMUILabel * _titleLabel; // +0x8
    MMUILabel * _descLabel; // +0x10
}
+ (id)showFromSheet:(id)arg1;
- (id)init;
- (void)setupPageSheetConfig;
- (void)setupSubviews;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end
