@interface MMBGMSelectedTabTableLocalImportHeaderCell : MMBGMSelectedTabTableBaseCell
{
    UILabel * _titleLabel; // +0x8
}
+ (id)cellID;
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupSubViews;
- (void)setupConstraints;
- (void)setupAccessibility;
- (void)updateWithMusicData:(id)arg1 config:(id)arg2 globalConfig:(id)arg3 sourceTabType:(unsigned long long)arg4;
- (void)setIsCellSelected:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
