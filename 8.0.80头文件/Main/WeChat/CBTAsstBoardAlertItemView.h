@interface CBTAsstBoardAlertItemView : UIView
{
    UILabel * _contentLabel; // +0x8
    UILabel * _timeLabel; // +0x10
    UIView * _labelsContainerView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)setupWithContent:(id)arg1 time:(id)arg2;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)labelsContainerView;
- (void)setLabelsContainerView:(id)arg1;
- (void).cxx_destruct;
@end
