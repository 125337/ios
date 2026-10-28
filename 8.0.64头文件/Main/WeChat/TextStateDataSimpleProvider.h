@interface TextStateDataSimpleProvider : NSObject <TextStateCardListDataProvider, MultipleTextStateCardViewDataSource>
{
    BOOL _visable; // +0x8
    TextStateModel * _textState; // +0x10
    long long _cardReportScene; // +0x18
}
- (BOOL)visable;
- (unsigned long long)count;
- (unsigned long long)beginIndex;
- (void)configureCardView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)configureSingleCardView:(id)arg1 forMultipleCardView:(id)arg2;
- (id)textState;
- (void)setTextState:(id)arg1;
- (void)setVisable:(BOOL)arg1;
- (long long)cardReportScene;
- (void)setCardReportScene:(long long)arg1;
- (void).cxx_destruct;
@end
