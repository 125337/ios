@interface TextState3rdPartyUtil : NSObject
+ (id)sourceIdForType:(unsigned int)arg1;
+ (Class)handlerClassForType:(unsigned int)arg1;
+ (id)stringFromTextState3rdPartyDataType:(unsigned int)arg1;
+ (BOOL)isSupportType:(unsigned int)arg1;
+ (id)handlerFromDataItem:(id)arg1 context:(id)arg2;
+ (id)handlerFromSourceId:(id)arg1 dataItems:(id)arg2 sourceDataItems:(id)arg3 context:(id)arg4;
+ (id)handlerFromDataItems:(id)arg1 context:(id)arg2;
@end
