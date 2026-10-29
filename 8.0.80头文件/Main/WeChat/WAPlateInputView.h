@interface WAPlateInputView : MMUIView <WAPlateLabelDelegate>
{
    NSObject<WAPlateInputViewDelegate> * _delegate; // +0x8
    NSMutableArray * _labelArr; // +0x10
    WAPlateLabel * _lastLabel; // +0x18
    UILabel * _dotLabel; // +0x20
    UIImageView * _dotImg; // +0x28
    WAPlateItem * _currentItem; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)genPlateLabelWithFrame:(CGRect)arg1 type:(unsigned long long)arg2 tag:(long long)arg3;
- (void)createSubViewsWithFrame:(CGRect)arg1;
- (void)loadPlateItem:(id)arg1;
- (void)tapLabelClick:(id)arg1;
- (void)becomeFoucsLabelWithIdx:(long long)arg1;
- (void)didInputPlateLabel:(id)arg1 buttonType:(unsigned long long)arg2;
- (void)nextLabel:(id)arg1;
- (void)deleteLabel:(id)arg1;
- (BOOL)disableSpecialBtn:(id)arg1;
- (BOOL)checkCanFinishInput;
- (void)showToastWithText:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)labelArr;
- (void)setLabelArr:(id)arg1;
- (id)lastLabel;
- (void)setLastLabel:(id)arg1;
- (id)dotLabel;
- (void)setDotLabel:(id)arg1;
- (id)dotImg;
- (void)setDotImg:(id)arg1;
- (id)currentItem;
- (void)setCurrentItem:(id)arg1;
- (void).cxx_destruct;
@end
