@interface MMFinderLiveFansGroupFanNoticeCell : MMFinderLiveFansGroupDetailBaseTableViewCell
{
    id /* block */ _onViewImageCallback; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _detailLabel; // +0x20
    MMWebImageView * _noticeImageView; // +0x28
    MMFinderLiveFansGroupInvisibleTipView * _invisibleTipView; // +0x30
}
+ (double)cellHeightWithDesc:(id)arg1 imageUrlString:(id)arg2 maxWidth:(double)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configWithDesc:(id)arg1 imageUrlString:(id)arg2;
- (void)setInvisible:(BOOL)arg1 invisibleTips:(id)arg2;
- (void)layoutSubviews;
- (void)initUI;
- (void)onTapImageView:(id)arg1;
- (id /* block */)onViewImageCallback;
- (void)setOnViewImageCallback:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)noticeImageView;
- (void)setNoticeImageView:(id)arg1;
- (id)invisibleTipView;
- (void)setInvisibleTipView:(id)arg1;
- (void).cxx_destruct;
@end

