@interface TextStateDataSimpleProvider : NSObject <TextStateCardListDataProvider>
{
    BOOL _visable; // +0x8
    TextStateModel * _textState; // +0x10
}
- (BOOL)visable;
- (unsigned long long)count;
- (unsigned long long)beginIndex;
- (void)configureCardView:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)textState;
- (void)setTextState:(id)arg1;
- (void)setVisable:(BOOL)arg1;
- (void).cxx_destruct;
@end

