@interface NSKeyedUnarchiver (SafeCoding)
+ (id)safeUnarchive:(id)arg1;
+ (id)safeUnarchive:(id)arg1 hasError:(BOOL *)arg2;
+ (id)safeUnarchiveFromData:(id)arg1;
+ (id)unSecureUnArchiveObjectWithData:(id)arg1;
@end
