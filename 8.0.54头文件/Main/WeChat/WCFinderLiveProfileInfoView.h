@interface WCFinderLiveProfileInfoView : MMUIView
{
    MMUILabel * _titleLabel; // +0x8
    MMUILabel * _valueLabel; // +0x10
    UIView * _seperatorLine; // +0x18
    FinderAudienceLiveInfoItem * _item; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)initView;
- (void)updateWithAudienceLiveInfoItem:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (id)seperatorLine;
- (void)setSeperatorLine:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end

