@interface WCAopInstanceInfo : NSObject
{
    id _originObj; // +0x8
    SEL _selector; // +0x10
    NSArray * _beforeActions; // +0x18
    WCAopBlockImp * _replaceBlock; // +0x20
    NSArray * _afterActions; // +0x28
}
- (BOOL)isClear;
- (void)clear;
- (void)dealloc;
- (id)originObj;
- (void)setOriginObj:(id)arg1;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (id)beforeActions;
- (void)setBeforeActions:(id)arg1;
- (id)replaceBlock;
- (void)setReplaceBlock:(id)arg1;
- (id)afterActions;
- (void)setAfterActions:(id)arg1;
- (void).cxx_destruct;
@end

