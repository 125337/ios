@interface FunctionCallUtils : NSObject
+ (id)formatTimestampToString:(unsigned int)arg1;
+ (id)buildSuccessResult;
+ (id)buildErrorResult:(id)arg1;
+ (void)setErrorResult:(id)arg1 withMessage:(id)arg2;
+ (void)setSuccessResultFlag:(id)arg1;
@end
