@interface UDRPath : NSObject
+ (id)getAbsolutePath:(id)arg1;
+ (id)getDirOfAFFUDR;
+ (id)getDirOfUDR;
+ (id)getProjectPath:(id)arg1;
+ (id)getResourcePath:(id)arg1 name:(id)arg2;
+ (id)getResourcePostPath:(id)arg1;
+ (id)getResourceTempPath:(id)arg1 name:(id)arg2;
+ (id)getResourceVirtualPath:(id)arg1 name:(id)arg2 md5:(id)arg3 originName:(id)arg4;
+ (id)decodeVirtualPath:(id)arg1;
+ (BOOL)resourceExist:(id)arg1;
@end
