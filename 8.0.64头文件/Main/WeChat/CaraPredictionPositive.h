@interface CaraPredictionPositive : WXPBGeneratedMessage
+ (void)initialize;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 positive:(BOOL)arg2 prob:(float)arg3;
- (BOOL)isPositiveValid;
- (BOOL)isProbValid;
@end
