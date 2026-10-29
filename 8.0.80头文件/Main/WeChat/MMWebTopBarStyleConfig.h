@interface MMWebTopBarStyleConfig : NSObject
{
    BOOL _isHideLoad; // +0x8
    NSString * _identity; // +0x10
    unsigned long long _priority; // +0x18
    NSString * _text; // +0x20
}
+ (id)topBarStyleWithId:(id)arg1 priority:(unsigned long long)arg2 text:(id)arg3 andHideLoad:(BOOL)arg4;
- (BOOL)isValid;
- (id)identity;
- (void)setIdentity:(id)arg1;
- (unsigned long long)priority;
- (void)setPriority:(unsigned long long)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (BOOL)isHideLoad;
- (void)setIsHideLoad:(BOOL)arg1;
- (void).cxx_destruct;
@end
