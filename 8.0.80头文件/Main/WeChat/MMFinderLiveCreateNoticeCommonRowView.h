@interface MMFinderLiveCreateNoticeCommonRowView : UIView
{
    NSString * _title; // +0x8
    NSString * _detail; // +0x10
    UIView * _bottomLine; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _detailLabel; // +0x28
    UIImageView * _arrowView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setTitle:(id)arg1;
- (void)setDetail:(id)arg1;
- (BOOL)arrowViewHidden;
- (void)setArrowViewHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (id)title;
- (id)detail;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end
