@interface MMFinderLiveNoticeModReminderSubView : MMUIView
{
    BOOL _isDisable; // +0x8
    int _type; // +0xc
    int _selectType; // +0x10
    id /* block */ _selectBlock; // +0x18
    unsigned long long _fromType; // +0x20
    MMUIButton * _bgButton; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUILabel * _stateLabel; // +0x38
    UIImageView * _selectStateImg; // +0x40
    UIView * _sepLine; // +0x48
}
- (void)updateType:(int)arg1 selectType:(int)arg2 isDisable:(BOOL)arg3 fromType:(unsigned long long)arg4;
- (BOOL)isSelect;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)actionClick;
- (id)sepLine;
- (id)bgButton;
- (id)titleLabel;
- (id)stateLabel;
- (id)selectStateImg;
- (id)accessibilityLabel;
- (id /* block */)selectBlock;
- (void)setSelectBlock:(id /* block */)arg1;
- (BOOL)isDisable;
- (void)setIsDisable:(BOOL)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)selectType;
- (void)setSelectType:(int)arg1;
- (unsigned long long)fromType;
- (void)setFromType:(unsigned long long)arg1;
- (void)setBgButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setStateLabel:(id)arg1;
- (void)setSelectStateImg:(id)arg1;
- (void)setSepLine:(id)arg1;
- (void).cxx_destruct;
@end
