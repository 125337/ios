@interface SolitaireExtracter : NSObject
+ (id)getSolitaireHeaderWithText:(id)arg1 HasHeader:(BOOL *)arg2 Separator:(id *)arg3;
+ (id)getSolitaireInfoWithKeywordWithText:(id)arg1;
+ (id)getSolitaireInfoWithText:(id)arg1;
+ (id)getSolitaireTailWithText:(id)arg1;
+ (void)extractSolitaireExampleWithText:(id)arg1 Header:(id *)arg2 Example:(id *)arg3;
+ (id)extractSolitaireContent:(id)arg1 SolitaireHeader:(id)arg2 SolitaireTail:(id)arg3;
+ (id)getSubStringWithContent:(id)arg1 range:(_NSRange)arg2;
+ (id)extractSolitaireInfoWithAppmsg:(id)arg1;
+ (id)getArrSolitaireContentWithText:(id)arg1;
+ (id)getArrSolitaireContentWithText:(id)arg1 ForFirstItem:(BOOL)arg2;
+ (id)getArrSolitaireContentWithText:(id)arg1 Operation:(id)arg2 EmptyLineCount:(unsigned int *)arg3 ForFirstItem:(BOOL)arg4;
@end
