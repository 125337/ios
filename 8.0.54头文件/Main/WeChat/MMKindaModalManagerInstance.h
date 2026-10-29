@interface MMKindaModalManagerInstance : NSObject
{
    NSMutableArray * _modals; // +0x8
}
+ (id)shared;
- (id)init;
- (void)dealloc;
- (void)keyboardWillShown:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (id)modals;
- (void)setModals:(id)arg1;
- (void).cxx_destruct;
@end

