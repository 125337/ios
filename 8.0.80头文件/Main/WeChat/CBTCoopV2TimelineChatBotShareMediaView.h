@interface CBTCoopV2TimelineChatBotShareMediaView : MMUIView
{
    WCDataItem * _dataItem; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _descLabel; // +0x18
    UILabel * _nameLabel; // +0x20
}
+ (double)lineHeightForFont:(id)arg1;
+ (id)titleTextForDataItem:(id)arg1;
+ (id)descTextForDataItem:(id)arg1;
+ (double)textHeightForText:(id)arg1 font:(id)arg2 width:(double)arg3 maxLines:(long long)arg4;
+ (double)renderedHeightForDataItem:(id)arg1;
- (id)initWithDataItem:(id)arg1;
- (void)ensureSubviews;
- (void)layoutSubviews;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (void).cxx_destruct;
@end
