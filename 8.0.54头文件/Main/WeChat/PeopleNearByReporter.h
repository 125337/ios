@interface PeopleNearByReporter : NSObject
+ (unsigned int)getFilterTypeFromSetting;
+ (void)reportStayTime:(unsigned long long)arg1;
+ (void)reportAction:(unsigned int)arg1 FilterType:(unsigned int)arg2 Scene:(unsigned int)arg3;
+ (void)reportUserInfoRelated:(id)arg1 userAtIndex:(unsigned long long)arg2 action:(unsigned int)arg3 filterType:(unsigned int)arg4 Scene:(int)arg5;
@end

