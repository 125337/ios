@interface MMLiveInputCommitActionState : NSObject
{
    BOOL _isCurrentForwardToFloatBarrage; // +0x8
    BOOL _isCurrentForwardToProductQuestion; // +0x9
    MMFinderLiveFloatMsg * _floatMsgToUse; // +0x10
    FinderWindowProductInfo * _questionProductInfo; // +0x18
}
- (BOOL)isCurrentForwardToFloatBarrage;
- (void)setIsCurrentForwardToFloatBarrage:(BOOL)arg1;
- (id)floatMsgToUse;
- (void)setFloatMsgToUse:(id)arg1;
- (BOOL)isCurrentForwardToProductQuestion;
- (void)setIsCurrentForwardToProductQuestion:(BOOL)arg1;
- (id)questionProductInfo;
- (void)setQuestionProductInfo:(id)arg1;
- (void).cxx_destruct;
@end
