@interface SolitaireReporter : NSObject
+ (void)reportActiveWithSolitaire:(id)arg1 FromUser:(id)arg2;
+ (void)reportJoinSolitaire:(id)arg1 NewSolitaire:(id)arg2;
+ (void)reportDropSolitaire:(id)arg1 Reason:(unsigned long long)arg2;
+ (void)reportFormatInputEnterWithSolitaire:(id)arg1 EnterScene:(unsigned long long)arg2 ExitType:(unsigned long long)arg3;
+ (void)reportTipsShowWithSolitaire:(id)arg1;
+ (void)reportClickWithSolitaire:(id)arg1 ClickType:(unsigned long long)arg2 SourceType:(unsigned long long)arg3;
+ (void)reportCommonClickWithSolitaire:(id)arg1 ClickType:(unsigned long long)arg2 ExpandType:(unsigned long long)arg3;
+ (void)reportDeleteExistWithSolitaire:(id)arg1 InfoObj:(id)arg2;
+ (void)reportExpandSolitaire:(id)arg1;
@end
