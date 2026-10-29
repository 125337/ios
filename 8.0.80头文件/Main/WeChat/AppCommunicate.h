@interface AppCommunicate : NSObject
+ (id)getDataPasteboardName;
+ (id)getDataPasteboard;
+ (id)propertyListForAllApp:(unsigned long long *)arg1 orginTextLenPtr:(unsigned long long *)arg2;
+ (id)propertyListForAppID:(id)arg1 dataLenPtr:(unsigned long long *)arg2 orginTextLenPtr:(unsigned long long *)arg3;
+ (BOOL)setPropertyList:(id)arg1 forAppID:(id)arg2 dataLenPtr:(unsigned long long *)arg3 orginTextLenPtr:(unsigned long long *)arg4 canReadPasteBoard:(BOOL)arg5;
+ (BOOL)setAppCommunicateData:(id)arg1 forAppID:(id)arg2;
+ (id)appCommunicateDataForAppID:(id)arg1;
+ (id)processPropertyList:(id)arg1;
+ (id)appCommunicateDataForString:(id)arg1;
+ (id)appCommunicateDataForDic:(id)arg1;
@end
