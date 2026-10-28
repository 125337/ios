@interface MMLivePrecheckResultItem : NSObject
{
    BOOL _isFail; // +0x8
    BOOL _isRealname; // +0x9
    BOOL _cannotJumpVerify; // +0xa
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (BOOL)isFail;
- (void)setIsFail:(BOOL)arg1;
- (BOOL)isRealname;
- (void)setIsRealname:(BOOL)arg1;
- (BOOL)cannotJumpVerify;
- (void)setCannotJumpVerify:(BOOL)arg1;
- (void).cxx_destruct;
@end
