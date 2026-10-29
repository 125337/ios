@interface WCFinderGeneralJumpButton : NSObject
{
    int _jumpType; // +0x8
    NSString * _content; // +0x10
    unsigned long long _buttonStyle; // +0x18
    WCFinderGeneralExtConfigModel * _extConfig; // +0x20
    id /* block */ _jumpNextPostAction; // +0x28
    id /* block */ _hookWebVCBlock; // +0x30
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void)jumpAction;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned long long)buttonStyle;
- (void)setButtonStyle:(unsigned long long)arg1;
- (id)extConfig;
- (void)setExtConfig:(id)arg1;
- (int)jumpType;
- (void)setJumpType:(int)arg1;
- (id /* block */)jumpNextPostAction;
- (void)setJumpNextPostAction:(id /* block */)arg1;
- (id /* block */)hookWebVCBlock;
- (void)setHookWebVCBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

