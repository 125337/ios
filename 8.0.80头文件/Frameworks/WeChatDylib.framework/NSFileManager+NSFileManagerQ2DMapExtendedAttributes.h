@interface NSFileManager (NSFileManagerQ2DMapExtendedAttributes)
+ (id)Q2D_xattrStringValueForKey:(id)arg1 atURL:(id)arg2;
+ (BOOL)Q2D_setXAttrStringValue:(id)arg1 forKey:(id)arg2 atURL:(id)arg3;
- (id)_attributesOfItemAtPath:(id)arg1 followingSymLinks:(BOOL)arg2 error:(id *)arg3;
@end
