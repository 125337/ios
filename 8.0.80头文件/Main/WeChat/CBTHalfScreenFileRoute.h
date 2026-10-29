@interface CBTHalfScreenFileRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (BOOL)isExternalEntryEnabled;
+ (void)showFromVC:(id)arg1 filePath:(id)arg2 fileName:(id)arg3 dismissCallback:(id /* block */)arg4;
+ (id)optionsWithFilePath:(id)arg1 fileName:(id)arg2 srcInfoParams:(id)arg3;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
@end
