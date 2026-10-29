@interface YYTextArchiver : NSKeyedArchiver <NSKeyedArchiverDelegate>
+ (id)archivedDataWithRootObject:(id)arg1;
+ (BOOL)archiveRootObject:(id)arg1 toFile:(id)arg2;
- (id)init;
- (id)initForWritingWithMutableData:(id)arg1;
- (id)archiver:(id)arg1 willEncodeObject:(id)arg2;
@end

