@interface MMFinderLiveNoticeShowReminderBottomView : MMUIButton
{
    BOOL _showArr; // +0x8
    int _selectType; // +0xc
    MMUILabel * _topLabel; // +0x10
    MMUILabel * _detailLabel; // +0x18
    MMUIImageView * _arrowView; // +0x20
    NSString * _topContent; // +0x28
}
- (void)updateSelectType:(int)arg1 showArr:(BOOL)arg2 topContent:(id)arg3;
- (BOOL)isAuto;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)topLabel;
- (id)detailLabel;
- (id)arrowView;
- (id)accessibilityLabel;
- (int)selectType;
- (void)setSelectType:(int)arg1;
- (BOOL)showArr;
- (void)setShowArr:(BOOL)arg1;
- (void)setTopLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setArrowView:(id)arg1;
- (id)topContent;
- (void)setTopContent:(id)arg1;
- (void).cxx_destruct;
@end

