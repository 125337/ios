@interface CBTAsstBoardRecQuestionsCellView : CBTAsstBoardBaseCellView
{
    NSMutableArray * _questionButtons; // +0x8
    NSMutableArray * _questionLabels; // +0x10
}
- (void)prepareForReuse;
- (id)recQuestionsViewModel;
- (BOOL)disablesLongPressMenu;
- (void)setupUI;
- (void)traitCollectionDidChange:(id)arg1;
- (id)resolvedTextColor;
- (id)currentArrowImageForFont:(id)arg1;
- (id)renderAttributedStringForQuestion:(id)arg1 layout:(struct)arg2 font:(id)arg3;
- (void)layoutQuestionButtons;
- (id)makeQuestionButtonWithTag:(unsigned long long)arg1 title:(id)arg2;
- (id)makeQuestionLabelInButton:(id)arg1 layout:(struct)arg2 title:(id)arg3 font:(id)arg4;
- (void)applyAccessibilityToButton:(id)arg1 title:(id)arg2;
- (void)refreshTheme;
- (void)onAppear;
- (void)checkPendingFQFirstTokenReport;
- (void)onClickButton:(id)arg1;
- (void)onButtonTouchDown:(id)arg1;
- (void)onButtonTouchCancel:(id)arg1;
- (id)questionButtons;
- (void)setQuestionButtons:(id)arg1;
- (id)questionLabels;
- (void)setQuestionLabels:(id)arg1;
- (void).cxx_destruct;
@end
