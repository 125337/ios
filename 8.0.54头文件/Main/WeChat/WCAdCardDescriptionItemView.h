@interface WCAdCardDescriptionItemView : UIView
{
    WCAdSellingPointInfo * _itemInfo; // +0x8
    long long _buttonStyle; // +0x10
    WCAdURLImageView * _iconView; // +0x18
    MMUILabel * _titleView; // +0x20
    MMUILabel * _descView; // +0x28
}
+ (double)heightWithItemInfo:(id)arg1 buttonStyle:(long long)arg2 maxWidth:(double)arg3;
+ (double)heightForWording:(id)arg1 font:(id)arg2 maxWidth:(double)arg3 isSingleLine:(BOOL)arg4;
+ (double)wordingMaxWidthForWidth:(double)arg1 iconUrl:(id)arg2;
+ (id)fontForTitleWithItemInfo:(id)arg1 buttonStyle:(long long)arg2;
+ (id)fontForDescWithItemInfo:(id)arg1 buttonStyle:(long long)arg2;
+ (id)textColorForDescWithItemInfo:(id)arg1 buttonStyle:(long long)arg2;
- (id)initWithFrame:(CGRect)arg1 itemInfo:(id)arg2 buttonStyle:(long long)arg3;
- (void)generateViews;
- (void)layoutSubviews;
- (id)iconView;
- (id)titleView;
- (id)descView;
- (id)createTextViewWithContent:(id)arg1 textColor:(id)arg2 font:(id)arg3 maxWidth:(double)arg4 isSingleLine:(BOOL)arg5;
- (void)updateWidthForRichTextView:(id)arg1;
- (id)itemInfo;
- (void)setItemInfo:(id)arg1;
- (long long)buttonStyle;
- (void)setButtonStyle:(long long)arg1;
- (void)setIconView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setDescView:(id)arg1;
- (void).cxx_destruct;
@end

