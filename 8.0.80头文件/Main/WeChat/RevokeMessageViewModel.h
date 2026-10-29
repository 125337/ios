@interface RevokeMessageViewModel : BaseMessageViewModel
{
    BOOL _isFolding; // +0x5a
    BOOL _hasExpandBtn; // +0x5b
    NSMutableArray * _revokeStyle; // +0x60
    CGSize _revokeItemSize; // +0x68
    CGSize _expandButtonSize; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
+ (BOOL)canCreateMessageViewModelWhilePreload;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (double)textFontSize;
- (unsigned long long)parserType;
- (id)revokeWrap;
- (BOOL)isTailPart;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (void)setRead;
- (CGSize)revokeItemSize;
- (void)setRevokeItemSize:(CGSize)arg1;
- (id)revokeStyle;
- (void)setRevokeStyle:(id)arg1;
- (CGSize)expandButtonSize;
- (void)setExpandButtonSize:(CGSize)arg1;
- (BOOL)isFolding;
- (void)setIsFolding:(BOOL)arg1;
- (BOOL)hasExpandBtn;
- (void)setHasExpandBtn:(BOOL)arg1;
- (void).cxx_destruct;
@end
