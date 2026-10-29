@interface MMCleanDataUtitlity : NSObject
+ (unsigned long long)getMessageDBSize;
+ (unsigned long long)getPureMessageDBSize;
+ (unsigned long long)getPureFtsDBSize;
+ (unsigned long long)getChatLogDBSize;
+ (unsigned long long)getAppGroupSize;
@end
