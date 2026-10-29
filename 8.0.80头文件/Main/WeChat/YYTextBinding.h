@interface YYTextBinding : NSObject <NSCoding, NSCopying>
{
    BOOL _deleteConfirm; // +0x8
}
+ (id)bindingWithDeleteConfirm:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)deleteConfirm;
- (void)setDeleteConfirm:(BOOL)arg1;
@end
