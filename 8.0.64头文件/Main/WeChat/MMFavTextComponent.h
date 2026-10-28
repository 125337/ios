@interface MMFavTextComponent : MMComponent
{
    RichTextView * m_titleLabel; // +0x10
    FavAttributeCPLabel * m_titleSearchLabel; // +0x18
    FavAttributeCPLabel * m_desLabel; // +0x20
}
+ (double)calHeightWithComData:(id)arg1;
+ (id)getCurTitleFont:(id)arg1;
+ (id)getCurDescFont:(id)arg1;
+ (double)getCurTitleLineNum:(id)arg1;
+ (double)getCurDesLineNum:(id)arg1;
- (BOOL)isEmpty;
- (void)setHighlightContent:(id)arg1 Keywords:(id)arg2;
- (void)configLabel;
- (void)changeWidth:(double)arg1;
- (void)configContentLayout;
- (void).cxx_destruct;
@end
