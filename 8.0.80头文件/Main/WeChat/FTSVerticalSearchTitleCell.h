@interface FTSVerticalSearchTitleCell : MMTableViewCell
{
    BOOL _enableFeedback; // +0x8
    id <FTSVerticalSearchTitleCellDelegate> _delegate; // +0x10
    GeneralHStack * _hStack; // +0x18
    NSString * __currSearchText; // +0x20
    NSString * __relatedWords; // +0x28
}
+ (double)getCellHeight:(double)arg1;
+ (id)GenHStack;
- (void)configureWithData:(id)arg1 resultWrap:(id)arg2;
- (void)updateTips:(id)arg1 needLineView:(BOOL)arg2;
- (void)formatRelatedWords:(id)arg1;
- (void)onClickBtn:(id)arg1;
- (BOOL)enableFeedback;
- (void)setEnableFeedback:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)hStack;
- (void)setHStack:(id)arg1;
- (id)_currSearchText;
- (void)set_currSearchText:(id)arg1;
- (id)_relatedWords;
- (void)set_relatedWords:(id)arg1;
- (void).cxx_destruct;
@end
