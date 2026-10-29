@interface WCFinderNotifySelectView : UIView
{
    id <WCFinderNotifySelectViewDelegate> _delegate; // +0x8
    unsigned long long _currentSelectType; // +0x10
    UIButton * _selectButton; // +0x18
    UIView * _selectLine; // +0x20
    NSMutableArray * _buttonArray; // +0x28
    NSMutableArray * _labelArray; // +0x30
    WCFinderContact * _contact; // +0x38
    double _buttonTotalWidthSize; // +0x40
}
+ (id)getNotifySelectButtonTitleWithIndex:(unsigned long long)arg1;
+ (double)selectViewWidth;
- (id)initWithFrame:(CGRect)arg1 contact:(id)arg2;
- (void)setUpUI;
- (BOOL)isAccessibilityElement;
- (void)layoutUI;
- (void)clickSelectButton:(id)arg1;
- (void)setSelectButton:(id)arg1;
- (void)setSelectButton:(id)arg1 isTriggerByUser:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setSelectType:(unsigned long long)arg1;
- (void)setSelectType:(unsigned long long)arg1 isTriggerByUser:(BOOL)arg2;
- (long long)getUnreadCountFromRedDotLabelByType:(unsigned long long)arg1;
- (void)setUnreadCount:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)clearUnreadCountWithType:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)delegate;
- (unsigned long long)currentSelectType;
- (void)setCurrentSelectType:(unsigned long long)arg1;
- (id)selectButton;
- (id)selectLine;
- (void)setSelectLine:(id)arg1;
- (id)buttonArray;
- (void)setButtonArray:(id)arg1;
- (id)labelArray;
- (void)setLabelArray:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (double)buttonTotalWidthSize;
- (void)setButtonTotalWidthSize:(double)arg1;
- (void).cxx_destruct;
@end
