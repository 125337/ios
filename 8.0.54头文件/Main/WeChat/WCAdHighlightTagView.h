@interface WCAdHighlightTagView : MMUIView
{
    WCDataItem * _dataItem; // +0x8
    WCAdHighlightTagInfo * _tagInfo; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _numberTitleLabel; // +0x20
    unsigned long long _contentItemScene; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 tagInfo:(id)arg2 dataItem:(id)arg3 contentItemScene:(unsigned long long)arg4;
- (void)initView;
- (id)titleLabel;
- (id)numberTitleLabel;
- (void)updateDataItem:(id)arg1;
- (void)updateView;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)tagInfo;
- (void)setTagInfo:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setNumberTitleLabel:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

