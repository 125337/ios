@interface QGPCommandConfig : NSObject
{
    BOOL _hasReturn; // +0x8
    SEL _selector; // +0x10
    NSString * _commandClsName; // +0x18
}
+ (id)createSelector:(SEL)arg1 commandClsName:(id)arg2 hasReturn:(BOOL)arg3;
- (BOOL)isValid;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (BOOL)hasReturn;
- (void)setHasReturn:(BOOL)arg1;
- (id)commandClsName;
- (void)setCommandClsName:(id)arg1;
- (void).cxx_destruct;
@end

