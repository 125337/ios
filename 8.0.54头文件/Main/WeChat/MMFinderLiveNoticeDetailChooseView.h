@interface MMFinderLiveNoticeDetailChooseView : MMUIButton
{
    BOOL _showArr; // +0x8
    MMUILabel * _topLabel; // +0x10
    MMUILabel * _detailLabel; // +0x18
    MMUIImageView * _arrowView; // +0x20
}
- (void)updateTopContent:(id)arg1 detailContent:(id)arg2 showArr:(BOOL)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)topLabel;
- (id)detailLabel;
- (id)arrowView;
- (id)accessibilityLabel;
- (BOOL)showArr;
- (void)setShowArr:(BOOL)arg1;
- (void)setTopLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void).cxx_destruct;
@end

