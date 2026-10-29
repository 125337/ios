@interface ChatBotMiniTaskCell : MiniTaskCollectionBaseCell
{
    UIImageView * _coverImageView; // +0x8
    UIImageView * _extraIconImageView; // +0x10
    UITextView * _titleLabel; // +0x18
    MMUILabel * _descLabel; // +0x20
    MMUILabel * _dateLabel; // +0x28
    UIImageView * _bizIconView; // +0x30
}
- (id)snapShotView;
- (CGRect)menuPopoverFrame;
- (void)setupLayout;
- (void)resetContentViews;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (BOOL)isMsgCell;
- (void)onLongPress:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)extraIconImageView;
- (void)setExtraIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)dateLabel;
- (void)setDateLabel:(id)arg1;
- (id)bizIconView;
- (void)setBizIconView:(id)arg1;
- (void).cxx_destruct;
@end
