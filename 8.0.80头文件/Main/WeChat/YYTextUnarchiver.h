@interface YYTextUnarchiver : NSKeyedUnarchiver <NSKeyedUnarchiverDelegate>
+ (id)unarchiveObjectWithData:(id)arg1;
+ (id)unarchiveObjectWithFile:(id)arg1;
- (id)init;
- (id)initForReadingWithData:(id)arg1;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
@end
